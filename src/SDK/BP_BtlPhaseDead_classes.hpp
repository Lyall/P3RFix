#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlPhaseDead

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_BtlPhaseBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BtlPhaseDead.BP_BtlPhaseDead_C
// 0x0058 (0x02E0 - 0x0288)
class ABP_BtlPhaseDead_C final : public ABP_BtlPhaseBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          ReadyForExit;                                      // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_291[0x3];                                      // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ElapsedTime;                                       // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequencePlayer*                   DeadSequence;                                      // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_BtlCameraManagerComponent_C*        CameraManager;                                     // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UBtlCoreComponent*                      BtlCore;                                           // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ALevelSequenceActor*                    LS_Actor;                                          // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_BtlEnvironment_C*                   BtlEnvironment;                                    // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ALevelSequenceActor*                    LS_After_Dicision_Retry;                           // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRetry;                                           // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C9[0x7];                                      // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_BtlEventAssistant_C*                EventAssistant;                                    // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_BtlGuiComponent_C*                  BtlGui;                                            // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BtlPhaseDead(int32 EntryPoint);
	void Has_Finished_LS_ahead_of_Retry_Selection();
	void Has_Finished_Retry_Selection();
	void Has_Finished_Retry_LS();
	void On_Play_Sequence();
	void ReceiveDestroyed();
	void Has_Finished_Finale_Camera();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnLoaded_5A6DB0FE4E63032DCE533BA4AC55607D(class UObject* Loaded);
	void OnLoaded_F299919840F6E357EA79F088AFEB262D(class UObject* Loaded);
	void OnLoaded_AF8919F940C1409C2B2923937150EE2F(class UObject* Loaded);
	void OnLoaded_BFD3285142E23A9177B8069FB03A6A4A(class UObject* Loaded);
	void UserConstructionScript();
	class ABtlPhase* GetNextPhaseInBP();
	void Setup(class UBP_BtlCameraManagerComponent_C* Btl_CameraManager);
	void InitEvent(bool IsRetry_0);
	void HideAllEnemies();
	void HideOtherCharacters();
	void AllocateHeroToInvoke();
	void CoordinateFogCenter();

	bool CheckProgressNextPhaseInBP() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BtlPhaseDead_C">();
	}
	static class ABP_BtlPhaseDead_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BtlPhaseDead_C>();
	}
};
static_assert(alignof(ABP_BtlPhaseDead_C) == 0x000008, "Wrong alignment on ABP_BtlPhaseDead_C");
static_assert(sizeof(ABP_BtlPhaseDead_C) == 0x0002E0, "Wrong size on ABP_BtlPhaseDead_C");
static_assert(offsetof(ABP_BtlPhaseDead_C, UberGraphFrame) == 0x000288, "Member 'ABP_BtlPhaseDead_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseDead_C, ReadyForExit) == 0x000290, "Member 'ABP_BtlPhaseDead_C::ReadyForExit' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseDead_C, ElapsedTime) == 0x000294, "Member 'ABP_BtlPhaseDead_C::ElapsedTime' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseDead_C, DeadSequence) == 0x000298, "Member 'ABP_BtlPhaseDead_C::DeadSequence' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseDead_C, CameraManager) == 0x0002A0, "Member 'ABP_BtlPhaseDead_C::CameraManager' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseDead_C, BtlCore) == 0x0002A8, "Member 'ABP_BtlPhaseDead_C::BtlCore' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseDead_C, LS_Actor) == 0x0002B0, "Member 'ABP_BtlPhaseDead_C::LS_Actor' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseDead_C, BtlEnvironment) == 0x0002B8, "Member 'ABP_BtlPhaseDead_C::BtlEnvironment' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseDead_C, LS_After_Dicision_Retry) == 0x0002C0, "Member 'ABP_BtlPhaseDead_C::LS_After_Dicision_Retry' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseDead_C, IsRetry) == 0x0002C8, "Member 'ABP_BtlPhaseDead_C::IsRetry' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseDead_C, EventAssistant) == 0x0002D0, "Member 'ABP_BtlPhaseDead_C::EventAssistant' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseDead_C, BtlGui) == 0x0002D8, "Member 'ABP_BtlPhaseDead_C::BtlGui' has a wrong offset!");

}
