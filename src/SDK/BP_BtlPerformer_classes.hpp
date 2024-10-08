#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlPerformer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Xrd777_structs.hpp"
#include "Xrd777_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BtlPerformer.BP_BtlPerformer_C
// 0x0038 (0x02B0 - 0x0278)
class ABP_BtlPerformer_C final : public AAppActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Cylinder;                                          // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_BtlCharacterBase_C*                 Performer;                                         // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BtlEventAssistant_C*                Event_Assistant;                                   // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BindTransform;                                     // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A9[0x3];                                      // 0x02A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TimeDilation;                                      // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BtlPerformer(int32 EntryPoint);
	void BCD_Elizabeth_Animation(EBtlAnimationType AnimId, bool NotPlayFaceAnim);
	void BCD_Elizabeth_Animation_With_Blend(EBtlAnimationType Anim_ID, float Blend, bool NotPlayFaceAnim);
	void BCD_Restore_All_Chara_Point_Lights();
	void BCD_Collect_All_Chara_Point_Lights();
	void BCD_Disable_Face_Anim_Update_With_Body(bool Disable);
	void BCD_Assign_Attach_Point_(class FName Socket_Name);
	void BCD_Chara_Face_Anim(EAppCharFaceAnimID Type, float BlendIn, float BlendOut, bool ForceNoBlink);
	void BCD_Chara_Scene_Animation_Blend(EBtlSceneAnimationType Type, float BlendTime, bool IgnoreElizabeth, bool WithForceUpdate);
	void BCD_Set_HomePosition();
	void BCD_Chara_Animation_With_Next(EBtlAnimationType Anim_ID, EBtlAnimationType Anim_ID_Next);
	void BCD_Chara_Weapon_Anim(class UAnimSequenceBase* Anim_Sequence);
	void BCD_Chara_Gun_Visible(bool Visible);
	void BCD_Chara_Weapon_Visible(bool Visible);
	void BCD_Chara_Animation_With_Blend(EBtlAnimationType Anim_ID, float Blend, bool NotPlayFaceAnim);
	void BCD_Chara_Set_Visible(bool Visible, bool ExceptPersona, bool KeepAnimation);
	void BCD_Bind_To_Mannequin(bool Bind);
	void BCD_Chara_Set_Pos(const struct FTransform& Trans);
	void BCD_Chara_Scene_Animation(EBtlSceneAnimationType AnimId, EBtlSceneAnimationType AnimID_Next, bool IgnoreElizabeth);
	void BCD_Chara_Animation(EBtlAnimationType AnimId, bool NotPlayFaceAnim);
	void ReceiveTick(float DeltaSeconds);
	void BCD_Camera_cylinder(float Interp_Time, float Radius, float Height_Ratio, float Rotate_Degree, EBtlEventAreaType TargetType, class FName SocketName);
	void BCD_Affect_Recovery(float HpRatio);
	void BCD_Affect_All_Damage();
	void BCD_Affect_Divided_Damage(int32 DamagePercent);
	void BCD_NyxAvatar_Fadeout_Weapon_Effect(float AnimTime);
	void BCD_NyxAvatar_Fadeout_Feather_Effect(float AnimTime);
	void BCD_Jin_FadeOut_Drug_Loop_Effect(float AnimTime);
	void BCD_HangedMan_FadeOut_Floating_Effect(float AnimTime);
	void BCD_HangedMan_FadeIn_Floating_Effect(float AnimTime);
	void BCD_NyxCore_Request_Hero_Attack_Sequence();
	void BCD_Strength_Flower_Fadeout(float AnimTime);
	void BCD_Fortune_Fadeout(float AnimTime);
	void BCD_Fortune_Fadein(float AnimTime);
	void BCD_Fortune_Fadeout_Flower_Loop(float AnimTime);
	void BCD_Fortune_Fadein_Flower_Loop(float AnimTime);
	void BCD_NyxAvatar_Play_Feater_Anim(float AnimTime);
	void BCD_Hide_Hermit_Charge_Visible();
	void BCD_Play_Dead_Voice();
	void SetupPerformer(class ABP_BtlCharacterBase_C* Character);
	void GetCharacter(class ABP_BtlCharacterBase_C** Character);
	void SetCharacter(class ABP_BtlCharacterBase_C* Character);
	void GetPerformerTransform(struct FTransform* Transform);
	void FinalizePerformer();
	void CalcCylinderLocation(float Radius_Ratio, float Height_Ratio, float Rotate_Degree, bool UseCommonCylinder, struct FVector* Return_Value);
	void CalcLookAtRotate(const struct FTransform& Camera, const struct FTransform& Target, struct FRotator* Rotator);
	void SyncLocation();
	void GetSocketTransform(class FName SocketName, const struct FTransform& OwnerTransform, bool UseCommonCylinder, struct FTransform* Output);
	void GetCylinderHight(float Rato, bool UseCommonCylinder, struct FTransform* Output);
	void Clear();
	void UpdateEachTick(float DeltaTime);
	void IsEnemyTeammates(bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BtlPerformer_C">();
	}
	static class ABP_BtlPerformer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BtlPerformer_C>();
	}
};
static_assert(alignof(ABP_BtlPerformer_C) == 0x000008, "Wrong alignment on ABP_BtlPerformer_C");
static_assert(sizeof(ABP_BtlPerformer_C) == 0x0002B0, "Wrong size on ABP_BtlPerformer_C");
static_assert(offsetof(ABP_BtlPerformer_C, UberGraphFrame) == 0x000278, "Member 'ABP_BtlPerformer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BtlPerformer_C, Cylinder) == 0x000280, "Member 'ABP_BtlPerformer_C::Cylinder' has a wrong offset!");
static_assert(offsetof(ABP_BtlPerformer_C, Arrow) == 0x000288, "Member 'ABP_BtlPerformer_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_BtlPerformer_C, DefaultSceneRoot) == 0x000290, "Member 'ABP_BtlPerformer_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_BtlPerformer_C, Performer) == 0x000298, "Member 'ABP_BtlPerformer_C::Performer' has a wrong offset!");
static_assert(offsetof(ABP_BtlPerformer_C, Event_Assistant) == 0x0002A0, "Member 'ABP_BtlPerformer_C::Event_Assistant' has a wrong offset!");
static_assert(offsetof(ABP_BtlPerformer_C, BindTransform) == 0x0002A8, "Member 'ABP_BtlPerformer_C::BindTransform' has a wrong offset!");
static_assert(offsetof(ABP_BtlPerformer_C, TimeDilation) == 0x0002AC, "Member 'ABP_BtlPerformer_C::TimeDilation' has a wrong offset!");

}

