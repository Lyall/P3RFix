#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlStatusEffectCoordinator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Xrd777_structs.hpp"
#include "Xrd777_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BtlStatusEffectCoordinator.BP_BtlStatusEffectCoordinator_C
// 0x0028 (0x02A0 - 0x0278)
class ABP_BtlStatusEffectCoordinator_C final : public AAppActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_BtlResidentDataComp_C*              BP_BtlResidentDataComp;                            // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_BtlCharacterBase_C*                 Character;                                         // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EBtlBadStatusIcon                             Status;                                            // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BtlStatusEffectCoordinator(int32 EntryPoint);
	void ToDestroy();
	void ReceiveBeginPlay();
	void OnLoaded_997451214973A26A4BC6A996F64D8421(class UObject* Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BtlStatusEffectCoordinator_C">();
	}
	static class ABP_BtlStatusEffectCoordinator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BtlStatusEffectCoordinator_C>();
	}
};
static_assert(alignof(ABP_BtlStatusEffectCoordinator_C) == 0x000008, "Wrong alignment on ABP_BtlStatusEffectCoordinator_C");
static_assert(sizeof(ABP_BtlStatusEffectCoordinator_C) == 0x0002A0, "Wrong size on ABP_BtlStatusEffectCoordinator_C");
static_assert(offsetof(ABP_BtlStatusEffectCoordinator_C, UberGraphFrame) == 0x000278, "Member 'ABP_BtlStatusEffectCoordinator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BtlStatusEffectCoordinator_C, BP_BtlResidentDataComp) == 0x000280, "Member 'ABP_BtlStatusEffectCoordinator_C::BP_BtlResidentDataComp' has a wrong offset!");
static_assert(offsetof(ABP_BtlStatusEffectCoordinator_C, DefaultSceneRoot) == 0x000288, "Member 'ABP_BtlStatusEffectCoordinator_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_BtlStatusEffectCoordinator_C, Character) == 0x000290, "Member 'ABP_BtlStatusEffectCoordinator_C::Character' has a wrong offset!");
static_assert(offsetof(ABP_BtlStatusEffectCoordinator_C, Status) == 0x000298, "Member 'ABP_BtlStatusEffectCoordinator_C::Status' has a wrong offset!");

}
