#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlPhaseBase

#include "Basic.hpp"

#include "Xrd777_structs.hpp"
#include "Xrd777_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BtlPhaseBase.BP_BtlPhaseBase_C
// 0x0008 (0x0288 - 0x0280)
class ABP_BtlPhaseBase_C : public ABtlPhase
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	class ABtlPhase* CreateNextPhase(EBtlPhaseType Phase);
	void SpawnPhase(class UClass* Class_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BtlPhaseBase_C">();
	}
	static class ABP_BtlPhaseBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BtlPhaseBase_C>();
	}
};
static_assert(alignof(ABP_BtlPhaseBase_C) == 0x000008, "Wrong alignment on ABP_BtlPhaseBase_C");
static_assert(sizeof(ABP_BtlPhaseBase_C) == 0x000288, "Wrong size on ABP_BtlPhaseBase_C");
static_assert(offsetof(ABP_BtlPhaseBase_C, DefaultSceneRoot) == 0x000280, "Member 'ABP_BtlPhaseBase_C::DefaultSceneRoot' has a wrong offset!");

}
