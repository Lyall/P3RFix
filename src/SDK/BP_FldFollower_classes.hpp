#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FldFollower

#include "Basic.hpp"

#include "BP_AppCharacter_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FldFollower.BP_FldFollower_C
// 0x0020 (0x0960 - 0x0940)
class ABP_FldFollower_C final : public ABP_AppCharacter_C
{
public:
	class UFldCharAccessIconMngComp*              FldCharAccessIconMngComp;                          // 0x0938(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFldCharEmotionIconMngComp*             FldCharEmotionIconMngComp;                         // 0x0940(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFldNpcComp*                            FldNpcComp;                                        // 0x0948(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   HitChildActor;                                     // 0x0950(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFldFollowerComp*                       FldFollowerComp;                                   // 0x0958(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FldFollower_C">();
	}
	static class ABP_FldFollower_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FldFollower_C>();
	}
};
static_assert(alignof(ABP_FldFollower_C) == 0x000010, "Wrong alignment on ABP_FldFollower_C");
static_assert(sizeof(ABP_FldFollower_C) == 0x000960, "Wrong size on ABP_FldFollower_C");
static_assert(offsetof(ABP_FldFollower_C, FldCharAccessIconMngComp) == 0x000938, "Member 'ABP_FldFollower_C::FldCharAccessIconMngComp' has a wrong offset!");
static_assert(offsetof(ABP_FldFollower_C, FldCharEmotionIconMngComp) == 0x000940, "Member 'ABP_FldFollower_C::FldCharEmotionIconMngComp' has a wrong offset!");
static_assert(offsetof(ABP_FldFollower_C, FldNpcComp) == 0x000948, "Member 'ABP_FldFollower_C::FldNpcComp' has a wrong offset!");
static_assert(offsetof(ABP_FldFollower_C, HitChildActor) == 0x000950, "Member 'ABP_FldFollower_C::HitChildActor' has a wrong offset!");
static_assert(offsetof(ABP_FldFollower_C, FldFollowerComp) == 0x000958, "Member 'ABP_FldFollower_C::FldFollowerComp' has a wrong offset!");

}
