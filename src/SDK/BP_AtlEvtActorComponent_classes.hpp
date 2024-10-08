#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AtlEvtActorComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Xrd777_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AtlEvtActorComponent.BP_AtlEvtActorComponent_C
// 0x0008 (0x0270 - 0x0268)
class UBP_AtlEvtActorComponent_C final : public UAtlEvtActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_AtlEvtActorComponent(int32 EntryPoint);
	void ResetVelocitySimulateParam();
	void ResetEvtLocomotionParams();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AtlEvtActorComponent_C">();
	}
	static class UBP_AtlEvtActorComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AtlEvtActorComponent_C>();
	}
};
static_assert(alignof(UBP_AtlEvtActorComponent_C) == 0x000008, "Wrong alignment on UBP_AtlEvtActorComponent_C");
static_assert(sizeof(UBP_AtlEvtActorComponent_C) == 0x000270, "Wrong size on UBP_AtlEvtActorComponent_C");
static_assert(offsetof(UBP_AtlEvtActorComponent_C, UberGraphFrame) == 0x000268, "Member 'UBP_AtlEvtActorComponent_C::UberGraphFrame' has a wrong offset!");

}

