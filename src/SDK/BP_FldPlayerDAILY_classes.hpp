#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FldPlayerDAILY

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_FldPlayer_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FldPlayerDAILY.BP_FldPlayerDAILY_C
// 0x0030 (0x0980 - 0x0950)
class ABP_FldPlayerDAILY_C final : public ABP_FldPlayer_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_FldPlayerDAILY_C;                // 0x0950(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFldPlayerDailyComp*                    FldPlayerDailyComp;                                // 0x0958(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFldFollowerPointComp*                  FollowerPoint_Single;                              // 0x0960(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFldFollowerPointComp*                  FollowerPoint_03;                                  // 0x0968(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFldFollowerPointComp*                  FollowerPoint_02;                                  // 0x0970(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFldFollowerPointComp*                  FollowerPoint_01;                                  // 0x0978(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_FldPlayerDAILY(int32 EntryPoint);
	void EnableIsTurned_Event();
	void DisableForceWaitPose_Event();
	void EnableForceWaitPose_Event();
	void SetSpeedThresholdDelegate_Event();
	void ReceiveBeginPlay();
	void SetSpeedThreshold();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FldPlayerDAILY_C">();
	}
	static class ABP_FldPlayerDAILY_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FldPlayerDAILY_C>();
	}
};
static_assert(alignof(ABP_FldPlayerDAILY_C) == 0x000010, "Wrong alignment on ABP_FldPlayerDAILY_C");
static_assert(sizeof(ABP_FldPlayerDAILY_C) == 0x000980, "Wrong size on ABP_FldPlayerDAILY_C");
static_assert(offsetof(ABP_FldPlayerDAILY_C, UberGraphFrame_BP_FldPlayerDAILY_C) == 0x000950, "Member 'ABP_FldPlayerDAILY_C::UberGraphFrame_BP_FldPlayerDAILY_C' has a wrong offset!");
static_assert(offsetof(ABP_FldPlayerDAILY_C, FldPlayerDailyComp) == 0x000958, "Member 'ABP_FldPlayerDAILY_C::FldPlayerDailyComp' has a wrong offset!");
static_assert(offsetof(ABP_FldPlayerDAILY_C, FollowerPoint_Single) == 0x000960, "Member 'ABP_FldPlayerDAILY_C::FollowerPoint_Single' has a wrong offset!");
static_assert(offsetof(ABP_FldPlayerDAILY_C, FollowerPoint_03) == 0x000968, "Member 'ABP_FldPlayerDAILY_C::FollowerPoint_03' has a wrong offset!");
static_assert(offsetof(ABP_FldPlayerDAILY_C, FollowerPoint_02) == 0x000970, "Member 'ABP_FldPlayerDAILY_C::FollowerPoint_02' has a wrong offset!");
static_assert(offsetof(ABP_FldPlayerDAILY_C, FollowerPoint_01) == 0x000978, "Member 'ABP_FldPlayerDAILY_C::FollowerPoint_01' has a wrong offset!");

}

