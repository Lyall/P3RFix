#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlGuiLifeBar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_BtlGuiBaseActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BtlGuiLifeBar.BP_BtlGuiLifeBar_C
// 0x00B8 (0x0408 - 0x0350)
class ABP_BtlGuiLifeBar_C final : public ABP_BtlGuiBaseActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_BtlGuiLifeBar_C;                 // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBtlGuiResources*                       BtlGuiResources;                                   // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBtlDataBaseComponent*                  BtlDataBase;                                       // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBtlGuiDrawComponent*                   BtlGuiDraw;                                        // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Shake0Timeline_GauseAnim_6326DA5C46066CDE7B7A1BBEB568230F; // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Shake0Timeline_RanbleRate_6326DA5C46066CDE7B7A1BBEB568230F; // 0x0374(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Shake0Timeline__Direction_6326DA5C46066CDE7B7A1BBEB568230F; // 0x0378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_379[0x7];                                      // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Shake0Timeline;                                    // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ShakeTimeline_RanbleRate_8F772C024BF6C6F2BB00B08EFCFC1B67; // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ShakeTimeline__Direction_8F772C024BF6C6F2BB00B08EFCFC1B67; // 0x038C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38D[0x3];                                      // 0x038D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ShakeTimeline;                                     // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              PosOffset;                                         // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBtlGuiDrawObjectRect*                  HPBarMask;                                         // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHPBar;                                           // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A9[0x7];                                      // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_BtlCharacterBase_C*                 Character;                                         // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              BarPosOffset;                                      // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BarMaxParam;                                       // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BarParam;                                          // 0x03C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBtlGuiDrawObjectRect*                  UnderHPBarMask;                                    // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BarStartParam;                                     // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D4[0x4];                                      // 0x03D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBtlGuiDrawObjectSprite*                UnderColor;                                        // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ShakePos;                                          // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Endure_Radio;                                      // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EC[0x4];                                      // 0x03EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBtlGuiDrawObjectSprite*                UnderBase;                                         // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBtlGuiDrawObjectSprite*                FrameBase;                                         // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Gauge0Anim;                                        // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Party_Panel_Visible;                               // 0x0404(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_BtlGuiLifeBar(int32 EntryPoint);
	void ParamUpdate(int32 Hp, int32 Sp, bool IsEndure, float EndureRadio);
	void GuiActorUpdate(float DeltaTime);
	void Start(class ABP_BtlCharacterBase_C* Character_0, int32 Hp, int32 Sp, bool IsHPBar_0, bool IsEndure, int32 DefaultParam, float EndureRadio, int32 DelayHP, int32 DelaySP, bool PartyPanelVisible);
	void StartShake();
	void Shake0Timeline__UpdateFunc();
	void Shake0Timeline__FinishedFunc();
	void ShakeTimeline__UpdateFunc();
	void ShakeTimeline__FinishedFunc();
	void UpdatePosition();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BtlGuiLifeBar_C">();
	}
	static class ABP_BtlGuiLifeBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BtlGuiLifeBar_C>();
	}
};
static_assert(alignof(ABP_BtlGuiLifeBar_C) == 0x000008, "Wrong alignment on ABP_BtlGuiLifeBar_C");
static_assert(sizeof(ABP_BtlGuiLifeBar_C) == 0x000408, "Wrong size on ABP_BtlGuiLifeBar_C");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, UberGraphFrame_BP_BtlGuiLifeBar_C) == 0x000350, "Member 'ABP_BtlGuiLifeBar_C::UberGraphFrame_BP_BtlGuiLifeBar_C' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, BtlGuiResources) == 0x000358, "Member 'ABP_BtlGuiLifeBar_C::BtlGuiResources' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, BtlDataBase) == 0x000360, "Member 'ABP_BtlGuiLifeBar_C::BtlDataBase' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, BtlGuiDraw) == 0x000368, "Member 'ABP_BtlGuiLifeBar_C::BtlGuiDraw' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, Shake0Timeline_GauseAnim_6326DA5C46066CDE7B7A1BBEB568230F) == 0x000370, "Member 'ABP_BtlGuiLifeBar_C::Shake0Timeline_GauseAnim_6326DA5C46066CDE7B7A1BBEB568230F' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, Shake0Timeline_RanbleRate_6326DA5C46066CDE7B7A1BBEB568230F) == 0x000374, "Member 'ABP_BtlGuiLifeBar_C::Shake0Timeline_RanbleRate_6326DA5C46066CDE7B7A1BBEB568230F' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, Shake0Timeline__Direction_6326DA5C46066CDE7B7A1BBEB568230F) == 0x000378, "Member 'ABP_BtlGuiLifeBar_C::Shake0Timeline__Direction_6326DA5C46066CDE7B7A1BBEB568230F' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, Shake0Timeline) == 0x000380, "Member 'ABP_BtlGuiLifeBar_C::Shake0Timeline' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, ShakeTimeline_RanbleRate_8F772C024BF6C6F2BB00B08EFCFC1B67) == 0x000388, "Member 'ABP_BtlGuiLifeBar_C::ShakeTimeline_RanbleRate_8F772C024BF6C6F2BB00B08EFCFC1B67' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, ShakeTimeline__Direction_8F772C024BF6C6F2BB00B08EFCFC1B67) == 0x00038C, "Member 'ABP_BtlGuiLifeBar_C::ShakeTimeline__Direction_8F772C024BF6C6F2BB00B08EFCFC1B67' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, ShakeTimeline) == 0x000390, "Member 'ABP_BtlGuiLifeBar_C::ShakeTimeline' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, PosOffset) == 0x000398, "Member 'ABP_BtlGuiLifeBar_C::PosOffset' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, HPBarMask) == 0x0003A0, "Member 'ABP_BtlGuiLifeBar_C::HPBarMask' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, IsHPBar) == 0x0003A8, "Member 'ABP_BtlGuiLifeBar_C::IsHPBar' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, Character) == 0x0003B0, "Member 'ABP_BtlGuiLifeBar_C::Character' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, BarPosOffset) == 0x0003B8, "Member 'ABP_BtlGuiLifeBar_C::BarPosOffset' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, BarMaxParam) == 0x0003C0, "Member 'ABP_BtlGuiLifeBar_C::BarMaxParam' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, BarParam) == 0x0003C4, "Member 'ABP_BtlGuiLifeBar_C::BarParam' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, UnderHPBarMask) == 0x0003C8, "Member 'ABP_BtlGuiLifeBar_C::UnderHPBarMask' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, BarStartParam) == 0x0003D0, "Member 'ABP_BtlGuiLifeBar_C::BarStartParam' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, UnderColor) == 0x0003D8, "Member 'ABP_BtlGuiLifeBar_C::UnderColor' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, ShakePos) == 0x0003E0, "Member 'ABP_BtlGuiLifeBar_C::ShakePos' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, Endure_Radio) == 0x0003E8, "Member 'ABP_BtlGuiLifeBar_C::Endure_Radio' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, UnderBase) == 0x0003F0, "Member 'ABP_BtlGuiLifeBar_C::UnderBase' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, FrameBase) == 0x0003F8, "Member 'ABP_BtlGuiLifeBar_C::FrameBase' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, Gauge0Anim) == 0x000400, "Member 'ABP_BtlGuiLifeBar_C::Gauge0Anim' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiLifeBar_C, Party_Panel_Visible) == 0x000404, "Member 'ABP_BtlGuiLifeBar_C::Party_Panel_Visible' has a wrong offset!");

}
