#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlAlloutController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Xrd777_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BtlAlloutController.BP_BtlAlloutController_C
// 0x0130 (0x03A8 - 0x0278)
class ABP_BtlAlloutController_C final : public AAppActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_BtlEnvironment_C*                   Env;                                               // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_BtlCharacterBase_C*                 MainCharacter;                                     // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_BtlCharacterBase_C*                 HERO;                                              // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class ABP_BtlCharacterBase_C*>         PartyCharacters;                                   // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             Has_Finished_Loading;                              // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Has_Finished_Unloading;                            // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSoftObjectPtr<class ULevelSequence>          SequenceCommon;                                    // 0x02D0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          LoadedLevels;                                      // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LoadedSequence;                                    // 0x02F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2FA[0x6];                                      // 0x02FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ULevelSequence*                         LS_Start;                                          // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Has_Finished_Startup_Sequence;                     // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ALevelSequenceActor*                    LS_Start_Actor;                                    // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BtlEventAssistant_C*                EventAssistant;                                    // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class ULevelSequence>>  SequenceToBattleEnd_A;                             // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TSoftObjectPtr<class ULevelSequence>>  SequenceToBattleEnd_B;                             // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ULevelSequence*                         LS_Before_Shuffle;                                 // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequence*                         LS_After_Shuffle;                                  // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                    LS_Before_Shuffle_Actor;                           // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Has_Finished_Before_Shuffle_Sequence;              // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Has_Finished_After_Shuffle_Sequence;               // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ALevelSequenceActor*                    LS_After_Shuffle_Actor;                            // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AllowProceedShuffleSequence;                       // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LoadedStartLS;                                     // 0x0389(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LoadedBeforeShuffleLS;                             // 0x038A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LoadedAfterShuffleLS;                              // 0x038B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LoadedFinalTex;                                    // 0x038C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38D[0x3];                                      // 0x038D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             AlloutSequenceTable;                               // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BtlAlloutFinishActor_C*             FinishTexActor;                                    // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LoadCharacterModels;                               // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void Has_Finished_Loading__DelegateSignature();
	void Has_Finished_Unloading__DelegateSignature();
	void Has_Finished_Startup_Sequence__DelegateSignature();
	void Has_Finished_Before_Shuffle_Sequence__DelegateSignature();
	void Has_Finished_After_Shuffle_Sequence__DelegateSignature();
	void ExecuteUbergraph_BP_BtlAlloutController(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void Has_Finished_Loading_tex();
	void On_Finished_Sequence_After_Shuffle();
	void On_Finished_Sequence_Before_Shuffle();
	void On_Finished_Single_Performance();
	void Has_Finished_Playing_Start_Seq();
	void Has_Finished_Loading_Stuff();
	void Has_Finished_Loading_Level();
	void On_Unload_Resource();
	void On_Load_Resource();
	void OnLoaded_8A46DB4444D35F946B17A2966A1BE30A(class UObject* Loaded);
	void OnLoaded_B41915304C41D101349591ABD3C3600E(class UObject* Loaded);
	void OnLoaded_A90C9119438CAE6B812937BD67180638(class UObject* Loaded);
	void GetAlloutLevelName(class FName* LevelName);
	void PlayAlloutStartupSequence();
	void PlayAllout2ndSequence();
	void PlayAllout3rdSequence();
	void Setup();
	void AllocateMembers();
	void ClearAlloutAttack();
	void ChoiceSequence(TSoftObjectPtr<class ULevelSequence>* Start, TSoftObjectPtr<class ULevelSequence>* BeforeShuffle, TSoftObjectPtr<class ULevelSequence>* AfterShuffle);
	void StopAllSequence();
	void StopASequence(class ALevelSequenceActor* Target);
	void SetupMembersEventMode(bool Enable);
	void PlayAlloutFinish();
	void Check_Model_Load_Finished(bool* IsLoadEnded);
	void Load_Character_Specific_Model_For_Allout();
	void SetupMembersForAllout();
	void PlayVoiceRunIntoEnemy();
	void DestroySequence();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BtlAlloutController_C">();
	}
	static class ABP_BtlAlloutController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BtlAlloutController_C>();
	}
};
static_assert(alignof(ABP_BtlAlloutController_C) == 0x000008, "Wrong alignment on ABP_BtlAlloutController_C");
static_assert(sizeof(ABP_BtlAlloutController_C) == 0x0003A8, "Wrong size on ABP_BtlAlloutController_C");
static_assert(offsetof(ABP_BtlAlloutController_C, UberGraphFrame) == 0x000278, "Member 'ABP_BtlAlloutController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, DefaultSceneRoot) == 0x000280, "Member 'ABP_BtlAlloutController_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, Env) == 0x000288, "Member 'ABP_BtlAlloutController_C::Env' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, MainCharacter) == 0x000290, "Member 'ABP_BtlAlloutController_C::MainCharacter' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, HERO) == 0x000298, "Member 'ABP_BtlAlloutController_C::HERO' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, PartyCharacters) == 0x0002A0, "Member 'ABP_BtlAlloutController_C::PartyCharacters' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, Has_Finished_Loading) == 0x0002B0, "Member 'ABP_BtlAlloutController_C::Has_Finished_Loading' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, Has_Finished_Unloading) == 0x0002C0, "Member 'ABP_BtlAlloutController_C::Has_Finished_Unloading' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, SequenceCommon) == 0x0002D0, "Member 'ABP_BtlAlloutController_C::SequenceCommon' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, LoadedLevels) == 0x0002F8, "Member 'ABP_BtlAlloutController_C::LoadedLevels' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, LoadedSequence) == 0x0002F9, "Member 'ABP_BtlAlloutController_C::LoadedSequence' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, LS_Start) == 0x000300, "Member 'ABP_BtlAlloutController_C::LS_Start' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, Has_Finished_Startup_Sequence) == 0x000308, "Member 'ABP_BtlAlloutController_C::Has_Finished_Startup_Sequence' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, LS_Start_Actor) == 0x000318, "Member 'ABP_BtlAlloutController_C::LS_Start_Actor' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, EventAssistant) == 0x000320, "Member 'ABP_BtlAlloutController_C::EventAssistant' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, SequenceToBattleEnd_A) == 0x000328, "Member 'ABP_BtlAlloutController_C::SequenceToBattleEnd_A' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, SequenceToBattleEnd_B) == 0x000338, "Member 'ABP_BtlAlloutController_C::SequenceToBattleEnd_B' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, LS_Before_Shuffle) == 0x000348, "Member 'ABP_BtlAlloutController_C::LS_Before_Shuffle' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, LS_After_Shuffle) == 0x000350, "Member 'ABP_BtlAlloutController_C::LS_After_Shuffle' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, LS_Before_Shuffle_Actor) == 0x000358, "Member 'ABP_BtlAlloutController_C::LS_Before_Shuffle_Actor' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, Has_Finished_Before_Shuffle_Sequence) == 0x000360, "Member 'ABP_BtlAlloutController_C::Has_Finished_Before_Shuffle_Sequence' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, Has_Finished_After_Shuffle_Sequence) == 0x000370, "Member 'ABP_BtlAlloutController_C::Has_Finished_After_Shuffle_Sequence' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, LS_After_Shuffle_Actor) == 0x000380, "Member 'ABP_BtlAlloutController_C::LS_After_Shuffle_Actor' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, AllowProceedShuffleSequence) == 0x000388, "Member 'ABP_BtlAlloutController_C::AllowProceedShuffleSequence' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, LoadedStartLS) == 0x000389, "Member 'ABP_BtlAlloutController_C::LoadedStartLS' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, LoadedBeforeShuffleLS) == 0x00038A, "Member 'ABP_BtlAlloutController_C::LoadedBeforeShuffleLS' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, LoadedAfterShuffleLS) == 0x00038B, "Member 'ABP_BtlAlloutController_C::LoadedAfterShuffleLS' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, LoadedFinalTex) == 0x00038C, "Member 'ABP_BtlAlloutController_C::LoadedFinalTex' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, AlloutSequenceTable) == 0x000390, "Member 'ABP_BtlAlloutController_C::AlloutSequenceTable' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, FinishTexActor) == 0x000398, "Member 'ABP_BtlAlloutController_C::FinishTexActor' has a wrong offset!");
static_assert(offsetof(ABP_BtlAlloutController_C, LoadCharacterModels) == 0x0003A0, "Member 'ABP_BtlAlloutController_C::LoadCharacterModels' has a wrong offset!");

}

