#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlGuiShiftSelect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_BtlGuiBaseActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BtlGuiShiftSelect.BP_BtlGuiShiftSelect_C
// 0x0058 (0x03A8 - 0x0350)
class ABP_BtlGuiShiftSelect_C final : public ABP_BtlGuiBaseActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_BtlGuiShiftSelect_C;             // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBtlGuiResources*                       BtlGuiResources;                                   // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBtlDataBaseComponent*                  BtlDataBase;                                       // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBtlGuiDrawComponent*                   BtlGuiDraw;                                        // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABtlActor*                              MainCharacter;                                     // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABtlActor*>                      PlayerList;                                        // 0x0378(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         TargetIndex;                                       // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ListMoveAhead;                                     // 0x038C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsCreateTargetList;                                // 0x038D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38E[0x2];                                      // 0x038E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABtlActor*>                      TargetListTemp;                                    // 0x0390(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ABtlActor*                              TargetTemp;                                        // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BtlGuiShiftSelect(int32 EntryPoint);
	void GuiActorStateExit();
	void GuiActorStateInit(bool Flag, int32 Param);
	void ChangeStateShiftSelect();
	void GuiActorBeginPlay();
	void PushRL();
	void PushOk();
	void PushLL();
	void PushLR();
	void GuiActorUnbindAction();
	void GuiActorBindAction();
	void PushCancel();
	void CheckCurcorType(class ABtlActor* InputPin);
	void UpdateTargets(bool NoAnimation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BtlGuiShiftSelect_C">();
	}
	static class ABP_BtlGuiShiftSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BtlGuiShiftSelect_C>();
	}
};
static_assert(alignof(ABP_BtlGuiShiftSelect_C) == 0x000008, "Wrong alignment on ABP_BtlGuiShiftSelect_C");
static_assert(sizeof(ABP_BtlGuiShiftSelect_C) == 0x0003A8, "Wrong size on ABP_BtlGuiShiftSelect_C");
static_assert(offsetof(ABP_BtlGuiShiftSelect_C, UberGraphFrame_BP_BtlGuiShiftSelect_C) == 0x000350, "Member 'ABP_BtlGuiShiftSelect_C::UberGraphFrame_BP_BtlGuiShiftSelect_C' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiShiftSelect_C, BtlGuiResources) == 0x000358, "Member 'ABP_BtlGuiShiftSelect_C::BtlGuiResources' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiShiftSelect_C, BtlDataBase) == 0x000360, "Member 'ABP_BtlGuiShiftSelect_C::BtlDataBase' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiShiftSelect_C, BtlGuiDraw) == 0x000368, "Member 'ABP_BtlGuiShiftSelect_C::BtlGuiDraw' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiShiftSelect_C, MainCharacter) == 0x000370, "Member 'ABP_BtlGuiShiftSelect_C::MainCharacter' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiShiftSelect_C, PlayerList) == 0x000378, "Member 'ABP_BtlGuiShiftSelect_C::PlayerList' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiShiftSelect_C, TargetIndex) == 0x000388, "Member 'ABP_BtlGuiShiftSelect_C::TargetIndex' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiShiftSelect_C, ListMoveAhead) == 0x00038C, "Member 'ABP_BtlGuiShiftSelect_C::ListMoveAhead' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiShiftSelect_C, IsCreateTargetList) == 0x00038D, "Member 'ABP_BtlGuiShiftSelect_C::IsCreateTargetList' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiShiftSelect_C, TargetListTemp) == 0x000390, "Member 'ABP_BtlGuiShiftSelect_C::TargetListTemp' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiShiftSelect_C, TargetTemp) == 0x0003A0, "Member 'ABP_BtlGuiShiftSelect_C::TargetTemp' has a wrong offset!");

}
