#include "stdafx.h"
#include "helper.hpp"
#include <inipp/inipp.h>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <safetyhook.hpp>

// UE4 SDK
#include "SDK/Engine_classes.hpp"

HMODULE baseModule = GetModuleHandle(NULL);
HMODULE thisModule;

// Logger and config setup
inipp::Ini<char> ini;
std::shared_ptr<spdlog::logger> logger;
string sFixName = "P3RFix";
string sFixVer = "1.2.3";
string sLogFile = "P3RFix.log";
string sConfigFile = "P3RFix.ini";
string sExeName;
filesystem::path sExePath;
filesystem::path sThisModulePath;
std::pair DesktopDimensions = { 0,0 };

// Ini Variables
bool bCustomResolution;
int iCustomResX = -1;
int iCustomResY = -1;
bool bHUDFix;
bool bAspectFix;
bool bFOVFix;
bool bSkipLogos;
int iSkipLogos;
bool bUncapMenuFPS;
bool bAdjustFPSCap;
float fFramerateCap;
bool bPauseOnFocusLoss;
bool bEnableConsole;
string sConsoleHotkey;
bool bScreenPercentage;
float fScreenPercentage = 100.0f;
bool bRenTexResMulti;
float fRenTexResUserMulti;
bool bMouseFix;
bool bIgnoreGamepad;
float fMouseMultiplierX = 1.0f;
float fMouseMultiplierY = 1.0f;

// Aspect ratio + HUD stuff
float fPi = (float)3.141592653;
float fNativeAspect = (float)16 / 9;
float fAspectRatio;
float fAspectMultiplier;
float fHUDWidth;
float fHUDHeight;
float fDefaultHUDWidth = (float)1920;
float fDefaultHUDHeight = (float)1080;
float fHUDWidthOffset;
float fHUDHeightOffset;

// Variables
int iFadeStatus = 0; // Initialise as not fading.
int iRenTexNo = 0;
int iHasPassedIntro = 0;
float fRenTexResMulti = 1.0f;
int iSkipLoopCount = 0;
int iRTCapX = 1920;
int iRTCapY = 1080;
BYTE iWindowFocusStatus = 0;
LPCWSTR sWindowClassName = L"UnrealWindow";
float fRawMouseX = 0.0f;
float fRawMouseY = 0.0f;
bool bLastValidInputWasFromMouse = false;
bool bCameraShouldMoveHasRunThisFrame = false;
float* fInputVectorPtr = 0;
bool bIntroSkipHasRun = false;

SafetyHookInline RenTexPostLoad{};
void* RenTexPostLoad_Hooked(uint8_t* thisptr)
{
    // Calculate optimal resolution multiplier assuming target is 1080p
    // Screen percentage is only retrieved when the hook is run, meaning that on first boot we have to assume it is 100%
    float fOptimalRenTexResMulti = (iCustomResY * (fScreenPercentage / 100)) / 1080;
    if (iCustomResX <= 1920 || iCustomResX <= 1080)
    {
        // Avoid lowering resolution of render targets when resolution is <1080p.
        fOptimalRenTexResMulti = 1.0f;
    }

    if (fRenTexResUserMulti == 1.0f)
    {
        // If set to 1, use the calculated optimal multiplier.
        fRenTexResMulti = fOptimalRenTexResMulti;
    }
    else
    {
        // If not set to 1, then multiply on top using user defined value.
        fRenTexResMulti = fOptimalRenTexResMulti * fRenTexResUserMulti;
    }

    if (fRenTexResMulti < 0.25f || fRenTexResMulti > 4.0f)
    {
        // Min = 25%, Max = 400%
        fRenTexResMulti = std::clamp(fRenTexResMulti, (float)0.25, (float)4);
        spdlog::warn("Render Texture 2D Resolution: fRenTexResMulti value invalid, clamped to {}", fRenTexResMulti);
    }
    spdlog::info("Render Texture 2D Resolution: fRenTexResMulti = {}", fRenTexResMulti);

    uint32_t* SizeX = (uint32_t*)(thisptr + 0x180);
    uint32_t* SizeY = (uint32_t*)(thisptr + 0x184);
    uint8_t* RTFormat = (uint8_t*)(thisptr + 0x19B);
    uint32_t* LightingGUID = (uint32_t*)(thisptr + 0x68);

    spdlog::info("Render Texture 2D Resolution: Old render texture resolution = {}x{}", *SizeX, *SizeY);

    *SizeX *= fRenTexResMulti;
    *SizeY *= fRenTexResMulti;

    if (*RTFormat == 6)
    {
        iRTCapX = *SizeX;
        iRTCapY = *SizeY;
    }

    spdlog::info("Render Texture 2D Resolution: New render texture resolution = {}x{}", *SizeX, *SizeY);

    iRenTexNo++;
    // Run original function
    return RenTexPostLoad.stdcall<void*>(thisptr);
}

HWND hWnd;
WNDPROC OldWndProc;
LRESULT __stdcall NewWndProc(HWND window, UINT message_type, WPARAM w_param, LPARAM l_param) {
    if (message_type == WM_ACTIVATEAPP && w_param == FALSE) {
        return 0;
    }
    else if (message_type == WM_KILLFOCUS) {
        return 0;
    }
    return CallWindowProc(OldWndProc, window, message_type, w_param, l_param);
};

void Logging()
{
    // Get this module path
    WCHAR thisModulePath[_MAX_PATH] = { 0 };
    GetModuleFileNameW(thisModule, thisModulePath, MAX_PATH);
    sThisModulePath = thisModulePath;
    sThisModulePath = sThisModulePath.remove_filename();

    // Get game name and exe path
    WCHAR exePath[_MAX_PATH] = { 0 };
    GetModuleFileNameW(baseModule, exePath, MAX_PATH);
    sExePath = exePath;
    sExeName = sExePath.filename().string();
    sExePath = sExePath.remove_filename();

    // spdlog initialisation
    {
        try
        {
            logger = spdlog::basic_logger_st(sFixName.c_str(), sThisModulePath.string() + sLogFile, true);
            spdlog::set_default_logger(logger);

            spdlog::flush_on(spdlog::level::debug);
            spdlog::info("----------");
            spdlog::info("{} v{} loaded.", sFixName.c_str(), sFixVer.c_str());
            spdlog::info("----------");
            spdlog::info("Path to logfile: {}", sThisModulePath.string() + sLogFile);
            spdlog::info("----------");

            // Log module details
            spdlog::info("Module Name: {0:s}", sExeName.c_str());
            spdlog::info("Module Path: {0:s}", sExePath.string());
            spdlog::info("Module Address: 0x{0:x}", (uintptr_t)baseModule);
            spdlog::info("Module Timestamp: {0:d}", Memory::ModuleTimestamp(baseModule));
            spdlog::info("----------");
        }
        catch (const spdlog::spdlog_ex& ex)
        {
            AllocConsole();
            FILE* dummy;
            freopen_s(&dummy, "CONOUT$", "w", stdout);
            std::cout << "Log initialisation failed: " << ex.what() << std::endl;
        }
    }
}

void ReadConfig()
{
    // Initialise config
    std::ifstream iniFile(sThisModulePath.string() + sConfigFile);
    if (!iniFile)
    {
        AllocConsole();
        FILE* dummy;
        freopen_s(&dummy, "CONOUT$", "w", stdout);
        std::cout << "" << sFixName.c_str() << " v" << sFixVer.c_str() << " loaded." << std::endl;
        std::cout << "ERROR: Could not locate config file." << std::endl;
        std::cout << "ERROR: Make sure " << sConfigFile.c_str() << " is located in " << sThisModulePath.string().c_str() << std::endl;
    }
    else
    {
        spdlog::info("Path to config file: {}", sThisModulePath.string() + sConfigFile);
        ini.parse(iniFile);
    }

    // Read ini file
    ini.strip_trailing_comments();
    inipp::get_value(ini.sections["Custom Resolution"], "Enabled", bCustomResolution);
    inipp::get_value(ini.sections["Custom Resolution"], "Width", iCustomResX);
    inipp::get_value(ini.sections["Custom Resolution"], "Height", iCustomResY);
    inipp::get_value(ini.sections["Intro Skip"], "SkipLogos", bSkipLogos);
    inipp::get_value(ini.sections["Intro Skip"], "SkipTo", iSkipLogos);
    inipp::get_value(ini.sections["Pause on Focus Loss"], "Enabled", bPauseOnFocusLoss);
    inipp::get_value(ini.sections["Uncap 60FPS Menus"], "Enabled", bUncapMenuFPS);
    inipp::get_value(ini.sections["Enable Console"], "Enabled", bEnableConsole);
    inipp::get_value(ini.sections["Enable Console"], "Hotkey", sConsoleHotkey);
    inipp::get_value(ini.sections["Fix HUD"], "Enabled", bHUDFix);
    inipp::get_value(ini.sections["Fix Aspect Ratio"], "Enabled", bAspectFix);
    inipp::get_value(ini.sections["Fix FOV"], "Enabled", bFOVFix);
    inipp::get_value(ini.sections["Screen Percentage"], "Enabled", bScreenPercentage);
    inipp::get_value(ini.sections["Screen Percentage"], "Value", fScreenPercentage);
    inipp::get_value(ini.sections["Render Texture Resolution"], "Enabled", bRenTexResMulti);
    inipp::get_value(ini.sections["Render Texture Resolution"], "Multiplier", fRenTexResUserMulti);
    inipp::get_value(ini.sections["FPS Cap"], "AdjustFPSCap", bAdjustFPSCap);
    inipp::get_value(ini.sections["FPS Cap"], "Framerate", fFramerateCap);
    inipp::get_value(ini.sections["Mouse Fix"], "Enabled", bMouseFix);
    inipp::get_value(ini.sections["Mouse Fix"], "IgnoreGamepad", bIgnoreGamepad);
    inipp::get_value(ini.sections["Mouse Fix"], "MouseMultiplierX", fMouseMultiplierX);
    inipp::get_value(ini.sections["Mouse Fix"], "MouseMultiplierY", fMouseMultiplierY);

    // Log config parse
    spdlog::info("Config Parse: bCustomResolution: {}", bCustomResolution);
    spdlog::info("Config Parse: iCustomResX: {}", iCustomResX);
    spdlog::info("Config Parse: iCustomResY: {}", iCustomResY);
    spdlog::info("Config Parse: bSkipLogos: {}", bSkipLogos);
    spdlog::info("Config Parse: iSkipLogos: {}", iSkipLogos);
    if (iSkipLogos < 1 || iSkipLogos > 3)
    {
        iSkipLogos = std::clamp(iSkipLogos, 1, 3);
        spdlog::warn("Config Parse: iSkipLogos value invalid, clamped to {}", iSkipLogos);
    }
    spdlog::info("Config Parse: bUncapMenuFPS: {}", bUncapMenuFPS);
    spdlog::info("Config Parse: bPauseOnFocusLoss: {}", bPauseOnFocusLoss);
    spdlog::info("Config Parse: bEnableConsole: {}", bEnableConsole);
    spdlog::info("Config Parse: sConsoleHotkey: {}", sConsoleHotkey);
    spdlog::info("Config Parse: bHUDFix: {}", bHUDFix);
    spdlog::info("Config Parse: bAspectFix: {}", bAspectFix);
    spdlog::info("Config Parse: bFOVFix: {}", bFOVFix);
    spdlog::info("Config Parse: bScreenPercentage: {}", bScreenPercentage);
    spdlog::info("Config Parse: fScreenPercentage: {}", fScreenPercentage);
    if (fScreenPercentage < (float)10 || fScreenPercentage > (float)400)
    {
        fScreenPercentage = std::clamp(fScreenPercentage, (float)10, (float)400);
        spdlog::warn("Config Parse: fScreenPercentage value invalid, clamped to {}", fScreenPercentage);
    }
    spdlog::info("Config Parse: bRenTexResMulti: {}", bRenTexResMulti);
    spdlog::info("Config Parse: fRenTexResUserMulti = {}", fRenTexResUserMulti);
    if (fRenTexResUserMulti < 0.25f || fRenTexResUserMulti > 4.0f)
    {
        // Min = 25%, Max = 400%
        fRenTexResUserMulti = std::clamp(fRenTexResUserMulti, (float)0.25, (float)4);
        spdlog::warn("Config Parse: fRenTexResUserMulti value invalid, clamped to {}", fRenTexResUserMulti);
    }
    spdlog::info("Config Parse: bAdjustFPSCap: {}", bAdjustFPSCap);
    spdlog::info("Config Parse: fFramerateCap: {}", fFramerateCap);
    spdlog::info("Config Parse: bMouseFix: {}", bMouseFix);
    spdlog::info("Config Parse: bIgnoreGamepad: {}", bIgnoreGamepad);
    spdlog::info("Config Parse: fMouseMultiplierX: {}", fMouseMultiplierX);
    spdlog::info("Config Parse: fMouseMultiplierY: {}", fMouseMultiplierY);
    spdlog::info("----------");

    // Calculate aspect ratio / use desktop res instead
    DesktopDimensions = Util::GetPhysicalDesktopDimensions();

    if (iCustomResX > 0 && iCustomResY > 0)
    {
        fAspectRatio = (float)iCustomResX / (float)iCustomResY;
    }
    else
    {
        iCustomResX = (int)DesktopDimensions.first;
        iCustomResY = (int)DesktopDimensions.second;
        fAspectRatio = (float)DesktopDimensions.first / (float)DesktopDimensions.second;
        spdlog::info("Custom Resolution: Desktop Width: {}", iCustomResX);
        spdlog::info("Custom Resolution: Desktop Height: {}", iCustomResY);
    }
    fAspectMultiplier = fAspectRatio / fNativeAspect;

    // HUD variables
    fHUDWidth = iCustomResY * fNativeAspect;
    fHUDHeight = (float)iCustomResY;
    fHUDWidthOffset = (float)(iCustomResX - fHUDWidth) / 2;
    fHUDHeightOffset = 0;
    if (fAspectRatio < fNativeAspect)
    {
        fHUDWidth = (float)iCustomResX;
        fHUDHeight = (float)iCustomResX / fNativeAspect;
        fHUDWidthOffset = 0;
        fHUDHeightOffset = (float)(iCustomResY - fHUDHeight) / 2;
    }

    // Log aspect ratio stuff
    spdlog::info("Custom Resolution: fAspectRatio: {}", fAspectRatio);
    spdlog::info("Custom Resolution: fAspectMultiplier: {}", fAspectMultiplier);
    spdlog::info("Custom Resolution: fHUDWidth: {}", fHUDWidth);
    spdlog::info("Custom Resolution: fHUDHeight: {}", fHUDHeight);
    spdlog::info("Custom Resolution: fHUDWidthOffset: {}", fHUDWidthOffset);
    spdlog::info("Custom Resolution: fHUDHeightOffset: {}", fHUDHeightOffset);
    spdlog::info("----------");
}

void UpdateOffsets()
{
    // GObjects
    uint8_t* GObjectsScanResult = Memory::PatternScan(baseModule, "48 8B ?? ?? ?? ?? ?? 48 8B ?? ?? 48 8D ?? ?? EB ?? 33 ?? 8B ?? ?? C1 ??");
    if (GObjectsScanResult) {
        spdlog::info("Offsets: GObjects: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)GObjectsScanResult - (uintptr_t)baseModule);
        uintptr_t GObjectsAddr = Memory::GetAbsolute((uintptr_t)GObjectsScanResult + 0x3);
        SDK::Offsets::GObjects = (uintptr_t)GObjectsAddr - (uintptr_t)baseModule;
        spdlog::info("Offsets: GObjects: Offset: {:x}", SDK::Offsets::GObjects);
    }
    else if (!GObjectsScanResult) {
        spdlog::error("Offsets: GObjects: Pattern scan failed.");
    }

    // AppendString
    uint8_t* AppendStringScanResult = Memory::PatternScan(baseModule, "48 89 ?? ?? ?? 48 89 ?? ?? ?? 57 48 83 ?? ?? 8B ?? 48 8B ?? 8B ?? 44 0F ?? ?? C1 ?? 10 48 8B ?? 80 3D ?? ?? ?? ?? 00 89 ?? ?? ?? 44 89 ?? ?? ?? 74 ?? 4C 8D ?? ?? ?? ?? ?? EB ?? 48 8D ?? ?? ?? ?? ?? E8 ?? ?? ?? ?? 4C ?? ?? C6 ?? ?? ?? ?? ?? 01 48 8B ?? ?? ?? 48 8B ?? 48 ?? ?? ?? 8D ?? ?? 49 ?? ?? ?? ?? E8 ?? ?? ?? ?? 83 ?? ?? 00");
    if (AppendStringScanResult) {
        spdlog::info("Offsets: AppendString: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)AppendStringScanResult - (uintptr_t)baseModule);
        SDK::Offsets::AppendString = (uintptr_t)AppendStringScanResult - (uintptr_t)baseModule;
        spdlog::info("Offsets: AppendString: Offset: {:x}", SDK::Offsets::AppendString);
    }
    else if (!AppendStringScanResult) {
        spdlog::error("Offsets: AppendString: Pattern scan failed.");
    }

    // ProcessEvent
    uint8_t* ProcessEventScanResult = Memory::PatternScan(baseModule, "40 ?? 56 57 41 ?? 41 ?? 41 ?? 41 ?? 48 81 ?? ?? ?? ?? ?? 48 8D ?? ?? ?? 48 89 ?? ?? ?? ?? ?? 48 8B ?? ?? ?? ?? ?? 48 33 ?? 48 89 ?? ?? ?? ?? ?? 8B ?? ?? 45 33 ??");
    if (ProcessEventScanResult) {
        spdlog::info("Offsets: ProcessEvent: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)ProcessEventScanResult - (uintptr_t)baseModule);
        SDK::Offsets::ProcessEvent = (uintptr_t)ProcessEventScanResult - (uintptr_t)baseModule;
        spdlog::info("Offsets: ProcessEvent: Offset: {:x}", SDK::Offsets::ProcessEvent);
    }
    else if (!ProcessEventScanResult) {
        spdlog::error("Offsets: ProcessEvent: Pattern scan failed.");
    }
}

void IntroSkip()
{
    if (bSkipLogos)
    {
        // Skip intro
        uint8_t* CautionSkipScanResult = Memory::PatternScan(baseModule, "FF ?? ?? 32 C0 48 ?? ?? ?? ?? 48 ?? ?? ?? ?? 0F ?? ?? ?? ?? 48 ?? ?? ?? 5F C3");
        uint8_t* IntroSkipScanResult = Memory::PatternScan(baseModule, "B0 03 0F ?? ?? ?? ?? ?? ?? 00 44 ?? ?? ?? ?? ?? ?? ?? 00");
        uint8_t* OpeningMovieScanResult = Memory::PatternScan(baseModule, "80 ?? ?? 00 0F ?? ?? ?? ?? ?? ?? 00 74 ?? F3 ?? ?? ?? ?? ??");
        uint8_t* NetworkCheckSkipScanResult = Memory::PatternScan(baseModule, "8B ?? ?? 85 ?? 0F 84 ?? ?? ?? ?? 83 ?? 01 0F 84 ?? ?? ?? ?? 83 ?? 02 74 ??");
        uint8_t* NetworkDialogSkipScanResult = Memory::PatternScan(baseModule, "F7 ?? ?? F7 FF FF FF 0F ?? ?? C3");
        if (CautionSkipScanResult && IntroSkipScanResult && OpeningMovieScanResult && NetworkCheckSkipScanResult && NetworkDialogSkipScanResult)
        {
            // Skip caution screens
            spdlog::info("Intro Skip: Caution: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)CautionSkipScanResult - (uintptr_t)baseModule);
            Memory::PatchBytes((uintptr_t)CautionSkipScanResult + 0x2, "\xB0\x03", 2);

            // Enable network features
            spdlog::info("Intro Skip: Network Check: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)NetworkCheckSkipScanResult - (uintptr_t)baseModule);
            static SafetyHookMid NetworkCheckMidHook{};
            NetworkCheckMidHook = safetyhook::create_mid(NetworkCheckSkipScanResult,
                [](SafetyHookContext& ctx)
                {
                    if (ctx.rcx + 0x3C && !bIntroSkipHasRun) {
                        if (*reinterpret_cast<int*>(ctx.rcx + 0x3C) == 0)
                        {
                            // Enable network features
                            *reinterpret_cast<int*>(ctx.rcx + 0x3C) = 3;
                        }

                        if (*reinterpret_cast<int*>(ctx.rcx + 0x3C) == 5) {
                            bIntroSkipHasRun = true;
                        }
                    }
                });

            // Skip network dialog to confirm
            spdlog::info("Intro Skip: Network Dialog: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)NetworkDialogSkipScanResult - (uintptr_t)baseModule);
            static SafetyHookMid NetworkDialogMidHook{};
            NetworkDialogMidHook = safetyhook::create_mid(NetworkDialogSkipScanResult + 0xA,
                [](SafetyHookContext& ctx)
                {
                    if (!bIntroSkipHasRun) {
                        ctx.rax |= (BYTE)1;
                    }                                        
                });

            switch (iSkipLogos)
            {
            case 1:
                // Opening Movie
                iSkipLogos = 4;
                break;
            case 2:
                // Main Menu
                iSkipLogos = 5;
                break;
            case 3:
                // Load Save
                iSkipLogos = 8;
                break;
            }

            // Fix softlock if skipping to opening movies
            spdlog::info("Intro Skip: Opening Movie: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)OpeningMovieScanResult - (uintptr_t)baseModule);
            if (iSkipLogos == 4)
            {
                Memory::PatchBytes((uintptr_t)OpeningMovieScanResult + 0xD, "\x1A", 1);
            }

            // Skip logos to title state
            spdlog::info("Intro Skip: Logo Skip: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)IntroSkipScanResult - (uintptr_t)baseModule);
            static SafetyHookMid IntroSkipMidHook{};
            IntroSkipMidHook = safetyhook::create_mid(IntroSkipScanResult + 0x2,
                [](SafetyHookContext& ctx)
                {
                    if (iSkipLogos != 4)
                    {
                        // Clear last byte
                        ctx.rax &= ~(0xFF);
                        // Set last byte
                        ctx.rax |= (BYTE)iSkipLogos;
                    }
                });
        }
        else if (!CautionSkipScanResult || !IntroSkipScanResult || !OpeningMovieScanResult || !NetworkCheckSkipScanResult || !NetworkDialogSkipScanResult)
        {
            spdlog::error("Intro Skip: Pattern scan failed.");
        }     
    }
}

void EnableConsole()
{
    if (bEnableConsole)
    {
        if (SDK::Offsets::GObjects && SDK::Offsets::AppendString) {
            // Get GEngine
            SDK::UEngine* engine = nullptr;

            int i = 0;
            while (i < 100) { // 10s
                engine = SDK::UEngine::GetEngine();

                if (engine) {
                    if (engine->ConsoleClass && engine->GameViewport) {
                        break;
                    }
                }

                std::this_thread::sleep_for(std::chrono::milliseconds(100));
                i++;
            }

            if (i == 100) {
                spdlog::error("Construct Console: Failed to find GEngine address after 10 seconds.");
                return;
            }

            spdlog::info("Construct Console: GEngine address = {:x}", (uintptr_t)engine);

            // Construct console
            if (engine->ConsoleClass && engine->GameViewport) {
                SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(engine->ConsoleClass, engine->GameViewport);
                if (NewObject) {
                    engine->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(NewObject);
                    spdlog::info("Construct Console: Console object constructed.");
                }
                else {
                    spdlog::error("Construct Console: Failed to construct console object.");
                    return;
                }
            }
            else {
                spdlog::error("Construct Console: Failed to construct console object - ConsoleClass or GameViewport is null.");
                return;
            }

            if (SDK::UInputSettings::GetDefaultObj() && SDK::UInputSettings::GetDefaultObj()->ConsoleKeys.Num() != 0)
            {
                SDK::UInputSettings::GetDefaultObj()->ConsoleKeys[0].KeyName = SDK::UKismetStringLibrary::Conv_StringToName(Util::StringToWString(sConsoleHotkey).c_str());
            }
            else
            {
                spdlog::warn("Construct Console: Failed to bind console key.");
            }

            // Log console key
            if (SDK::UInputSettings::GetInputSettings()->ConsoleKeys && SDK::UInputSettings::GetInputSettings()->ConsoleKeys.Num() > 0) {
                spdlog::info("Construct Console: Console enabled - access it using key: {}.", SDK::UInputSettings::GetInputSettings()->ConsoleKeys[0].KeyName.ToString());
            }
            else {
                spdlog::error("Construct Console: Console enabled but no console key is bound.\nAdd this to %LOCALAPPDATA%\\P3R\\Saved\\Config\\WindowsNoEditor\\Input.ini -\n[/Script/Engine.InputSettings]\nConsoleKeys = Tilde");
            }
        }
    }
}

void Resolution()
{ 
    if (bCustomResolution)
    {
        // Apply custom resolution.
        uint8_t* ApplyResolutionScanResult = Memory::PatternScan(baseModule, "39 ?? ?? ?? ?? 00 75 ?? 48 ?? ?? 48 ?? ?? 20 39 ?? ?? ?? ?? 00 74 ??");
        if (ApplyResolutionScanResult)
        {
            // Need 4 bytes aligned twice
            static struct Resolution
            {
                int Width = iCustomResX;
                int Height = iCustomResY;
            } CustomResolution;

            spdlog::info("Custom Resolution: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)ApplyResolutionScanResult - (uintptr_t)baseModule);
            static SafetyHookMid ApplyResolutionMidHook{};
            ApplyResolutionMidHook = safetyhook::create_mid(ApplyResolutionScanResult,
                [](SafetyHookContext& ctx)
                {
                    ctx.rdx = *(uint64_t*)&CustomResolution;
                });
        }
        else if (!ApplyResolutionScanResult)
        {
            spdlog::error("Custom Resolution: Pattern scan failed.");
        }
    }
}

void AspectFOVFix()
{
    if (bFOVFix)
    {
        // FOV
        uint8_t* FOVScanResult = Memory::PatternScan(baseModule, "F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? ?? 8B ?? ?? ?? ?? ?? 89 ?? ?? 0F ?? ?? ?? ?? ?? ?? 33 ?? ?? 83 ?? ??");
        if (FOVScanResult)
        {
            spdlog::info("FOV: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)FOVScanResult - (uintptr_t)baseModule);

            static SafetyHookMid FOVMidHook{};
            FOVMidHook = safetyhook::create_mid(FOVScanResult + 0x8,
                [](SafetyHookContext& ctx)
                {
                    if (fNativeAspect < fAspectRatio)
                    {
                        ctx.xmm0.f32[0] = atanf(tanf(ctx.xmm0.f32[0] * (fPi / 360)) / fNativeAspect * fAspectRatio) * (360 / fPi);
                    }
                });
        }
        else if (!FOVScanResult)
        {
            spdlog::error("FOV: Pattern scan failed.");
        }
    }

    if (bAspectFix)
    {
        // Aspect Ratio
        uint8_t* AspectRatioScanResult = Memory::PatternScan(baseModule, "8B ?? ?? ?? ?? ?? 89 ?? ?? 0F ?? ?? ?? ?? ?? ?? 33 ?? ?? 83 ?? ??");
        if (AspectRatioScanResult)
        {
            spdlog::info("Aspect Ratio: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)AspectRatioScanResult - (uintptr_t)baseModule);
            static SafetyHookMid AspectRatioMidHook{};
            AspectRatioMidHook = safetyhook::create_mid(AspectRatioScanResult + 0x6,
                [](SafetyHookContext& ctx)
                {
                    ctx.rax = *(uint32_t*)(&fAspectRatio);
                });
            
        }
        else if (!AspectRatioScanResult)
        {
            spdlog::error("Aspect Ratio: Pattern scan failed.");
        }

        // Aspect Ratio Check
        uint8_t* AspectRatioCheckScanResult = Memory::PatternScan(baseModule, "41 ?? ?? ?? 0F 82 ?? ?? ?? ?? F3 ?? ?? ?? ?? 0F ?? ?? F3 0F ?? ?? F3 0F ?? ?? ?? ?? ?? ??");
        if (AspectRatioCheckScanResult)
        {
            spdlog::info("Aspect Ratio Check: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)AspectRatioCheckScanResult - (uintptr_t)baseModule);
            Memory::PatchBytes((uintptr_t)AspectRatioCheckScanResult + 0x5, "\x87", 1);
            spdlog::info("Aspect Ratio Check: Instruction patched.");
        }
        else if (!AspectRatioCheckScanResult)
        {
            spdlog::error("Aspect Ratio Check: Pattern scan failed.");
        }
    }
}

void HUDFix()
{
    if (bHUDFix || bRenTexResMulti)
    {
        // Remove constraints on HUD
        uint8_t* HUDConstraintsScanResult = Memory::PatternScan(baseModule, "89 ?? ?? ?? F3 ?? ?? ?? ?? 89 ?? ?? ?? F3 0F ?? ?? 44 ?? ?? ?? ?? 0F ?? ?? 89 ?? ?? ?? 0F ?? ??");
        if (HUDConstraintsScanResult)
        {
            spdlog::info("HUD Constraints: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)HUDConstraintsScanResult - (uintptr_t)baseModule);

            static SafetyHookMid HUDConstraintsMidHook{};
            HUDConstraintsMidHook = safetyhook::create_mid(HUDConstraintsScanResult,
                [](SafetyHookContext& ctx)
                {
                    ctx.rcx = INT32_MAX;
                    ctx.rax = INT32_MAX;
                    ctx.xmm2.f32[0] = 0.0f;
                    ctx.xmm4.f32[0] = 0.0f;
                });
        }
        else if (!HUDConstraintsScanResult)
        {
            spdlog::error("HUD Constraints: Pattern scan failed.");
        }
    }
}

void Fades()
{
    if (bHUDFix)
    {
        // MoviePlayActorBase::Start()
        // 48 83 ?? ?? E8 ?? ?? ?? ?? E8 ?? ?? ?? ?? 48 85 ?? 74 ?? B2 01

        // Get fade status
        uint8_t* FadeStatusScanResult = Memory::PatternScan(baseModule, "40 ?? 48 ?? ?? ?? 4C ?? ?? ?? ?? ?? 00 0F ?? ?? 0F ?? ?? ?? ?? 0F ?? ?? 48 ?? ??");
        if (FadeStatusScanResult)
        {
            spdlog::info("Fade Status: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)FadeStatusScanResult - (uintptr_t)baseModule);
            static SafetyHookMid FadeStatusMidHook{};
            FadeStatusMidHook = safetyhook::create_mid(FadeStatusScanResult,
                [](SafetyHookContext& ctx)
                {
                    iFadeStatus = *reinterpret_cast<int*>(ctx.rcx + 0x30);
                });
        }
        else if (!FadeStatusScanResult)
        {
            spdlog::error("Fade Status: Pattern scan failed.");
        }

        // Fades
        uint8_t* FadesScanResult = Memory::PatternScan(baseModule, "BA 06 00 00 00 F3 0F ?? ?? ?? ?? E8 ?? ?? ?? ?? F3 0F ?? ?? ?? ??"); // 2 results but they both contain the address we need.
        if (FadesScanResult)
        {
            spdlog::info("Fades: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)FadesScanResult - (uintptr_t)baseModule);
            DWORD64 FadesAddress = Memory::GetAbsolute((uintptr_t)FadesScanResult + 0xC);
            spdlog::info("Fades: Function address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)FadesAddress - (uintptr_t)baseModule);

            static SafetyHookMid GlobalFadesMidHook{};
            GlobalFadesMidHook = safetyhook::create_mid(FadesAddress,
                [](SafetyHookContext& ctx)
                {
                    // Only modify values when we are in a fade transition
                    if (iFadeStatus != 0)
                    {
                        if (ctx.xmm2.f32[0] == 0.0f && ctx.xmm3.f32[0] == 0.0f && ctx.xmm10.f32[0] != 1920.0f)
                        {
                            if (fAspectRatio > fNativeAspect)
                            {
                                ctx.xmm2.f32[0] = -(fHUDWidthOffset * 2);
                            }
                            else if (fAspectRatio < fNativeAspect)
                            {
                                ctx.xmm3.f32[0] = -(fHUDHeightOffset * 2);
                            }
                        }

                        if (ctx.xmm2.f32[0] == (float)1920 && ctx.xmm3.f32[0] == 0.0f && ctx.xmm10.f32[0] != 1920.0f)
                        {
                            if (fAspectRatio > fNativeAspect)
                            {
                                ctx.xmm2.f32[0] = 1080 * fAspectRatio;
                            }
                            else if (fAspectRatio < fNativeAspect)
                            {
                                ctx.xmm3.f32[0] = -(fHUDHeightOffset * 2);
                            }
                        }

                        if (ctx.xmm2.f32[0] == 0.0f && ctx.xmm3.f32[0] == (float)1080 && ctx.xmm10.f32[0] != 1920.0f)
                        {
                            if (fAspectRatio > fNativeAspect)
                            {
                                ctx.xmm2.f32[0] = -(fHUDWidthOffset * 2);
                            }
                            else if (fAspectRatio < fNativeAspect)
                            {
                                ctx.xmm3.f32[0] = 1920 / fAspectRatio;
                            }
                        }

                        if (ctx.xmm2.f32[0] == (float)1920 && ctx.xmm3.f32[0] == (float)1080 && ctx.xmm10.f32[0] != 1920.0f)
                        {
                            if (fAspectRatio > fNativeAspect)
                            {
                                ctx.xmm2.f32[0] = 1080 * fAspectRatio;
                            }
                            else if (fAspectRatio < fNativeAspect)
                            {
                                ctx.xmm3.f32[0] = 1920 / fAspectRatio;
                            }
                        }
                    }
                });
        }
        else if (!FadesScanResult)
        {
            spdlog::error("Fades: Pattern scan failed.");
        }
    }
}

void GraphicalTweaks()
{
    // Screen Percentage
    uint8_t* ScreenPercentageScanResult = Memory::PatternScan(baseModule, "0F ?? ?? F3 0F ?? ?? ?? 0F ?? ?? F3 0F ?? ?? ?? ?? ?? ?? 0F ?? ?? 77 ?? F3 0F ?? ?? ?? ?? ?? ?? 48 ?? ?? ?? ?? 48 ?? ?? 20 5F C3");
    if (ScreenPercentageScanResult)
    {
        spdlog::info("Screen Percentage: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)ScreenPercentageScanResult - (uintptr_t)baseModule);

        static SafetyHookMid ScreenPercentageMidHook{};
        ScreenPercentageMidHook = safetyhook::create_mid(ScreenPercentageScanResult + 0x3,
            [](SafetyHookContext& ctx)
            {
                if (bScreenPercentage)
                {
                    *reinterpret_cast<float*>(ctx.rdi + (ctx.rbx * 4)) = (float)fScreenPercentage;
                }
                else
                {
                    // Grab screen percentage value if not applied by user.
                    fScreenPercentage = *reinterpret_cast<float*>(ctx.rdi + (ctx.rbx * 4));
                }
            });
    }
    else if (!ScreenPercentageScanResult)
    {
        spdlog::error("Screen Percentage: Pattern scan failed.");
    }

    if (bRenTexResMulti)
    {
        // Render Texture 2D Resolution
        uint8_t* RenTex2DScanResult = Memory::PatternScan(baseModule, "8B ?? ?? ?? 00 00 44 ?? ?? ?? ?? ?? ?? 41 ?? ?? 8B ?? ?? ?? 00 00 44 ?? ?? ?? 66 ?? ?? ??");
        if (RenTex2DScanResult)
        {
            RenTexPostLoad = safetyhook::create_inline(reinterpret_cast<void*>(RenTex2DScanResult), RenTexPostLoad_Hooked);
            spdlog::info("Render Texture 2D Resolution: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)RenTex2DScanResult - (uintptr_t)baseModule);
        }
        else if (!RenTex2DScanResult)
        {
            spdlog::error("Render Texture 2D Resolution: Pattern scan failed.");
        } 

        // RT_Capture
        uint8_t* RTCaptureScanResult = Memory::PatternScan(baseModule, "C7 ?? ?? ?? ?? 00 80 07 00 00 C7 ?? ?? ?? ?? 00 38 04 00 00 49 ?? ??");
        if (RTCaptureScanResult)
        {
            spdlog::info("RT_Capture: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)RTCaptureScanResult - (uintptr_t)baseModule);

            static SafetyHookMid RTCaptureMidHook{};
            RTCaptureMidHook = safetyhook::create_mid(RTCaptureScanResult + 0x14,
                [](SafetyHookContext& ctx)
                {
                    if (ctx.rax + 0x1FC && ctx.rax + 0x200)
                    {
                        *reinterpret_cast<int*>(ctx.rax + 0x1FC) = iRTCapX;
                        *reinterpret_cast<int*>(ctx.rax + 0x200) = iRTCapY;
                    }
                });
        }
        else if (!RTCaptureScanResult)
        {
            spdlog::error("RT_Capture: Pattern scan failed.");
        }
    } 
}

void Framerate()
{
    if (bUncapMenuFPS)
    {
        // Menu 60 FPS Cap
        uint8_t* MenuFPSCapScanResult = Memory::PatternScan(baseModule, "3B ?? 74 ?? E8 ?? ?? ?? ?? 48 ?? ?? 41 ?? 01 8B ?? E8 ?? ?? ?? ??");
        if (MenuFPSCapScanResult)
        {
            spdlog::info("Menu FPS Cap: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)MenuFPSCapScanResult - (uintptr_t)baseModule);
            Memory::PatchBytes((uintptr_t)MenuFPSCapScanResult + 0x2, "\xEB", 1);
            spdlog::info("Menu FPS Cap: Patched instruction.");

        }
        else if (!MenuFPSCapScanResult)
        {
            spdlog::error("Menu FPS Cap: Pattern scan failed.");
        }
    }

    if (bAdjustFPSCap)
    {
        // FPS Cap
        uint8_t* FPSCapScanResult = Memory::PatternScan(baseModule, "3B ?? ?? ?? ?? ?? 0F ?? ?? F3 0F ?? ?? ?? EB ?? 0F ?? ?? 48 ?? ?? ?? ?? 0F ?? ?? ?? ??");
        if (FPSCapScanResult)
        {
            spdlog::info("FPS Cap: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)FPSCapScanResult - (uintptr_t)baseModule);
            static SafetyHookMid FPSCapMidHook{};
            FPSCapMidHook = safetyhook::create_mid(FPSCapScanResult + 0x13,
                [](SafetyHookContext& ctx)
                {
                    ctx.xmm0.f32[0] = fFramerateCap;
                });

        }
        else if (!FPSCapScanResult)
        {
            spdlog::error("FPS Cap: Pattern scan failed.");
        }
    }
}

void WindowFocus()
{
    if (!bPauseOnFocusLoss)
    {
        int i = 0;
        while (i < 30 && !IsWindow(hWnd))
        {
            // Wait 1 sec then try again
            Sleep(1000);
            i++;
            hWnd = FindWindowW(sWindowClassName, nullptr);
        }

        // If 30 seconds have passed and we still dont have the handle, give up
        if (i == 30)
        {
            spdlog::error("Window Focus: Failed to find window handle.");
            return;
        }
        else
        {
            // Set new wnd proc
            OldWndProc = (WNDPROC)SetWindowLongPtr(hWnd, GWLP_WNDPROC, (LONG_PTR)NewWndProc);
            spdlog::info("Window Focus: Set new WndProc.");
        }
    } 
}

static SafetyHookInline RegisterRawInputDevicesHook{};
BOOL __stdcall RegisterRawInputDevices_Injected(PCRAWINPUTDEVICE pRawInputDevices, UINT uiNumDevices, UINT cbSize) {
    // RawInputDevices pointer is const so we copy it into our new sneaky array
    RAWINPUTDEVICE* pTamperedRawInputDevices = new RAWINPUTDEVICE[uiNumDevices];
    memcpy(pTamperedRawInputDevices, pRawInputDevices, uiNumDevices * cbSize);

    for (int i = 0; i < uiNumDevices; i++) {
        // If we unregister the mouse, no we didn't :)
        // usUsagePage and usUsage are specific to mouse inputs (Related to HID documentation)
        // dwFlags least significant bit is whether device(s) are to be unregistered
        if (pTamperedRawInputDevices[i].usUsagePage == 0x1 && pTamperedRawInputDevices[i].usUsage == 0x2 && pTamperedRawInputDevices[i].dwFlags & 0b1)
        {
            spdlog::info("Mouse Fix: Tampering with mouse unregister!");
            pTamperedRawInputDevices[i].dwFlags &= ~0b1;
        }
    }

    auto output = RegisterRawInputDevicesHook.call<BOOL>(pTamperedRawInputDevices, uiNumDevices, cbSize); //Do original call, but don't unregister anything
    delete[] pTamperedRawInputDevices; //Clean up the sneaky
    return output;
}
static SafetyHookInline PeekMessageWHook{};
UINT __stdcall PeekMessageW_Injected(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg) {
    // Alrighty boys, we need to basically write our own input handling so buckle up
    auto output = PeekMessageWHook.call<UINT>(lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax, wRemoveMsg);
    if (output && wRemoveMsg & 0b1) {
        // Only read (valid) messages on consumption so we don't accidentally double-process anything
        // Game seems to process raw mouse input despite unregistering it (thank God) so we don't have to fight it for messages
        if (lpMsg->message == WM_INPUT) {
            // We've just received an input message.
            UINT dwSize = 0;
            GetRawInputData((HRAWINPUT)lpMsg->lParam, RID_INPUT, NULL, &dwSize, sizeof(RAWINPUTHEADER)); //Get size of rawinput structure

            LPBYTE lpb = new BYTE[dwSize];
            if (lpb == NULL)
                return output; // No Raw input data, abort current message injection
            
            if (GetRawInputData((HRAWINPUT)lpMsg->lParam, RID_INPUT, lpb, &dwSize, sizeof(RAWINPUTHEADER)) != dwSize) //Actually retrieve raw input data into lpb
                spdlog::debug("Win32 API Error: GetRawInputData does not return correct size!"); //Doubt this'll happen but might as well log it
            
            RAWINPUT* raw = (RAWINPUT*)lpb;
            if (raw->header.dwType == RIM_TYPEMOUSE)
            {
                // We got the good stuff, mouse input data!
                if (!raw->data.mouse.usFlags) {
                    if (raw->data.mouse.lLastX || raw->data.mouse.lLastY) {
                        bLastValidInputWasFromMouse = true;
                    }
                    // These numbers were completely just eyeballed. TODO: if you're bored you can find more "accurate" numbers
                    fRawMouseX += raw->data.mouse.lLastX / 1200.0f;
                    fRawMouseY += raw->data.mouse.lLastY / 1200.0f;
                }
            }
            delete[] lpb;
        }
    }
    return output;
}
void MouseFix()
{
    if (bMouseFix)
    {
        // These *are* technically separate fixes, but doing only one of them leads to wacky results with the camera movement
        uint8_t* CheckIfCameraShouldMoveScanResult = Memory::PatternScan(baseModule, "?? 8D ?? ?? ?? F3 ?? 0F 59 ?? ?? 8B ?? F3 0F 59 ?? F3 ?? 0F 11 ?? ?? ?? F3 0F 11 ?? ?? ?? ?? 8B ?? FF ?? ?? ?? ?? ??");
        uint8_t* DefaultCameraInputSpyScanResult = Memory::PatternScan(baseModule, "0F 83 ?? ?? ?? ?? ?? 8B ?? ?? 8B ?? FF ?? ?? ?? ?? ?? F3 0F 10 ?? ?? F3 0F 10 ?? F3 0F 10");
        uint8_t* RemovePitchSmoothingScanResult = Memory::PatternScan(baseModule, "F3 0F 58 ?? E8 ?? ?? ?? ?? F3 0F 10 ?? ?? ?? ?? ?? ?? 8B ?? 0F 2F");
        uint8_t* RemoveYawSmoothingScanResult = Memory::PatternScan(baseModule, "?? 8B ?? ?? 8B ?? 0F 28 ?? FF ?? ?? ?? ?? ?? ?? 89 ?? ?? ?? ?? ?? E9");
        if (CheckIfCameraShouldMoveScanResult && DefaultCameraInputSpyScanResult && RemovePitchSmoothingScanResult && RemoveYawSmoothingScanResult)
        {
            // Old gamepad detection broke once raw input events were enabled. Presumably Unreal started treating mouse inputs
            // properly and thus it did the same processing as with a gamepad.

            // Part 1 v2: Scrap the game's mouse input handling entirely and just make our own from the Windows raw input API
            spdlog::info("Mouse Fix - Win32 RegisterRawInputDevices Hook: Address is {:x}", (uintptr_t)RegisterRawInputDevices);
            RegisterRawInputDevicesHook = safetyhook::create_inline(RegisterRawInputDevices, RegisterRawInputDevices_Injected); //Prevent game from disabling raw input. No I don't know why it does this
            // Unreal seems to use PeekMessageW to get events from windows and nothing else. Works for me
            // I don't want to accidentally consume messages (thus preventing the game getting them) so we can intercept here
            // With this we can spy on all messages (including raw input). The game still processes raw input events even though they're usually not enabled
            spdlog::info("Mouse Fix - Win32 PeekMessageW Hook: Address is {:x}", (uintptr_t)PeekMessageW);
            PeekMessageWHook = safetyhook::create_inline(PeekMessageW, PeekMessageW_Injected);

            spdlog::info("Mouse Fix - Dialogue Detection: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)CheckIfCameraShouldMoveScanResult - (uintptr_t)baseModule);
            static SafetyHookMid CheckIfCameraShouldMoveHook{};
            CheckIfCameraShouldMoveHook = safetyhook::create_mid(CheckIfCameraShouldMoveScanResult,
                [](SafetyHookContext& ctx)
                {
                    // So it turns out one of my old hooks conveniently is only called when the camera should move?
                    // Horrendously untested but whatever it solves my immediate problem
                    if (bCameraShouldMoveHasRunThisFrame) {
                        // Failsafe check. This being true means our mouse fix didn't run last frame for some reason
                        // To avoid wacky buildups of raw mouse values we'll reset them here
                        fRawMouseX = 0.0f;
                        fRawMouseY = 0.0f;
                    }
                    bCameraShouldMoveHasRunThisFrame = true;
                });


            // Part 2: Bypass the camera smoothing calculations when processing player input
            spdlog::info("Mouse Fix - Default Camera Input Spy: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)DefaultCameraInputSpyScanResult - (uintptr_t)baseModule);
            static SafetyHookMid DefaultCameraInputSpyHook{};
            DefaultCameraInputSpyHook = safetyhook::create_mid(DefaultCameraInputSpyScanResult,
                [](SafetyHookContext& ctx)
                {
                    // This is a convenient spot to read the default game input for the camera
                    fInputVectorPtr = reinterpret_cast<float*>(ctx.rax + 0x25c); //(X,Y,Z)

                    // New gamepad detection. Relatively simple: if game says we move but mouse no move, then something else must be controlling the game
                    if ((fInputVectorPtr[0] != 0.0f || fInputVectorPtr[1] != 0.0f) && (fRawMouseX == 0.0f && fRawMouseY == 0.0f) && bIgnoreGamepad)
                    {
                        // Input vector is non-zero but mouse input is zero. Gamepad detected!
                        bLastValidInputWasFromMouse = false;
                    }

                    // Deadzone while strafing fix
                    // Normally this only jumps when the game input vector's magnitude is > 0.01, which doesn't account for precise mouse movements
                    // Normal check is still carried out before this hook though
                    if (fRawMouseX != 0.0f || fRawMouseY != 0.0f) {
                        // Next instruction is a JNC
                        ctx.rflags = ctx.rflags & ~0b1; //Set Carry to 0, ensuring we jump (doing player input instead of strafe camera)
                    }
                });

            // I purposely only replace these 2 calls to the original camera calculation to preserve features like
            // holding left and right turning the camera or the camera moving back to neutral on slopes sometimes(?)
            // when there's no input
            spdlog::info("Mouse Fix - Remove Pitch SmoothCam: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)RemovePitchSmoothingScanResult - (uintptr_t)baseModule);
            static SafetyHookMid RemovePitchSmoothingHook;
            RemovePitchSmoothingHook = safetyhook::create_mid(RemovePitchSmoothingScanResult,
                [](SafetyHookContext& ctx)
                {
                    // Documentation time:
                    // As far as I know: XMM6 is the pitch value to be added. XMM12 is P3R's Camera Speed multiplier
                    // XMM10 is the deltaTime for this frame but the rawMouse value is already cumulative throughout the frame so you don't need to use it
                    if (bLastValidInputWasFromMouse && bCameraShouldMoveHasRunThisFrame)
                    {
                        // Structure that stores camera behavior parameters.
                        // Values in order: (Speed, Accel, Decel, Press, Release, CurrentSpeed, CurrentAccel)
                        // No, I don't really know what Press and Release are, they seemed to be something to do modifying acceleration over time
                        // CurrentSpeed and CurrentAccel are the speed that the camera is supposed to move at this frame
                        float* fPitchParams = reinterpret_cast<float*>(ctx.rbx + 0x104); 

                        ctx.xmm6.f32[0] = -fRawMouseY * fPitchParams[0] * ctx.xmm12.f32[0] * fMouseMultiplierY;

                        // Zeroing these out because later frames act on them and move the camera further (doing a smooth deceleration)
                        fPitchParams[5] = 0.0f;
                        fPitchParams[6] = 0.0f;
                    }
                    fRawMouseY = 0.0f; //Reset raw mouse for next frame
                });

            spdlog::info("Mouse Fix - Remove Yaw SmoothCam: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)RemoveYawSmoothingScanResult - (uintptr_t)baseModule);
            static SafetyHookMid RemoveYawSmoothingHook;
            RemoveYawSmoothingHook = safetyhook::create_mid(RemoveYawSmoothingScanResult,
                // Coincidentally all the registers are the same for this hook as in the above one.
                // XMM0 is the default game speed calculation if you want that for some reason. It was overwritten in the last hook but here it's available
                [](SafetyHookContext& ctx)
                {
                    if (bLastValidInputWasFromMouse && bCameraShouldMoveHasRunThisFrame)
                    {
                        // See previous hook for details
                        float* fYawParams = reinterpret_cast<float*>(ctx.rbx + 0xe8);

                        ctx.xmm6.f32[0] = fRawMouseX * fYawParams[0] * ctx.xmm12.f32[0] * fMouseMultiplierX;

                        fYawParams[5] = 0.0f;
                        fYawParams[6] = 0.0f;
                    }
                    fRawMouseX = 0.0f;

                    // Frame (as far as we care) has ended. Reset dialogue check state
                    bCameraShouldMoveHasRunThisFrame = false;
                });
        }
        else
        {
            spdlog::error("Mouse Fix: Pattern scan failed");
        }
    }
}

DWORD __stdcall Main(void*)
{
    Logging();
    ReadConfig();
    UpdateOffsets();
    IntroSkip();
    EnableConsole();
    Resolution();
    AspectFOVFix();
    HUDFix();
    Fades();
    GraphicalTweaks();
    Framerate();
    WindowFocus();
    MouseFix();
    return true;
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    {
        thisModule = hModule;
        HANDLE mainHandle = CreateThread(NULL, 0, Main, 0, NULL, 0);
        if (mainHandle)
        {
            SetThreadPriority(mainHandle, THREAD_PRIORITY_HIGHEST); // set our Main thread priority higher than the games thread
            CloseHandle(mainHandle);
        }
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

