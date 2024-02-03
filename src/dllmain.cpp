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
string sFixVer = "1.0";
string sLogFile = "P3RFix.log";
string sConfigFile = "P3RFix.ini";
string sExeName;
filesystem::path sExePath;
RECT rcDesktop;

// Ini Variables
bool bCustomResolution;
int iCustomResX;
int iCustomResY;
bool bHUDFix;
bool bAspectFix;
bool bFOVFix;
float fAdditionalFOV;
bool bFPSCap;

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
    inipp::get_value(ini.sections["Custom Resolution"], "Enabled", bCustomResolution);
    inipp::get_value(ini.sections["Custom Resolution"], "Width", iCustomResX);
    inipp::get_value(ini.sections["Custom Resolution"], "Height", iCustomResY);
    inipp::get_value(ini.sections["Uncap Framerate"], "Enabled", bFPSCap);
    inipp::get_value(ini.sections["Fix HUD"], "Enabled", bHUDFix);
    inipp::get_value(ini.sections["Fix Aspect Ratio"], "Enabled", bAspectFix);
    inipp::get_value(ini.sections["Fix FOV"], "Enabled", bFOVFix);
    inipp::get_value(ini.sections["Fix FOV"], "AdditionalFOV", fAdditionalFOV);

    // Log config parse
    spdlog::info("Config Parse: bCustomResolution: {}", bCustomResolution);
    spdlog::info("Config Parse: iCustomResX: {}", iCustomResX);
    spdlog::info("Config Parse: iCustomResY: {}", iCustomResY);
    spdlog::info("Config Parse: bFPSCap: {}", bFPSCap);
    spdlog::info("Config Parse: bHUDFix: {}", bHUDFix);
    spdlog::info("Config Parse: bAspectFix: {}", bAspectFix);
    spdlog::info("Config Parse: bFOVFix: {}", bFOVFix);
    spdlog::info("Config Parse: fAdditionalFOV: {}", fAdditionalFOV);
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
    spdlog::info("Custom Resolution: fAspectRatio: {}", fAspectRatio);
    spdlog::info("Custom Resolution: fAspectMultiplier: {}", fAspectMultiplier);
    spdlog::info("Custom Resolution: fHUDWidth: {}", fHUDWidth);
    spdlog::info("Custom Resolution: fHUDHeight: {}", fHUDHeight);
    spdlog::info("Custom Resolution: fHUDWidthOffset: {}", fHUDWidthOffset);
    spdlog::info("Custom Resolution: fHUDHeightOffset: {}", fHUDHeightOffset);
    spdlog::info("----------");
}

void Resolution()
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
                    fov += fAdditionalFOV;
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
        // Remove aspect constraint on HUD
        uint8_t* UIAspectScanResult = Memory::PatternScan(baseModule, "F3 ?? ?? ?? ?? ?? 45 ?? ?? ?? 41 ?? ?? ?? 41 ?? ?? ?? 41 ?? ?? ?? 49 ?? ?? ?? ?? ?? 00");
        if (UIAspectScanResult)
        {
            spdlog::info("UI: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)UIAspectScanResult - (uintptr_t)baseModule);

            static SafetyHookMid UIAspectMidHook{};
            UIAspectMidHook = safetyhook::create_mid(UIAspectScanResult + 6,
                [](SafetyHookContext& ctx)
                {
                    if (fAspectRatio > fNativeAspect)
                    {
                        ctx.rcx = iCustomResX;      // HUD Constraint Width
                        ctx.r8 = 0;                 // HUD Constraint Width Offset
                    }
                    else if (fAspectRatio < fNativeAspect)
                    {
                        ctx.rax = iCustomResY;      // HUD Constraint Height
                        ctx.rdx = 0;                // HUD Constraint Height Offset
                    }
                });
        }
        else if (!UIAspectScanResult)
        {
            spdlog::error("UI: Pattern scan failed.");
        }
    }
}

void FPSCap()
{
    if (bFPSCap)
    {
        // Set FPS cap
        uint8_t* FPSCapScanResult = Memory::PatternScan(baseModule, "E9 ?? ?? ?? ?? CC F3 0F ?? ?? ?? ?? 00 00 C3 CC");
        if (FPSCapScanResult)
        {
            spdlog::info("FPS Cap: Address is {:s}+{:x}", sExeName.c_str(), (uintptr_t)FPSCapScanResult - (uintptr_t)baseModule);
            Memory::PatchBytes((uintptr_t)FPSCapScanResult + 0x6, "\x0F\x57\xC0\x90\x90\x90\x90\x90", 8);
            spdlog::info("FPS Cap: Instruction patched.");
        }
        else if (!FPSCapScanResult)
        {
            spdlog::error("FPS Cap: Pattern scan failed.");
        }
    }
}

DWORD __stdcall Main(void*)
{
    Logging();
    ReadConfig();
    Resolution();
    AspectFOVFix();
    HUDFix();
    FPSCap();
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

