#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AppCharBag_0001_099

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Pp0012_010_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AppCharBag_0001_099.BP_AppCharBag_0001_099_C
// 0x0008 (0x02A8 - 0x02A0)
class ABP_AppCharBag_0001_099_C final : public ABP_Pp0012_010_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_AppCharBag_0001_099(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AppCharBag_0001_099_C">();
	}
	static class ABP_AppCharBag_0001_099_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AppCharBag_0001_099_C>();
	}
};
static_assert(alignof(ABP_AppCharBag_0001_099_C) == 0x000008, "Wrong alignment on ABP_AppCharBag_0001_099_C");
static_assert(sizeof(ABP_AppCharBag_0001_099_C) == 0x0002A8, "Wrong size on ABP_AppCharBag_0001_099_C");
static_assert(offsetof(ABP_AppCharBag_0001_099_C, UberGraphFrame) == 0x0002A0, "Member 'ABP_AppCharBag_0001_099_C::UberGraphFrame' has a wrong offset!");

}
