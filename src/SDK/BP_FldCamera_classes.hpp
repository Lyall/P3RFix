#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FldCamera

#include "Basic.hpp"

#include "Xrd777_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FldCamera.BP_FldCamera_C
// 0x0010 (0x07C0 - 0x07B0)
class ABP_FldCamera_C final : public AFldCamera
{
public:
	class UChildActorComponent*                   Far;                                               // 0x07B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Near;                                              // 0x07B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FldCamera_C">();
	}
	static class ABP_FldCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FldCamera_C>();
	}
};
static_assert(alignof(ABP_FldCamera_C) == 0x000010, "Wrong alignment on ABP_FldCamera_C");
static_assert(sizeof(ABP_FldCamera_C) == 0x0007C0, "Wrong size on ABP_FldCamera_C");
static_assert(offsetof(ABP_FldCamera_C, Far) == 0x0007B0, "Member 'ABP_FldCamera_C::Far' has a wrong offset!");
static_assert(offsetof(ABP_FldCamera_C, Near) == 0x0007B8, "Member 'ABP_FldCamera_C::Near' has a wrong offset!");

}
