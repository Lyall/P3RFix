#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlSpawnedActorParent

#include "Basic.hpp"

#include "Xrd777_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BtlSpawnedActorParent.BP_BtlSpawnedActorParent_C
// 0x0008 (0x0280 - 0x0278)
class ABP_BtlSpawnedActorParent_C final : public AAppActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BtlSpawnedActorParent_C">();
	}
	static class ABP_BtlSpawnedActorParent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BtlSpawnedActorParent_C>();
	}
};
static_assert(alignof(ABP_BtlSpawnedActorParent_C) == 0x000008, "Wrong alignment on ABP_BtlSpawnedActorParent_C");
static_assert(sizeof(ABP_BtlSpawnedActorParent_C) == 0x000280, "Wrong size on ABP_BtlSpawnedActorParent_C");
static_assert(offsetof(ABP_BtlSpawnedActorParent_C, DefaultSceneRoot) == 0x000278, "Member 'ABP_BtlSpawnedActorParent_C::DefaultSceneRoot' has a wrong offset!");

}
