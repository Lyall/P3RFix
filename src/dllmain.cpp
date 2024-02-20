#include "stdafx.h"
#include "helper.hpp"
#include <inipp/inipp.h>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <safetyhook.hpp>

HMODULE baseModule = GetModuleHandle(NULL);

// Logger and config setup
inipp::Ini<char> ini;
string sFixName = "P3RFix";
string sFixVer = "1.1.2";
string sLogFile = "P3RFix.log";
string sConfigFile = "P3RFix.ini";
string sExeName;
filesystem::path sExePath;
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

SafetyHookInline RenTexPostLoad{};
void* RenTexPostLoad_Hooked(uint8_t* thisptr)
{
    // Calculate optimal resolution multiplier assuming target is 1080p
    // Screen percentage is only retrieved when the hook is run, meaning that on first boot we have to assume it is 100%
    float fOptimalRenTexResMulti = (iCustomResY * (fScreenPercentage / 100)) / 1080;
    float fRenTexResMulti;

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

    // Min = 25%, Max = 400%
    fRenTexResMulti = std::clamp(fRenTexResMulti, (float)0.25, (float)4);
    spdlog::info("Render Texture 2D Resolution: fRenTexResMulti = {}", fRenTexResMulti);

    if (fRenTexResMulti < 0.25f || fRenTexResMulti > 4.0f)
    {
        spdlog::warn("Render Texture 2D Resolution: fRenTexResMulti value invalid, clamped to = {}", fRenTexResMulti);
    }

    uint32_t* SizeX = (uint32_t*)(thisptr + 0x180);
    uint32_t* SizeY = (uint32_t*)(thisptr + 0x184);
    uint8_t* RTFormat = (uint8_t*)(thisptr + 0x19B);

    if (*RTFormat != 6)
    {
        spdlog::info("Render Texture 2D Resolution: Old render texture resolution = {}x{}", *SizeX, *SizeY);

        if (*SizeX == 1920 && *SizeY == 1080 && iRenTexNo < 4)
        {
            // 1080p HUD
            *SizeX *= fRenTexResMulti;
            *SizeY *= fRenTexResMulti;
            *SizeX = min(*SizeX, (uint32_t)fHUDWidth);
            *SizeY = min(*SizeY, (uint32_t)fHUDHeight);
            spdlog::info("Render Texture 2D Resolution : Clamped render texture resolution {} = {}x{}", iRenTexNo, *SizeX, *SizeY);
        }
        else
        {
            *SizeX *= fRenTexResMulti;
            *SizeY *= fRenTexResMulti;
        }

        spdlog::info("Render Texture 2D Resolution: New render texture resolution = {}x{}", *SizeX, *SizeY);
    }

    iRenTexNo++;
    // Run original function
    return RenTexPostLoad.stdcall<void*>(thisptr);
}

void Logging()
{
    // spdlog initialisation
    {
        try
        {
            auto logger = spdlog::basic_logger_mt(sFixName.c_str(), sLogFile, true);
            spdlog::set_default_logger(logger);

        }
        catch (const spdlog::spdlog_ex& ex)
        {
            AllocConsole();
            FILE* dummy;
            freopen_s(&dummy, "CONOUT$", "w", stdout);
            std::cout << "Log initialisation failed: " << ex.what() << std::endl;
        }
    }

    spdlog::flush_on(spdlog::level::debug);
    spdlog::info("{} v{} loaded.", sFixName.c_str(), sFixVer.c_str());
    spdlog::info("----------");

    // Get game name and exe path
    WCHAR exePath[_MAX_PATH] = { 0 };
    GetModuleFileNameW(baseModule, exePath, MAX_PATH);
    sExePath = exePath;
    sExeName = sExePath.filename().string();

    // Log module details
    spdlog::info("Module Name: {0:s}", sExeName.c_str());
    spdlog::info("Module Path: {0:s}", sExePath.string().c_str());
    spdlog::info("Module Address: 0x{0:x}", (uintptr_t)baseModule);
    spdlog::info("Module Timesstamp: {0:d}", Memory::ModuleTimestamp(baseModule));
    spdlog::info("----------");
}

void ReadConfig()
{
    // Initialise config
    std::ifstream iniFile(sConfigFile);
    if (!iniFile)
    {
        spdlog::error("Failed to load config file. Trying alternate paths...");

        // WinGDK
        if (sExePath.string().find("WinGDK") != string::npos)
        {
            spdlog::info("WinGDK: WinGDK build detected.");
            std::ifstream iniFile("./P3R/Binaries/WinGDK/" + sConfigFile);
            if (!iniFile)
            {
                spdlog::critical("WinGDK: Config file missing! Make sure {} is present in the game folder.", sConfigFile);
            }
            else
            {
                ini.parse(iniFile);
                spdlog::info("WinGDK: Config file loaded successfully.");
            }
        }
     
        // Win64
        if (sExePath.string().find("Win64") != string::npos)
        {
            spdlog::info("Win64: Win64 build detected.");
            std::ifstream iniFile("./P3R/Binaries/Win64/" + sConfigFile);
            if (!iniFile)
            {
                spdlog::critical("Win64: Config file missing! Make sure {} is present in the game folder.", sConfigFile);
            }
            else
            {
                ini.parse(iniFile);
                spdlog::info("Win64: Config file loaded successfully.");
            }
        }
    }
    else
    {
        ini.parse(iniFile);
        spdlog::info("Config file loaded successfully.");
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
    spdlog::info("Config Parse: fRenTexResMulti: {}", fRenTexResUserMulti); // Don't need to clamp this as we'll do it later.
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
        uint8_t* NetworkSkipScanResult = Memory::PatternScan(baseModule, "41 ?? 48 ?? ?? ?? 48 ?? ?? 8B ?? ?? 85 ??  0F ?? ?? ?? ?? ?? 33 ?? 83 ?? 01");
        if (NetworkSkipScanResult)
        {
            spdlog::info("Network Skip: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)NetworkSkipScanResult - (uintptr_t)baseModule);
            //Memory::Write((uintptr_t)NetworkSkipScanResult + 0x6, (BYTE)3);

            // TODO: Currently this only defaults the network features to enabled. It does not skip the "OK" dialog.
            static SafetyHookMid NetworkSkipMidHook{};
            NetworkSkipMidHook = safetyhook::create_mid(NetworkSkipScanResult,
                [](SafetyHookContext& ctx)
                {
                    *reinterpret_cast<int*>(ctx.rcx + 0x40) = 1;
                    *reinterpret_cast<int*>(ctx.rcx + 0x38) = 1;
                });

            spdlog::info("Network Skip: Skipped over network dialog.");
        }
        else if (!NetworkSkipScanResult)
        {
            spdlog::error("Network Skip: Pattern scan failed.");
        }

        // Skip intro after network option
        uint8_t* IntroSkipScanResult = Memory::PatternScan(baseModule, "B0 03 0F ?? ?? ?? ?? ?? 00 00 44 ?? ?? ?? ?? ?? ?? 00 00");
        if (IntroSkipScanResult)
        {
            spdlog::info("Intro Skip: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)IntroSkipScanResult - (uintptr_t)baseModule);

            switch (iSkipLogos)
            {
            // Opening Movie
            case 1:
                iSkipLogos = 3;
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

            // Patch instruction to skip to desired intro state
            Memory::PatchBytes((uintptr_t)IntroSkipScanResult, "\xB0\x03", 2);
            Memory::Write((uintptr_t)IntroSkipScanResult + 0x1, (BYTE)iSkipLogos);
            spdlog::info("Intro Skip: Skipped intro to title state {}.", iSkipLogos);
        }
        else if (!IntroSkipScanResult)
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
    if (bHUDFix)
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
                    if (iCustomResX > 1920)
                    {
                        ctx.rcx = iCustomResX;
                    }
                   
                    if (iCustomResY > 1080)
                    {
                        ctx.rax = iCustomResY;
                    }
                });

            static SafetyHookMid HUDConstraints1MidHook{};
            HUDConstraints1MidHook = safetyhook::create_mid(HUDConstraintsScanResult + 0x11,
                [](SafetyHookContext& ctx)
                {
                    ctx.r8 = 0;
                    ctx.rdx = 0;
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
                        if (ctx.xmm2.f32[0] == 0.0f && ctx.xmm3.f32[0] == 0.0f)
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

                        if (ctx.xmm2.f32[0] == (float)1920 && ctx.xmm3.f32[0] == 0.0f)
                        {
                            if (fAspectRatio > fNativeAspect)
                            {
                                ctx.xmm2.f32[0] *= fAspectRatio;
                            }
                            else if (fAspectRatio < fNativeAspect)
                            {
                                ctx.xmm3.f32[0] = -(fHUDHeightOffset * 2);
                            }
                        }

                        if (ctx.xmm2.f32[0] == 0.0f && ctx.xmm3.f32[0] == (float)1080)
                        {
                            if (fAspectRatio > fNativeAspect)
                            {
                                ctx.xmm2.f32[0] = -(fHUDWidthOffset * 2);
                            }
                            else if (fAspectRatio < fNativeAspect)
                            {
                                ctx.xmm3.f32[0] /= fAspectRatio;
                            }
                        }

                        if (ctx.xmm2.f32[0] == (float)1920 && ctx.xmm3.f32[0] == (float)1080)
                        {
                            if (fAspectRatio > fNativeAspect)
                            {
                                ctx.xmm2.f32[0] *= fAspectRatio;
                            }
                            else if (fAspectRatio < fNativeAspect)
                            {
                                ctx.xmm3.f32[0] /= fAspectRatio;
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

void Miscellaneous()
{
    if (!bPauseOnFocusLoss)
    {
        // Pause on focus loss
        uint8_t* WindowFocusScanResult = Memory::PatternScan(baseModule, "83 ?? ?? ?? 00 48 ?? ?? ?? 48 ?? ?? 0F ?? ?? FF ?? 38 ?? 00 00");
        if (WindowFocusScanResult)
        {
            spdlog::info("Window Focus: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)WindowFocusScanResult - (uintptr_t)baseModule);
            Memory::PatchBytes((uintptr_t)WindowFocusScanResult + 0x4, "\x7F", 1);
            spdlog::info("Window Focus: Patched instruction.");

        }
        else if (!WindowFocusScanResult)
        {
            spdlog::error("Window Focus: Pattern scan failed.");
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
    Miscellaneous();
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

