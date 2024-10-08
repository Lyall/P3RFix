#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlHitEffectEX

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Xrd777_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BtlHitEffectEX.BP_BtlHitEffectEX_C
// 0x0070 (0x02E8 - 0x0278)
class ABP_BtlHitEffectEX_C final : public AAppActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UNiagaraSystem>          EffectToPlay;                                      // 0x0288(0x0028)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         SENo;                                              // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                EffectLocation;                                    // 0x02B4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRotator                               EffectRotation;                                    // 0x02C0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_2CC[0x4];                                      // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      VFX;                                               // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         As_Niagara_System;                                 // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          IsPlaying;                                         // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_BtlHitEffectEX(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnLoaded_CB5170E841E1DBFFA867F0BDA86E9CE7(class UObject* Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BtlHitEffectEX_C">();
	}
	static class ABP_BtlHitEffectEX_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BtlHitEffectEX_C>();
	}
};
static_assert(alignof(ABP_BtlHitEffectEX_C) == 0x000008, "Wrong alignment on ABP_BtlHitEffectEX_C");
static_assert(sizeof(ABP_BtlHitEffectEX_C) == 0x0002E8, "Wrong size on ABP_BtlHitEffectEX_C");
static_assert(offsetof(ABP_BtlHitEffectEX_C, UberGraphFrame) == 0x000278, "Member 'ABP_BtlHitEffectEX_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BtlHitEffectEX_C, DefaultSceneRoot) == 0x000280, "Member 'ABP_BtlHitEffectEX_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_BtlHitEffectEX_C, EffectToPlay) == 0x000288, "Member 'ABP_BtlHitEffectEX_C::EffectToPlay' has a wrong offset!");
static_assert(offsetof(ABP_BtlHitEffectEX_C, SENo) == 0x0002B0, "Member 'ABP_BtlHitEffectEX_C::SENo' has a wrong offset!");
static_assert(offsetof(ABP_BtlHitEffectEX_C, EffectLocation) == 0x0002B4, "Member 'ABP_BtlHitEffectEX_C::EffectLocation' has a wrong offset!");
static_assert(offsetof(ABP_BtlHitEffectEX_C, EffectRotation) == 0x0002C0, "Member 'ABP_BtlHitEffectEX_C::EffectRotation' has a wrong offset!");
static_assert(offsetof(ABP_BtlHitEffectEX_C, VFX) == 0x0002D0, "Member 'ABP_BtlHitEffectEX_C::VFX' has a wrong offset!");
static_assert(offsetof(ABP_BtlHitEffectEX_C, As_Niagara_System) == 0x0002D8, "Member 'ABP_BtlHitEffectEX_C::As_Niagara_System' has a wrong offset!");
static_assert(offsetof(ABP_BtlHitEffectEX_C, IsPlaying) == 0x0002E0, "Member 'ABP_BtlHitEffectEX_C::IsPlaying' has a wrong offset!");

}

