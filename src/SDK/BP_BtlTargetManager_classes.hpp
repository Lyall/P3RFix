#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlTargetManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Xrd777_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BtlTargetManager.BP_BtlTargetManager_C
// 0x0018 (0x0118 - 0x0100)
class UBP_BtlTargetManager_C final : public UBtlTargetsManagerComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0100(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ABP_BtlCharacterBase_C*>         TargetsList;                                       // 0x0108(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_BtlTargetManager(int32 EntryPoint);
	void ClearForBP();
	void GetTargetsCharacters(TArray<class ABP_BtlCharacterBase_C*>* Characters);
	void GetMain(class ABP_BtlCharacterBase_C** Character);
	void GetEffectTargetsCharacters(TArray<class ABP_BtlCharacterBase_C*>* Characters);
	void GetMainCharacterCylinder(bool UseCommonCylinder, bool ExceptPersona, struct FVector* Bottom_Center, float* Radius, float* Height, struct FVector* Cylinder_Center);
	void GetTargetsCylinder(bool UseCommonCylinder, struct FVector* Bottom_Center, float* Radius, float* Height, struct FVector* Cylinder_Center);
	void IsOtherCharacter(class ABP_BtlCharacterBase_C* CheckChara, bool* OtherCharacter);
	void GetCombineCylinder(bool UseCommonCylinder, bool ExceptPersonaCylinder, struct FVector* Bottom_Center, float* Radius, float* Height, struct FVector* Cylinder_Center);
	void GetMainWithPersona(TArray<class ABP_BtlCharacterBase_C*>* Character);
	void CheckTargetSelfOnly(bool* Result);
	void CheckTargetsIncludeSelf(bool* Result);
	void CheckTargetsIncludePlayerAndEnemy(bool* Result);
	void GetMainAndTargets(TArray<class ABtlActor*>& OutResult, TArray<class ABtlActor*>* OutResult2);
	void IsEnchantCharacter(class ABP_BtlCharacterBase_C* CheckChara, bool* OtherCharacter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BtlTargetManager_C">();
	}
	static class UBP_BtlTargetManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BtlTargetManager_C>();
	}
};
static_assert(alignof(UBP_BtlTargetManager_C) == 0x000008, "Wrong alignment on UBP_BtlTargetManager_C");
static_assert(sizeof(UBP_BtlTargetManager_C) == 0x000118, "Wrong size on UBP_BtlTargetManager_C");
static_assert(offsetof(UBP_BtlTargetManager_C, UberGraphFrame) == 0x000100, "Member 'UBP_BtlTargetManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_BtlTargetManager_C, TargetsList) == 0x000108, "Member 'UBP_BtlTargetManager_C::TargetsList' has a wrong offset!");

}
