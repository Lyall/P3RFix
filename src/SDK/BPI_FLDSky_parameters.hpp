#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_FLDSky

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_FLDSky.BPI_FLDSky_C.GetDirectionalLightMoon
// 0x0008 (0x0008 - 0x0000)
struct BPI_FLDSky_C_GetDirectionalLightMoon final
{
public:
	class ULightComponent*                        LightComponent;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_FLDSky_C_GetDirectionalLightMoon) == 0x000008, "Wrong alignment on BPI_FLDSky_C_GetDirectionalLightMoon");
static_assert(sizeof(BPI_FLDSky_C_GetDirectionalLightMoon) == 0x000008, "Wrong size on BPI_FLDSky_C_GetDirectionalLightMoon");
static_assert(offsetof(BPI_FLDSky_C_GetDirectionalLightMoon, LightComponent) == 0x000000, "Member 'BPI_FLDSky_C_GetDirectionalLightMoon::LightComponent' has a wrong offset!");

// Function BPI_FLDSky.BPI_FLDSky_C.GetExposureCompensation
// 0x0004 (0x0004 - 0x0000)
struct BPI_FLDSky_C_GetExposureCompensation final
{
public:
	float                                         Exposure;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_FLDSky_C_GetExposureCompensation) == 0x000004, "Wrong alignment on BPI_FLDSky_C_GetExposureCompensation");
static_assert(sizeof(BPI_FLDSky_C_GetExposureCompensation) == 0x000004, "Wrong size on BPI_FLDSky_C_GetExposureCompensation");
static_assert(offsetof(BPI_FLDSky_C_GetExposureCompensation, Exposure) == 0x000000, "Member 'BPI_FLDSky_C_GetExposureCompensation::Exposure' has a wrong offset!");

// Function BPI_FLDSky.BPI_FLDSky_C.SetExposureCompensation
// 0x0004 (0x0004 - 0x0000)
struct BPI_FLDSky_C_SetExposureCompensation final
{
public:
	float                                         Exposure;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_FLDSky_C_SetExposureCompensation) == 0x000004, "Wrong alignment on BPI_FLDSky_C_SetExposureCompensation");
static_assert(sizeof(BPI_FLDSky_C_SetExposureCompensation) == 0x000004, "Wrong size on BPI_FLDSky_C_SetExposureCompensation");
static_assert(offsetof(BPI_FLDSky_C_SetExposureCompensation, Exposure) == 0x000000, "Member 'BPI_FLDSky_C_SetExposureCompensation::Exposure' has a wrong offset!");

}
