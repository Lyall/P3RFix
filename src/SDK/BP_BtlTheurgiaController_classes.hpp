#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlTheurgiaController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FBtlTheurgiaSeq_structs.hpp"
#include "Xrd777_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BtlTheurgiaController.BP_BtlTheurgiaController_C
// 0x0148 (0x03C0 - 0x0278)
class ABP_BtlTheurgiaController_C final : public AAppActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             SeqTable;                                          // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             HasFinishedLoading;                                // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ULevelSequence*                         SeqToPlay;                                         // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequence*                         SeqToPlaySound;                                    // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                    LS_Actor;                                          // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                    LS_Actor_Sound;                                    // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillId;                                           // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2C4[0x4];                                      // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFBtlTheurgiaSeq                       Item;                                              // 0x02C8(0x00A0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class ABP_BtlEventAssistant_C*                EventAssistant;                                    // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BtlCharacterBase_C*                 MainCharacter;                                     // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             HasFinishedSequence;                               // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBtlCoreComponent*                      BtlCore;                                           // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_BtlCharacterBase_C*                 Enchanter;                                         // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UDataTable*                             OffsetTable;                                       // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OriginalEnemyLocation;                             // 0x03A0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OriginalEnemyScale;                                // 0x03AC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTurningEnemy;                                    // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsLoadedSeq;                                       // 0x03B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsLoadedSoundSeq;                                  // 0x03BA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void HasFinishedLoading__DelegateSignature();
	void HasFinishedSequence__DelegateSignature();
	void ExecuteUbergraph_BP_BtlTheurgiaController(int32 EntryPoint);
	void On_Play_Sequence();
	void Has_Finished_Sequence();
	void On_Load_Resource();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnLoaded_419743374F851E2A1AB942B6DA4C7D5F(class UObject* Loaded);
	void OnLoaded_48C72DAE4B6AFD3C5C57A5A22F41F554(class UObject* Loaded);
	void Setup();
	void AllocateMembers();
	void PlayTheurgia();
	void Clear();
	void HideOtherCharacters();
	void GetRootTrans(float XOffset, struct FTransform* OutTrans);
	void LocateStartPosition();
	void TurnigPersona();
	void RestorePersona();
	void RestoreTheurgia();
	void SetupBGM();
	void RestoreBGM();
	void SetupTheurgiaSkillPerformance();
	void Choice_Seq_to_Play(TSoftObjectPtr<class ULevelSequence>* SequenceToPlay);
	void SetEquipVisible();
	void TurningCharacter();
	void RestoreEnemy();
	void RestoreCharacter();
	void AdjustEnemyTeammatesRotate(const struct FRotator& InRotate, struct FRotator* AdjustedRotate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BtlTheurgiaController_C">();
	}
	static class ABP_BtlTheurgiaController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BtlTheurgiaController_C>();
	}
};
static_assert(alignof(ABP_BtlTheurgiaController_C) == 0x000008, "Wrong alignment on ABP_BtlTheurgiaController_C");
static_assert(sizeof(ABP_BtlTheurgiaController_C) == 0x0003C0, "Wrong size on ABP_BtlTheurgiaController_C");
static_assert(offsetof(ABP_BtlTheurgiaController_C, UberGraphFrame) == 0x000278, "Member 'ABP_BtlTheurgiaController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BtlTheurgiaController_C, DefaultSceneRoot) == 0x000280, "Member 'ABP_BtlTheurgiaController_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_BtlTheurgiaController_C, SeqTable) == 0x000288, "Member 'ABP_BtlTheurgiaController_C::SeqTable' has a wrong offset!");
static_assert(offsetof(ABP_BtlTheurgiaController_C, HasFinishedLoading) == 0x000290, "Member 'ABP_BtlTheurgiaController_C::HasFinishedLoading' has a wrong offset!");
static_assert(offsetof(ABP_BtlTheurgiaController_C, SeqToPlay) == 0x0002A0, "Member 'ABP_BtlTheurgiaController_C::SeqToPlay' has a wrong offset!");
static_assert(offsetof(ABP_BtlTheurgiaController_C, SeqToPlaySound) == 0x0002A8, "Member 'ABP_BtlTheurgiaController_C::SeqToPlaySound' has a wrong offset!");
static_assert(offsetof(ABP_BtlTheurgiaController_C, LS_Actor) == 0x0002B0, "Member 'ABP_BtlTheurgiaController_C::LS_Actor' has a wrong offset!");
static_assert(offsetof(ABP_BtlTheurgiaController_C, LS_Actor_Sound) == 0x0002B8, "Member 'ABP_BtlTheurgiaController_C::LS_Actor_Sound' has a wrong offset!");
static_assert(offsetof(ABP_BtlTheurgiaController_C, SkillId) == 0x0002C0, "Member 'ABP_BtlTheurgiaController_C::SkillId' has a wrong offset!");
static_assert(offsetof(ABP_BtlTheurgiaController_C, Item) == 0x0002C8, "Member 'ABP_BtlTheurgiaController_C::Item' has a wrong offset!");
static_assert(offsetof(ABP_BtlTheurgiaController_C, EventAssistant) == 0x000368, "Member 'ABP_BtlTheurgiaController_C::EventAssistant' has a wrong offset!");
static_assert(offsetof(ABP_BtlTheurgiaController_C, MainCharacter) == 0x000370, "Member 'ABP_BtlTheurgiaController_C::MainCharacter' has a wrong offset!");
static_assert(offsetof(ABP_BtlTheurgiaController_C, HasFinishedSequence) == 0x000378, "Member 'ABP_BtlTheurgiaController_C::HasFinishedSequence' has a wrong offset!");
static_assert(offsetof(ABP_BtlTheurgiaController_C, BtlCore) == 0x000388, "Member 'ABP_BtlTheurgiaController_C::BtlCore' has a wrong offset!");
static_assert(offsetof(ABP_BtlTheurgiaController_C, Enchanter) == 0x000390, "Member 'ABP_BtlTheurgiaController_C::Enchanter' has a wrong offset!");
static_assert(offsetof(ABP_BtlTheurgiaController_C, OffsetTable) == 0x000398, "Member 'ABP_BtlTheurgiaController_C::OffsetTable' has a wrong offset!");
static_assert(offsetof(ABP_BtlTheurgiaController_C, OriginalEnemyLocation) == 0x0003A0, "Member 'ABP_BtlTheurgiaController_C::OriginalEnemyLocation' has a wrong offset!");
static_assert(offsetof(ABP_BtlTheurgiaController_C, OriginalEnemyScale) == 0x0003AC, "Member 'ABP_BtlTheurgiaController_C::OriginalEnemyScale' has a wrong offset!");
static_assert(offsetof(ABP_BtlTheurgiaController_C, IsTurningEnemy) == 0x0003B8, "Member 'ABP_BtlTheurgiaController_C::IsTurningEnemy' has a wrong offset!");
static_assert(offsetof(ABP_BtlTheurgiaController_C, IsLoadedSeq) == 0x0003B9, "Member 'ABP_BtlTheurgiaController_C::IsLoadedSeq' has a wrong offset!");
static_assert(offsetof(ABP_BtlTheurgiaController_C, IsLoadedSoundSeq) == 0x0003BA, "Member 'ABP_BtlTheurgiaController_C::IsLoadedSoundSeq' has a wrong offset!");

}
