#include "stdafx.h"
#include "helper.hpp"
#include <inipp/inipp.h>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <safetyhook.hpp>

using namespace std;

HMODULE baseModule = GetModuleHandle(NULL);

// Logger and config setup
inipp::Ini<char> ini;
string sFixName = "P3RFix";
string sFixVer = "1.1.1";
string sLogFile = "P3RFix.log";
string sConfigFile = "P3RFix.ini";
string sExeName;
filesystem::path sExePath;
RECT rcDesktop;

// Ini Variables
int iInjectionDelay;
bool bCustomResolution;
int iCustomResX;
int iCustomResY;
bool bHUDFix;
bool bAspectFix;
bool bFOVFix;
bool bScreenPercentage;
int iScreenPercentage;
bool bSkipLogos;
bool bSkipNetwork;
bool bSkipToLoadSave;

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
    inipp::get_value(ini.sections["Fix HUD"], "Enabled", bHUDFix);
    inipp::get_value(ini.sections["Fix Aspect Ratio"], "Enabled", bAspectFix);
    inipp::get_value(ini.sections["Fix FOV"], "Enabled", bFOVFix);
    inipp::get_value(ini.sections["Screen Percentage"], "Enabled", bScreenPercentage);
    inipp::get_value(ini.sections["Screen Percentage"], "Value", iScreenPercentage);
    inipp::get_value(ini.sections["Intro Skip"], "SkipLogos", bSkipLogos);
    inipp::get_value(ini.sections["Intro Skip"], "SkipNetwork", bSkipNetwork);
    inipp::get_value(ini.sections["Intro Skip"], "SkipToLoadSave", bSkipToLoadSave);

    // Log config parse
    spdlog::info("Config Parse: iInjectionDelay: {}ms", iInjectionDelay);
    spdlog::info("Config Parse: bCustomResolution: {}", bCustomResolution);
    spdlog::info("Config Parse: iCustomResX: {}", iCustomResX);
    spdlog::info("Config Parse: iCustomResY: {}", iCustomResY);
    spdlog::info("Config Parse: bHUDFix: {}", bHUDFix);
    spdlog::info("Config Parse: bAspectFix: {}", bAspectFix);
    spdlog::info("Config Parse: bFOVFix: {}", bFOVFix);
    spdlog::info("Config Parse: bScreenPercentage: {}", bScreenPercentage);
    spdlog::info("Config Parse: iScreenPercentage: {}", iScreenPercentage);
    if (iScreenPercentage < 10 || iScreenPercentage > 400)
    {
        iScreenPercentage = std::clamp(iScreenPercentage, 10, 400);
        spdlog::info("Config Parse: iScreenPercentage value invalid, clamped to {}", iScreenPercentage);
    }
    spdlog::info("Config Parse: bSkipLogos: {}", bSkipLogos);
    spdlog::info("Config Parse: bSkipNetwork: {}", bSkipNetwork);
    spdlog::info("Config Parse: bSkipToLoadSave: {}", bSkipToLoadSave);
    spdlog::info("----------");

    // Calculate aspect ratio / use desktop res instead
    GetWindowRect(GetDesktopWindow(), &rcDesktop);
    if (iCustomResX > 0 && iCustomResY > 0)
    {
        fAspectRatio = (float)iCustomResX / (float)iCustomResY;
    }
    else
    {
        iCustomResX = (int)rcDesktop.right;
        iCustomResY = (int)rcDesktop.bottom;
        fAspectRatio = (float)rcDesktop.right / (float)rcDesktop.bottom;
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
    spdlog::info("Custom Resolution: iCustomResX: {}", iCustomResX);
    spdlog::info("Custom Resolution: iCustomResY: {}", iCustomResY);
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
    // Skip caution
    uint8_t* CautionSkipScanResult = Memory::PatternScan(baseModule, "FF ?? ?? 32 C0 48 ?? ?? ?? ?? 48 ?? ?? ?? ?? 0F ?? ?? ?? ?? 48 ?? ?? ?? 5F C3");
    if (CautionSkipScanResult)
    {
        spdlog::info("Caution Skip: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)CautionSkipScanResult - (uintptr_t)baseModule);

        if (bSkipNetwork)
        {
            // Skip over network
            Memory::PatchBytes((uintptr_t)CautionSkipScanResult + 0x3, "\xB0\x03", 2);
            spdlog::info("Caution Skip: Skipped over network dialog.");
        }
        else 
        {
            // Skip to network
            Memory::PatchBytes((uintptr_t)CautionSkipScanResult + 0x3, "\xB0\x02", 2);
            spdlog::info("Caution Skip: Skipped caution to network dialog.");
        }   
    }
    else if (!CautionSkipScanResult)
    {
        spdlog::error("Caution Skip: Pattern scan failed.");
    }

    // Skip to menu after network option
    uint8_t* IntroSkipScanResult = Memory::PatternScan(baseModule, "B0 03 0F ?? ?? ?? ?? ?? 00 00 44 ?? ?? ?? ?? ?? ?? 00 00");
    if (IntroSkipScanResult)
    {
        spdlog::info("Intro Skip: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)IntroSkipScanResult - (uintptr_t)baseModule);

        if (bSkipLogos)
        {
            // Press any key screen
            Memory::PatchBytes((uintptr_t)IntroSkipScanResult, "\xB0\x05", 2);
            spdlog::info("Intro Skip: Skipped to 'press any key' screen.");
        }
        
        if (bSkipToLoadSave)
        {
            // Load menu 
            Memory::PatchBytes((uintptr_t)IntroSkipScanResult, "\xB0\x08", 2);
            spdlog::info("Intro Skip: Skipped to load save menu.");
        } 
    }
    else if (!IntroSkipScanResult)
    {
        spdlog::error("Intro Skip: Pattern scan failed.");
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
   
    // Grab current resolution. Needed in case the game is running borderless for example.
    uint8_t* CurrResolutionScanResult = Memory::PatternScan(baseModule, "33 ?? B9 ?? ?? ?? ?? 45 ?? ?? 48 ?? ?? 4A ?? ?? ?? 48 ?? ?? 8B ??");
    if (CurrResolutionScanResult)
    {
        spdlog::info("Current Resolution: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)CurrResolutionScanResult - (uintptr_t)baseModule);
        static SafetyHookMid CurrResolutionMidHook{};
        CurrResolutionMidHook = safetyhook::create_mid(CurrResolutionScanResult + 0x7,
            [](SafetyHookContext& ctx)
            {
                iCustomResX = *(int*)(&ctx.r15);
                iCustomResY = *(int*)(&ctx.r9);
                fAspectRatio = (float)iCustomResX / iCustomResY;

                // Calculate HUD variables again in case the resolution changed.
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
            });
    }
    else if (!CurrResolutionScanResult)
    {
        spdlog::error("Current Resolution: Pattern scan failed.");
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
        // FadePgColorOut
        uint8_t* FadePgColorOutScanResult = Memory::PatternScan(baseModule, "89 ?? ?? ?? 33 ?? F3 0F ?? ?? ?? ?? E8 ?? ?? ?? ?? 0F ?? ?? ?? 66 ?? ?? ?? ??");
        if (FadePgColorOutScanResult)
        {
            spdlog::info("Fade Pg Color Out: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)FadePgColorOutScanResult - (uintptr_t)baseModule);

            static SafetyHookMid FadePgColorOut1MidHook{};
            FadePgColorOut1MidHook = safetyhook::create_mid(FadePgColorOutScanResult,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.xmm2.f32[0] = -(fHUDWidthOffset * 2);
                    }
                    else if (fAspectRatio < fNativeAspect)
                    {
                        ctx.xmm3.f32[0] = -(fHUDHeightOffset * 2);
                    }
                });

            static SafetyHookMid FadePgColorOut2MidHook{};
            FadePgColorOut2MidHook = safetyhook::create_mid(FadePgColorOutScanResult + 0x42,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.xmm2.f32[0] = 1080 * fAspectRatio;
                    }
                    else if (fAspectRatio < fNativeAspect)
                    {
                        ctx.xmm3.f32[0] = -(fHUDHeightOffset * 2);
                    }
                });

            static SafetyHookMid FadePgColorOut3MidHook{};
            FadePgColorOut3MidHook = safetyhook::create_mid(FadePgColorOutScanResult + 0x9E,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.xmm2.f32[0] = -(fHUDWidthOffset * 2);
                    }
                    else if (fAspectRatio < fNativeAspect)
                    {
                        ctx.xmm3.f32[0] = 1920 / fAspectRatio;
                    }
                });

            static SafetyHookMid FadePgColorOut4MidHook{};
            FadePgColorOut4MidHook = safetyhook::create_mid(FadePgColorOutScanResult + 0xD9,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.xmm2.f32[0] = 1080 * fAspectRatio;
                    }
                    else if (fAspectRatio < fNativeAspect)
                    {
                        ctx.xmm3.f32[0] = 1920 / fAspectRatio;
                    }
                });
        }
        else if (!FadePgColorOutScanResult)
        {
            spdlog::error("Fade Pg Color Out: Pattern scan failed.");
        }
        
        // FadePgSlide
        uint8_t* FadePgSlideScanResult = Memory::PatternScan(baseModule, "0F ?? ?? BA 02 00 00 00 F3 ?? ?? ?? ?? ?? E8 ?? ?? ?? ?? 0F ?? ?? ?? 66 0F ?? ?? ?? ?? ?? 00 66 0F ?? ?? ?? 66 ?? ?? ?? ?? 48 ?? ?? 74 ?? F0 ?? ?? ??");
        if (FadePgSlideScanResult)
        {
            spdlog::info("Fade Pg Slide: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)FadePgSlideScanResult - (uintptr_t)baseModule);

            static SafetyHookMid FadePgSlide1MidHook{};
            FadePgSlide1MidHook = safetyhook::create_mid(FadePgSlideScanResult + 0x3,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.xmm2.f32[0] = -(fHUDWidthOffset * 2);
                    }
                    else if (fAspectRatio < fNativeAspect)
                    {
                        ctx.xmm3.f32[0] = -(fHUDHeightOffset * 2);
                    }
                });

            static SafetyHookMid FadePgSlide2MidHook{};
            FadePgSlide2MidHook = safetyhook::create_mid(FadePgSlideScanResult + 0x50,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.xmm2.f32[0] = 1080 * fAspectRatio;
                    }
                    else if (fAspectRatio < fNativeAspect)
                    {
                        ctx.xmm3.f32[0] = -(fHUDHeightOffset * 2);
                    }
                });

            static SafetyHookMid FadePgSlide3MidHook{};
            FadePgSlide3MidHook = safetyhook::create_mid(FadePgSlideScanResult + 0xA2,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.xmm2.f32[0] = -(fHUDWidthOffset * 2);
                    }
                    else if (fAspectRatio < fNativeAspect)
                    {
                        ctx.xmm3.f32[0] = 1920 / fAspectRatio;
                    }
                });

            static SafetyHookMid FadePgSlide4MidHook{};
            FadePgSlide4MidHook = safetyhook::create_mid(FadePgSlideScanResult + 0xEB,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.xmm2.f32[0] = 1080 * fAspectRatio;
                    }
                    else if (fAspectRatio < fNativeAspect)
                    {
                        ctx.xmm3.f32[0] = 1920 / fAspectRatio;
                    }
                });
        }
        else if (!FadePgSlideScanResult)
        {
            spdlog::error("Fade Pg Slide: Pattern scan failed.");
        }

        // FadePgSlideVertical
        uint8_t* FadePgSlideVerticalScanResult = Memory::PatternScan(baseModule, "0F 28 ?? BA 06 00 00 00 F3 0F ?? ?? ?? ?? E8 ?? ?? ?? ?? 0F ?? ?? ?? 66 ?? ?? ?? ?? ?? ?? 00 66 ?? ?? ?? 08 66 ?? ?? ?? ?? 48 ?? ?? 74 ?? F0 ?? ?? ?? F3 0F ?? ?? ?? ?? 48 ?? ?? ?? ?? ?? 00 F3 0F ?? ?? ?? ?? 0F 28 ??");
        if (FadePgSlideVerticalScanResult)
        {
            spdlog::info("Fade Pg Slide Verical: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)FadePgSlideVerticalScanResult - (uintptr_t)baseModule);

            static SafetyHookMid FadePgSlideVertical1MidHook{};
            FadePgSlideVertical1MidHook = safetyhook::create_mid(FadePgSlideVerticalScanResult + 0x3,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.xmm2.f32[0] = -(fHUDWidthOffset * 2);
                    }
                    else if (fAspectRatio < fNativeAspect)
                    {
                        ctx.xmm3.f32[0] = -(fHUDHeightOffset * 2);
                    }
                });

            static SafetyHookMid FadePgSlideVertical2MidHook{};
            FadePgSlideVertical2MidHook = safetyhook::create_mid(FadePgSlideVerticalScanResult + 0x50,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.xmm2.f32[0] = 1080 * fAspectRatio;
                    }
                    else if (fAspectRatio < fNativeAspect)
                    {
                        ctx.xmm3.f32[0] = -(fHUDHeightOffset * 2);
                    }
                });

            static SafetyHookMid FadePgSlideVertical3MidHook{};
            FadePgSlideVertical3MidHook = safetyhook::create_mid(FadePgSlideVerticalScanResult + 0x9D,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.xmm2.f32[0] = -(fHUDWidthOffset * 2);
                    }
                    else if (fAspectRatio < fNativeAspect)
                    {
                        ctx.xmm3.f32[0] = 1920 / fAspectRatio;
                    }
                });

            static SafetyHookMid FadePgSlideVertical4MidHook{};
            FadePgSlideVertical4MidHook = safetyhook::create_mid(FadePgSlideVerticalScanResult + 0xEB,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.xmm2.f32[0] = 1080 * fAspectRatio;
                    }
                    else if (fAspectRatio < fNativeAspect)
                    {
                        ctx.xmm3.f32[0] = 1920 / fAspectRatio;
                    }
                });
        }
        else if (!FadePgSlideVerticalScanResult)
        {
            spdlog::error("Fade Pg Slide Vertical: Pattern scan failed.");
        }
    }
}

void GraphicalTweaks()
{
    if (bScreenPercentage)
    {
        // Screen Percentage
        uint8_t* ScreenPercentageScanResult = Memory::PatternScan(baseModule, "0F ?? ?? F3 0F ?? ?? ?? 0F ?? ?? F3 0F ?? ?? ?? ?? ?? ?? 0F ?? ?? 77 ?? F3 0F ?? ?? ?? ?? ?? ?? 48 ?? ?? ?? ?? 48 ?? ?? 20 5F C3");
        if (ScreenPercentageScanResult)
        {
            spdlog::info("Aspect Ratio: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)ScreenPercentageScanResult - (uintptr_t)baseModule);
            static SafetyHookMid ScreenPercentageMidHook{};
            ScreenPercentageMidHook = safetyhook::create_mid(ScreenPercentageScanResult + 0x3,
                [](SafetyHookContext& ctx)
                {
                    *reinterpret_cast<float*>(ctx.rdi + (ctx.rbx*4)) = (float)iScreenPercentage;
                });

        }
        else if (!ScreenPercentageScanResult)
        {
            spdlog::error("Aspect Ratio: Pattern scan failed.");
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

