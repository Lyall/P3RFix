#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlPhaseEscape

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_BtlPhaseBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BtlPhaseEscape.BP_BtlPhaseEscape_C
// 0x0040 (0x02C8 - 0x0288)
class ABP_BtlPhaseEscape_C final : public ABP_BtlPhaseBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          ReadyForExit;                                      // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_291[0x3];                                      // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ElapsedTime;                                       // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_BtlCameraManagerComponent_C*        CameraManager;                                     // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_BtlEventAssistant_C*                EventAssistant;                                    // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBtlCoreComponent*                      BtlCore;                                           // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UBP_BtlEnvironment_C*                   BtlEnvironment;                                    // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         EscapeCount;                                       // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EscapeNum;                                         // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEscapeSkillMode;                                 // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_BP_BtlPhaseEscape(int32 EntryPoint);
	void Has_Finished_Escape_Skill();
	void Has_Finished_a_character_Escaping();
	void On_Progress_Next();
	void Has_Finished_Performance();
	void On_Fadeout_BGM();
	void ReceiveDestroyed();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	class ABtlPhase* GetNextPhaseInBP();
	void Setup();
	void AllocateMembers();
	void Setup_All_Members_Visibility();
	void HideAllEnemies();

	bool CheckProgressNextPhaseInBP() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BtlPhaseEscape_C">();
	}
	static class ABP_BtlPhaseEscape_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BtlPhaseEscape_C>();
	}
};
static_assert(alignof(ABP_BtlPhaseEscape_C) == 0x000008, "Wrong alignment on ABP_BtlPhaseEscape_C");
static_assert(sizeof(ABP_BtlPhaseEscape_C) == 0x0002C8, "Wrong size on ABP_BtlPhaseEscape_C");
static_assert(offsetof(ABP_BtlPhaseEscape_C, UberGraphFrame) == 0x000288, "Member 'ABP_BtlPhaseEscape_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseEscape_C, ReadyForExit) == 0x000290, "Member 'ABP_BtlPhaseEscape_C::ReadyForExit' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseEscape_C, ElapsedTime) == 0x000294, "Member 'ABP_BtlPhaseEscape_C::ElapsedTime' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseEscape_C, CameraManager) == 0x000298, "Member 'ABP_BtlPhaseEscape_C::CameraManager' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseEscape_C, EventAssistant) == 0x0002A0, "Member 'ABP_BtlPhaseEscape_C::EventAssistant' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseEscape_C, BtlCore) == 0x0002A8, "Member 'ABP_BtlPhaseEscape_C::BtlCore' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseEscape_C, BtlEnvironment) == 0x0002B0, "Member 'ABP_BtlPhaseEscape_C::BtlEnvironment' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseEscape_C, EscapeCount) == 0x0002B8, "Member 'ABP_BtlPhaseEscape_C::EscapeCount' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseEscape_C, EscapeNum) == 0x0002BC, "Member 'ABP_BtlPhaseEscape_C::EscapeNum' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseEscape_C, IsEscapeSkillMode) == 0x0002C0, "Member 'ABP_BtlPhaseEscape_C::IsEscapeSkillMode' has a wrong offset!");

}

