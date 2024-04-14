#include "stdafx.h"
#include "helper.hpp"
#include <inipp/inipp.h>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <safetyhook.hpp>

HMODULE baseModule = GetModuleHandle(NULL);
HMODULE thisModule;

// Logger and config setup
inipp::Ini<char> ini;
std::shared_ptr<spdlog::logger> logger;
string sFixName = "P3RFix";
string sFixVer = "1.2.0";
string sLogFile = "P3RFix.log";
string sConfigFile = "P3RFix.ini";
string sExeName;
filesystem::path sExePath;
filesystem::path sThisModulePath;
std::pair DesktopDimensions = { 0,0 };

// Ini Variables
int iInjectionDelay;
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
bool bScreenPercentage;
float fScreenPercentage = 100.0f;
bool bRenTexResMulti;
float fRenTexResUserMulti;
bool bMouseFix;
bool bIgnoreGamepad;

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
float* fInputVectorPtr = 0;

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
    inipp::get_value(ini.sections["P3RFix Parameters"], "InjectionDelay", iInjectionDelay);
    inipp::get_value(ini.sections["Custom Resolution"], "Enabled", bCustomResolution);
    inipp::get_value(ini.sections["Custom Resolution"], "Width", iCustomResX);
    inipp::get_value(ini.sections["Custom Resolution"], "Height", iCustomResY);
    inipp::get_value(ini.sections["Intro Skip"], "SkipLogos", bSkipLogos);
    inipp::get_value(ini.sections["Intro Skip"], "SkipTo", iSkipLogos);
    inipp::get_value(ini.sections["Pause on Focus Loss"], "Enabled", bPauseOnFocusLoss);
    inipp::get_value(ini.sections["Uncap 60FPS Menus"], "Enabled", bUncapMenuFPS);
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

    // Log config parse
    spdlog::info("Config Parse: iInjectionDelay: {}ms", iInjectionDelay);
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

void IntroSkip()
{
    if (bSkipLogos)
    {
        // Skip caution
        uint8_t* CautionSkipScanResult = Memory::PatternScan(baseModule, "FF ?? ?? 32 C0 48 ?? ?? ?? ?? 48 ?? ?? ?? ?? 0F ?? ?? ?? ?? 48 ?? ?? ?? 5F C3");
        if (CautionSkipScanResult)
        {
            spdlog::info("Caution Skip: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)CautionSkipScanResult - (uintptr_t)baseModule);
            Memory::PatchBytes((uintptr_t)CautionSkipScanResult + 0x3, "\xB0\x02", 2);
            spdlog::info("Caution Skip: Skipped to network dialog.");
        }
        else if (!CautionSkipScanResult)
        {
            spdlog::error("Caution Skip: Pattern scan failed.");
        }

        // Skip network
        uint8_t* NetworkSkipScanResult = Memory::PatternScan(baseModule, "48 ?? ?? ?? C6 ?? ?? 00 48 ?? ?? ?? C6 ?? ?? 01 B0 01 C3");
        uint8_t* NetworkSkipDialogScanResult = Memory::PatternScan(baseModule, "BB 09 00 00 00 66 ?? ?? ?? 48 ?? ?? ?? ?? ?? 00 48 ?? ?? FF ?? ?? ?? ?? ?? 84 ?? 0F 84 ?? ?? ?? ?? E8 ?? ?? ?? ?? 48 ?? ??");
        if (NetworkSkipScanResult && NetworkSkipDialogScanResult)
        {
            spdlog::info("Network Skip: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)NetworkSkipScanResult - (uintptr_t)baseModule);
            Memory::PatchBytes((uintptr_t)NetworkSkipScanResult + 0x7, "\x01", 1);

            spdlog::info("Network Skip: Dialog: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)NetworkSkipDialogScanResult - (uintptr_t)baseModule);
            // Skip network functions confirmation dialog
            static SafetyHookMid NetworkSkipDialogMidHook{};
            NetworkSkipDialogMidHook = safetyhook::create_mid(NetworkSkipDialogScanResult + 0x9,
                [](SafetyHookContext& ctx)
                {
                    if (ctx.rsi + 0x3C)
                    {
                        if (iSkipLoopCount < 3)
                        {
                            *reinterpret_cast<BYTE*>(ctx.rsi + 0x3C) = 13;
                        }
                    }
                    iSkipLoopCount++;
                });

            spdlog::info("Network Skip: Skipped over network dialog.");
        }
        else if (!NetworkSkipScanResult || NetworkSkipDialogScanResult)
        {
            spdlog::error("Network Skip: Pattern scan failed.");
        }

        // Skip intro after network option
        uint8_t* IntroSkipScanResult = Memory::PatternScan(baseModule, "B0 03 0F ?? ?? ?? ?? ?? ?? 00 44 ?? ?? ?? ?? ?? ?? ?? 00");
        uint8_t* OpeningMovieScanResult = Memory::PatternScan(baseModule, "80 ?? ?? 00 0F ?? ?? ?? ?? ?? ?? 00 74 ?? F3 ?? ?? ?? ?? ??");
        if (IntroSkipScanResult && OpeningMovieScanResult)
        {
            spdlog::info("Intro Skip: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)IntroSkipScanResult - (uintptr_t)baseModule);

            switch (iSkipLogos)
            {
                // Opening Movie
            case 1:
                iSkipLogos = 4;
                break;
                // Main Menu
            case 2:
                iSkipLogos = 5;
                break;
                // Load Save Menu
            case 3:
                iSkipLogos = 8;
                break;
            }

            if (iSkipLogos == 4)
            {
                Memory::PatchBytes((uintptr_t)OpeningMovieScanResult + 0xD, "\x1A", 1);
            }

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
           

            spdlog::info("Intro Skip: Skipped intro to title state {}.", iSkipLogos);
        }
        else if (!IntroSkipScanResult || !OpeningMovieScanResult)
        {
            spdlog::error("Intro Skip: Pattern scan failed.");
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
        uint8_t* FOVScanResult = Memory::PatternScan(baseModule, "F3 0F ?? ?? ?? ?? ?? ?? F3 0F ?? ?? ?? 8B ?? ?? ?? ?? ?? 89 ?? ?? 0F ?? ?? ?? ?? ?? ?? 33 ?? ?? 83 ?? ??") + 0x8;
        if (FOVScanResult)
        {
            spdlog::info("FOV: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)FOVScanResult - (uintptr_t)baseModule);

            static SafetyHookMid FOVMidHook{};
            FOVMidHook = safetyhook::create_mid(FOVScanResult,
                [](SafetyHookContext& ctx)
                {
                    float fov = ctx.xmm0.f32[0];
                    if (fNativeAspect < fAspectRatio)
                    {
                        fov = atanf(tanf(fov * (fPi / 360)) / fNativeAspect * fAspectRatio) * (360 / fPi);
                    }
                    ctx.xmm0.f32[0] = fov;
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
                    // Don't wanna use an offset so this will have to do
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

void MouseFix()
{
    if (bMouseFix)
    {
        // These *are* technically separate fixes, but doing only one of them leads to wacky results with the camera movement
        uint8_t* StealRawMouseScanResult = Memory::PatternScan(baseModule, "F3 ?? 0F 59 ?? F3 ?? 0F 59 ?? 0F 57 ?? F3 0F 58 ?? F3 0F 51 ?? 0F 2F ?? 73 ??");
        uint8_t* UnclampInputDataScanResult = Memory::PatternScan(baseModule, "?? 8D ?? ?? ?? F3 ?? 0F 59 ?? ?? 8B ?? F3 0F 59 ?? F3 ?? 0F 11 ?? ?? ?? F3 0F 11 ?? ?? ?? ?? 8B ?? FF ?? ?? ?? ?? ??");
        uint8_t* GetSmoothingInputVectorScanResult = Memory::PatternScan(baseModule, "F3 0F 59 ?? F3 0F 59 ?? F3 0F 59 ?? F3 0F 58 ?? 0F 57 ?? F3 0F 58 ?? F3 0F 51 ?? 0F 2F ?? 0F 83 ?? ?? ?? ?? ?? 8B ?? ?? 8B ?? FF");
        uint8_t* RemovePitchSmoothingScanResult = Memory::PatternScan(baseModule, "?? 8B ?? F3 ?? 0F 59 ?? E8 ?? ?? ?? ?? ?? 8B ?? ?? 8B ?? FF ?? ?? ?? ?? ??");
        uint8_t* RemoveYawSmoothingScanResult = Memory::PatternScan(baseModule, "?? 8B ?? F3 ?? 0F 59 ?? E8 ?? ?? ?? ?? F3 ?? 0F 59 ?? ?? 8B ?? ?? 8B ?? 0F 28 ??");
        if (StealRawMouseScanResult && UnclampInputDataScanResult && GetSmoothingInputVectorScanResult && RemovePitchSmoothingScanResult && RemoveYawSmoothingScanResult)
        {
            if (bIgnoreGamepad)
            {
                // This disables the mouse fix when using a controller because controller camera is perfectly fine
                uint8_t* DetectGamepadInputScanResult = Memory::PatternScan(baseModule, "F3 ?? 0F 10 ?? ?? ?? ?? ?? F3 0F 10 ?? ?? ?? ?? ?? E8 ?? ?? ?? ?? ?? 8B ?? ?? 85 ?? 0F 84 ?? ?? ?? ?? ?? 8B ?? ?? 3B ?? ?? ?? ?? ?? 7D ??");
                if (DetectGamepadInputScanResult)
                {
                    spdlog::info("Mouse Fix - Gamepad Detection: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)DetectGamepadInputScanResult - (uintptr_t)baseModule);
                    static SafetyHookMid DetectGamepadInputHook{};
                    DetectGamepadInputHook = safetyhook::create_mid(DetectGamepadInputScanResult,
                        [](SafetyHookContext& ctx)
                        {
                            bLastValidInputWasFromMouse = false;
                        });
                }
                else
                {
                    spdlog::warn("Mouse Fix - Gamepad Detection: Hook location not found. Gamepad input will be treated like mouse input!");
                }
            }
        
        
            // Part 1: Bypass the clamping (and maybe other stuff?) done to the actual mouse input values
            spdlog::info("Mouse Fix - Raw Mouse Grabber: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)StealRawMouseScanResult - (uintptr_t)baseModule);
            static SafetyHookMid StealRawMouseHook{};
            StealRawMouseHook = safetyhook::create_mid(StealRawMouseScanResult,
                [](SafetyHookContext& ctx)
                {
                    // This hook only gets called when there's no controller input, but also gets called when there's no input at all
                    if (ctx.xmm10.f32[0] != 0.0f || ctx.xmm8.f32[0] != 0.0f)
                    {
                        bLastValidInputWasFromMouse = true;
                    }
                    
                    // These numbers seem to be before the mouse movement range gets clamped to +-2ish
                    // But also seem to be after mouse sensitivity is applied for some reason? Works for me.
                    fRawMouseX = ctx.xmm10.f32[0];
                    fRawMouseY = ctx.xmm8.f32[0];
                });
            spdlog::info("Mouse Fix - Input Vector Replacement: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)UnclampInputDataScanResult - (uintptr_t)baseModule);
            static SafetyHookMid UnclampInputDataHook{};
            UnclampInputDataHook = safetyhook::create_mid(UnclampInputDataScanResult,
                [](SafetyHookContext& ctx)
                {
                    // Called from input handling, sets the Input struct on the FldCamera
                    // If our input isn't from a controller, we want to use the unclamped values we captured earlier in camera calculations
                    // With the way this is set up, I *think* this is actually useless (because we ignore these values later anyway)
                    // But i'm doing this just in case they're needed somewhere else I haven't looked at (and need to be accurate)
                    // TODO: find where further slight negative acceleration is being applied from
                    if (bLastValidInputWasFromMouse)
                    {
                        ctx.xmm10.f32[0] = fRawMouseX;
                        ctx.xmm7.f32[0] = fRawMouseY;
                    }
                });


            // Part 2: Bypass the camera smoothing calculations when processing player input
            // This gets the address of the input FVector passed to the camera management function so we can use it for our calculations
            spdlog::info("Mouse Fix - Input Vector Retrieval: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)GetSmoothingInputVectorScanResult - (uintptr_t)baseModule);
            static SafetyHookMid GetSmoothingInputVectorHook{};
            GetSmoothingInputVectorHook = safetyhook::create_mid(GetSmoothingInputVectorScanResult,
                [](SafetyHookContext& ctx)
                {
                    fInputVectorPtr = reinterpret_cast<float*>(ctx.rax + 0x25c); //(X,Y,Z)

                    // OK so the input vector provided to the hook (StoredInput) seems to correctly identify stops but also has some
                    // extra acceleration applied. I'm gonna opt to use the raw value we collected but use the vector
                    // to check for said stops (so dialog windows don't have spin to win cameras) and hope it works because I do not
                    // want to decompile more input code
                    if (fInputVectorPtr[0] == 0.0f && fInputVectorPtr[1] == 0.0f)
                    {
                        
                        fRawMouseX = 0.0f;
                        fRawMouseY = 0.0f;
                    }

                    // Also fRawMouseY is inverted where we collected it. I didn't wanna mess up any extra input processing by inverting it there
                    fRawMouseY = -fRawMouseY;
                });
            // I purposely only replace these 2 calls to the original camera calculation to preserve features like
            // holding left and right turning the camera or the camera moving back to neutral on slopes sometimes(?)
            // when there's no input
            spdlog::info("Mouse Fix - Remove Pitch SmoothCam: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)RemovePitchSmoothingScanResult - (uintptr_t)baseModule);
            static SafetyHookMid RemovePitchSmoothingHook;
            RemovePitchSmoothingHook = safetyhook::create_mid(RemovePitchSmoothingScanResult,
                [](SafetyHookContext& ctx)
                {
                    if (bLastValidInputWasFromMouse)
                    {
                        // Structure that stores camera behavior parameters.
                        // Values in order: (Speed, Accel, Decel, Press, Release, CurrentSpeed, CurrentAccel)
                        // No, I don't really know what Press and Release are, they seemed to be something to do modifying acceleration over time
                        // CurrentSpeed and CurrentAccel are the speed that the camera is supposed to move at this frame
                        float* fPitchParams = reinterpret_cast<float*>(ctx.rcx); 

                        ctx.xmm6.f32[0] = fRawMouseY * fPitchParams[0]; //XMM6 is the speed about to be fed to the actual camera move (returned from the original calculation)

                        // Zeroing these out because later frames act on them and move the camera further (doing a smooth deceleration)
                        fPitchParams[5] = 0.0f;
                        fPitchParams[6] = 0.0f;
                    }
                });
            spdlog::info("Mouse Fix - Remove Yaw SmoothCam: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)RemoveYawSmoothingScanResult - (uintptr_t)baseModule);
            static SafetyHookMid RemoveYawSmoothingHook;
            RemoveYawSmoothingHook = safetyhook::create_mid(RemoveYawSmoothingScanResult,
                [](SafetyHookContext& ctx)
                {
                    if (bLastValidInputWasFromMouse)
                    {
                        // See previous hook for details
                        float* fYawParams = reinterpret_cast<float*>(ctx.rcx);

                        ctx.xmm6.f32[0] = fRawMouseX * fYawParams[0];

                        fYawParams[5] = 0.0f;
                        fYawParams[6] = 0.0f;
                    }
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
    Sleep(iInjectionDelay);
    IntroSkip();
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

