#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PersonaBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CharacterBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PersonaBase.BP_PersonaBase_C
// 0x0080 (0x0308 - 0x0288)
class ABP_PersonaBase_C final : public APersonaBaseCore
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ABP_CharaPointLight_C*>          OverlapPointLights;                                // 0x0290(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         NumberOfPointLights;                               // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A4[0x4];                                      // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         ClosestPointLight;                                 // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       DynamicMIs;                                        // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         BoundsScale;                                       // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NiagaraDesiredAge;                                 // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bNiagaraOffscreen;                                 // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D1[0x7];                                      // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNiagaraComponent*>              NiagaraComponents;                                 // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                         LastRenderTimeOnScreen;                            // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartPositionVec_VG;                               // 0x02EC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EndPositionVec_VG;                                 // 0x02F8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PersonaBase(int32 EntryPoint);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();
	void CreateDMI(class UMeshComponent* MeshComponent);
	void SetPointLightParameter(class UMaterialInstanceDynamic* MIDObjectReference);
	void SetDMIParameter_Tick();
	void SetScalarParameterValueEx(class UMaterialInstanceDynamic* Material, class FName ParameterName, float ParameterValue);
	void GetClosestPointLights();
	void Set_Niagara_Offscreen_Mode();
	void SetNiagaraOffscreenTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PersonaBase_C">();
	}
	static class ABP_PersonaBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PersonaBase_C>();
	}
};
static_assert(alignof(ABP_PersonaBase_C) == 0x000008, "Wrong alignment on ABP_PersonaBase_C");
static_assert(sizeof(ABP_PersonaBase_C) == 0x000308, "Wrong size on ABP_PersonaBase_C");
static_assert(offsetof(ABP_PersonaBase_C, UberGraphFrame) == 0x000288, "Member 'ABP_PersonaBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PersonaBase_C, OverlapPointLights) == 0x000290, "Member 'ABP_PersonaBase_C::OverlapPointLights' has a wrong offset!");
static_assert(offsetof(ABP_PersonaBase_C, NumberOfPointLights) == 0x0002A0, "Member 'ABP_PersonaBase_C::NumberOfPointLights' has a wrong offset!");
static_assert(offsetof(ABP_PersonaBase_C, ClosestPointLight) == 0x0002A8, "Member 'ABP_PersonaBase_C::ClosestPointLight' has a wrong offset!");
static_assert(offsetof(ABP_PersonaBase_C, DynamicMIs) == 0x0002B8, "Member 'ABP_PersonaBase_C::DynamicMIs' has a wrong offset!");
static_assert(offsetof(ABP_PersonaBase_C, BoundsScale) == 0x0002C8, "Member 'ABP_PersonaBase_C::BoundsScale' has a wrong offset!");
static_assert(offsetof(ABP_PersonaBase_C, NiagaraDesiredAge) == 0x0002CC, "Member 'ABP_PersonaBase_C::NiagaraDesiredAge' has a wrong offset!");
static_assert(offsetof(ABP_PersonaBase_C, bNiagaraOffscreen) == 0x0002D0, "Member 'ABP_PersonaBase_C::bNiagaraOffscreen' has a wrong offset!");
static_assert(offsetof(ABP_PersonaBase_C, NiagaraComponents) == 0x0002D8, "Member 'ABP_PersonaBase_C::NiagaraComponents' has a wrong offset!");
static_assert(offsetof(ABP_PersonaBase_C, LastRenderTimeOnScreen) == 0x0002E8, "Member 'ABP_PersonaBase_C::LastRenderTimeOnScreen' has a wrong offset!");
static_assert(offsetof(ABP_PersonaBase_C, StartPositionVec_VG) == 0x0002EC, "Member 'ABP_PersonaBase_C::StartPositionVec_VG' has a wrong offset!");
static_assert(offsetof(ABP_PersonaBase_C, EndPositionVec_VG) == 0x0002F8, "Member 'ABP_PersonaBase_C::EndPositionVec_VG' has a wrong offset!");

}
