#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CriWareAdxLipSync

#include "Basic.hpp"

#include "CriWareAdxLipSync_structs.hpp"


namespace SDK::Params
{

// Function CriWareAdxLipSync.LipsAnalyzerBase.Init
// 0x0004 (0x0004 - 0x0000)
struct LipsAnalyzerBase_Init final
{
public:
	int32                                         MaxInputSamplingRate;                              // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LipsAnalyzerBase_Init) == 0x000004, "Wrong alignment on LipsAnalyzerBase_Init");
static_assert(sizeof(LipsAnalyzerBase_Init) == 0x000004, "Wrong size on LipsAnalyzerBase_Init");
static_assert(offsetof(LipsAnalyzerBase_Init, MaxInputSamplingRate) == 0x000000, "Member 'LipsAnalyzerBase_Init::MaxInputSamplingRate' has a wrong offset!");

// Function CriWareAdxLipSync.LipsAnalyzerBase.SetSamplingRate
// 0x0004 (0x0004 - 0x0000)
struct LipsAnalyzerBase_SetSamplingRate final
{
public:
	int32                                         SamplingRateHz;                                    // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LipsAnalyzerBase_SetSamplingRate) == 0x000004, "Wrong alignment on LipsAnalyzerBase_SetSamplingRate");
static_assert(sizeof(LipsAnalyzerBase_SetSamplingRate) == 0x000004, "Wrong size on LipsAnalyzerBase_SetSamplingRate");
static_assert(offsetof(LipsAnalyzerBase_SetSamplingRate, SamplingRateHz) == 0x000000, "Member 'LipsAnalyzerBase_SetSamplingRate::SamplingRateHz' has a wrong offset!");

// Function CriWareAdxLipSync.LipsAnalyzerBase.SetSilenceThreshold
// 0x0004 (0x0004 - 0x0000)
struct LipsAnalyzerBase_SetSilenceThreshold final
{
public:
	float                                         VolumeDb;                                          // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LipsAnalyzerBase_SetSilenceThreshold) == 0x000004, "Wrong alignment on LipsAnalyzerBase_SetSilenceThreshold");
static_assert(sizeof(LipsAnalyzerBase_SetSilenceThreshold) == 0x000004, "Wrong size on LipsAnalyzerBase_SetSilenceThreshold");
static_assert(offsetof(LipsAnalyzerBase_SetSilenceThreshold, VolumeDb) == 0x000000, "Member 'LipsAnalyzerBase_SetSilenceThreshold::VolumeDb' has a wrong offset!");

// Function CriWareAdxLipSync.LipsAnalyzerBase.GetInfo
// 0x0010 (0x0010 - 0x0000)
struct LipsAnalyzerBase_GetInfo final
{
public:
	struct FCriLipsMouthInfo                      ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(LipsAnalyzerBase_GetInfo) == 0x000004, "Wrong alignment on LipsAnalyzerBase_GetInfo");
static_assert(sizeof(LipsAnalyzerBase_GetInfo) == 0x000010, "Wrong size on LipsAnalyzerBase_GetInfo");
static_assert(offsetof(LipsAnalyzerBase_GetInfo, ReturnValue) == 0x000000, "Member 'LipsAnalyzerBase_GetInfo::ReturnValue' has a wrong offset!");

// Function CriWareAdxLipSync.LipsAnalyzerBase.GetInfoAtSilence
// 0x0010 (0x0010 - 0x0000)
struct LipsAnalyzerBase_GetInfoAtSilence final
{
public:
	struct FCriLipsMouthInfo                      ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(LipsAnalyzerBase_GetInfoAtSilence) == 0x000004, "Wrong alignment on LipsAnalyzerBase_GetInfoAtSilence");
static_assert(sizeof(LipsAnalyzerBase_GetInfoAtSilence) == 0x000010, "Wrong size on LipsAnalyzerBase_GetInfoAtSilence");
static_assert(offsetof(LipsAnalyzerBase_GetInfoAtSilence, ReturnValue) == 0x000000, "Member 'LipsAnalyzerBase_GetInfoAtSilence::ReturnValue' has a wrong offset!");

// Function CriWareAdxLipSync.LipsAnalyzerBase.GetMorphTargetBlendAmountAsJapanese
// 0x0014 (0x0014 - 0x0000)
struct LipsAnalyzerBase_GetMorphTargetBlendAmountAsJapanese final
{
public:
	struct FCriLipsMorphTargetBlendAmountAsJapanese ReturnValue;                                       // 0x0000(0x0014)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(LipsAnalyzerBase_GetMorphTargetBlendAmountAsJapanese) == 0x000004, "Wrong alignment on LipsAnalyzerBase_GetMorphTargetBlendAmountAsJapanese");
static_assert(sizeof(LipsAnalyzerBase_GetMorphTargetBlendAmountAsJapanese) == 0x000014, "Wrong size on LipsAnalyzerBase_GetMorphTargetBlendAmountAsJapanese");
static_assert(offsetof(LipsAnalyzerBase_GetMorphTargetBlendAmountAsJapanese, ReturnValue) == 0x000000, "Member 'LipsAnalyzerBase_GetMorphTargetBlendAmountAsJapanese::ReturnValue' has a wrong offset!");

// Function CriWareAdxLipSync.LipsAnalyzerBase.GetSilenceThreshold
// 0x0004 (0x0004 - 0x0000)
struct LipsAnalyzerBase_GetSilenceThreshold final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LipsAnalyzerBase_GetSilenceThreshold) == 0x000004, "Wrong alignment on LipsAnalyzerBase_GetSilenceThreshold");
static_assert(sizeof(LipsAnalyzerBase_GetSilenceThreshold) == 0x000004, "Wrong size on LipsAnalyzerBase_GetSilenceThreshold");
static_assert(offsetof(LipsAnalyzerBase_GetSilenceThreshold, ReturnValue) == 0x000000, "Member 'LipsAnalyzerBase_GetSilenceThreshold::ReturnValue' has a wrong offset!");

// Function CriWareAdxLipSync.LipsAnalyzerBase.GetVolume
// 0x0004 (0x0004 - 0x0000)
struct LipsAnalyzerBase_GetVolume final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LipsAnalyzerBase_GetVolume) == 0x000004, "Wrong alignment on LipsAnalyzerBase_GetVolume");
static_assert(sizeof(LipsAnalyzerBase_GetVolume) == 0x000004, "Wrong size on LipsAnalyzerBase_GetVolume");
static_assert(offsetof(LipsAnalyzerBase_GetVolume, ReturnValue) == 0x000000, "Member 'LipsAnalyzerBase_GetVolume::ReturnValue' has a wrong offset!");

// Function CriWareAdxLipSync.LipsAnalyzerBase.IsAtSilence
// 0x0001 (0x0001 - 0x0000)
struct LipsAnalyzerBase_IsAtSilence final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LipsAnalyzerBase_IsAtSilence) == 0x000001, "Wrong alignment on LipsAnalyzerBase_IsAtSilence");
static_assert(sizeof(LipsAnalyzerBase_IsAtSilence) == 0x000001, "Wrong size on LipsAnalyzerBase_IsAtSilence");
static_assert(offsetof(LipsAnalyzerBase_IsAtSilence, ReturnValue) == 0x000000, "Member 'LipsAnalyzerBase_IsAtSilence::ReturnValue' has a wrong offset!");

// Function CriWareAdxLipSync.LipsAtomAnalyzer.Attach
// 0x0008 (0x0008 - 0x0000)
struct LipsAtomAnalyzer_Attach final
{
public:
	class UAtomComponent*                         InAtomComponent;                                   // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LipsAtomAnalyzer_Attach) == 0x000008, "Wrong alignment on LipsAtomAnalyzer_Attach");
static_assert(sizeof(LipsAtomAnalyzer_Attach) == 0x000008, "Wrong size on LipsAtomAnalyzer_Attach");
static_assert(offsetof(LipsAtomAnalyzer_Attach, InAtomComponent) == 0x000000, "Member 'LipsAtomAnalyzer_Attach::InAtomComponent' has a wrong offset!");

}
