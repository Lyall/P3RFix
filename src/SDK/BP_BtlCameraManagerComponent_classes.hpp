#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlCameraManagerComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Xrd777_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BtlCameraManagerComponent.BP_BtlCameraManagerComponent_C
// 0x0190 (0x0240 - 0x00B0)
class UBP_BtlCameraManagerComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ACineCameraActor*                       MainCamera;                                        // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BtlCharacterBase_C*                 MainCharacter;                                     // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 SequenceRoot;                                      // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                    PlayingSequenceActor;                              // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACineCameraActor*                       SystemCamera;                                      // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_BtlCharacterBase_C*>         ChracterList;                                      // 0x00E0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTransform                             CameraBefore;                                      // 0x00F0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             CameraAfter;                                       // 0x0120(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsCameraAnim;                                      // 0x0150(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_151[0x7];                                      // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CharaCameraRoot;                                   // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_BtlTargetManager_C*                 Targets_Manager;                                   // 0x0160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBtlCoreComponent*                      Btl_Core;                                          // 0x0168(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             SkillCameraStart;                                  // 0x0170(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             SkillCameraGoal;                                   // 0x01A0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HideOtherCharactersMode;                           // 0x01D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D1[0x7];                                      // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             CameraParam;                                       // 0x01D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowCameraCollisionMode;                           // 0x01E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E1[0x3];                                      // 0x01E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AnimTime;                                          // 0x01E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ElapsedAnimTime;                                   // 0x01E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EC[0x4];                                      // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_BtlCameraCalc_C*                    CameraCalc;                                        // 0x01F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HideOtherCharactersModeEnchanterOnly;              // 0x01F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F9[0x7];                                      // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_BtlUICameraComponent_C*             UICamera;                                          // 0x0200(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HideOtherCharactersWeakly;                         // 0x0208(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HideOtherCharactersRapidly;                        // 0x0209(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsRelocationRequest;                               // 0x020A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_20B[0x5];                                      // 0x020B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ABtlActor*                              RelocationMainCharacter;                           // 0x0210(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRelocationTurntableForceReset;                   // 0x0218(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Except_Command_Chara;                              // 0x0219(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21A[0x6];                                      // 0x021A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACineCameraActor*                       CurrentSequenceCamera;                             // 0x0220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SeqCamDefaultFOV;                                  // 0x0228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SysCamDefaultFOV;                                  // 0x022C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFadeinRequest;                                   // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsRestoreCharaCameraRootWhenCamChange;             // 0x0231(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_232[0x6];                                      // 0x0232(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             CameraParam_Astrea;                                // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BtlCameraManagerComponent(int32 EntryPoint);
	void Has_Finished_Sequence_Camera();
	void On_Play_Camera_Animation();
	void ReceiveTick(float DeltaSeconds);
	void On_Play_Skill_Camera(class UBtlTargetsManagerComponent* BtlTargets, class ABP_BtlSkillBase_C* SkillData, EBtlSkillCameraType CameraType);
	void GetMainCameraRoot(class USceneComponent** Scene_Component);
	void SetActCharacter(class ABP_BtlCharacterBase_C* Enchanter);
	void PlaySequenceCamera(class ALevelSequenceActor* Sequence_Actor, class ABtlActor* TransformBaseActor, bool Loop, class ACineCameraActor* UsingOtherMainCamera);
	void ClearSequenceCamera();
	void Play_Calc_Camera(class UBtlTargetsManagerComponent* Btl_Targets, class FName TypeName, bool NotInitialShowHidingCharacter, struct FTransform* Transform);
	void PlayCalculateSkillCamera(class UBtlTargetsManagerComponent* Btl_Targets, bool* NeedHidingOthersProc);
	void PlayEffectSkillCamera(class ABP_BtlSkillBase_C* SkillData, class ABtlActor* Enchanter);
	void PlayCommandCamera(const struct FTransform& CharacterTransform);
	void InitializeRootTransform();
	void InitializeCharaCameraRootTransform();
	void SetViewTargetToMainCamera(float Time);
	void LookAtTarget(float InterpTime);
	void Set_Camera_Transform(const struct FTransform& Trans);
	void PlayAttackCamera(class UBP_BtlTargetManager_C* Targets, bool EnemyCamera);
	void CalcAttackCamera(class UBP_BtlTargetManager_C* Targets_Manager_0, struct FTransform* Transform);
	void Hide_Obstacle_Character(bool HideWeak);
	void HideInBoxTrace(const struct FVector& Start, const struct FVector& End, float Size, bool HideStrong, bool HideRapid);
	void SetHideOthersMode(bool Enable, bool CheckEnchanterOnly, bool HideWeakly, bool HideRapidly);
	void Get_Hide_Other_Cylinder_Ratio(float* Ratio);
	void ToggleShowingCameraCollision();
	void AnimCamera(float Alpha);
	void AnimProcess(float DeltaTime);
	void Setup_Camera_Anim(float AnimTime_0);
	void PlayEnemyStandbyCam(bool DownContinuedCamera);
	void Set_View_Camera_(const struct FTransform& Trans);
	void Play_Enemy_Pre_Act_Cam(class UBtlTargetsManagerComponent* Btl_Targets);
	void RefleshAnim();
	void UseBackShotCamera(bool* Backshot);
	void UseBackShotWholeCamera(bool* Backshot);
	void CheckUseGroupCam(bool* Result, bool* UseWholeSkill);
	void Hide_Characters_for_Action(TArray<class ABtlActor*>& Characters, class ABtlActor* Enchanter, TArray<class ABtlActor*>& Targets, bool CompletlyHide, bool Rapid, bool WeaklyHide, bool ExceptBoss);
	void HideOtherEnemies(bool CompletlyHide, bool Rapid, bool WeaklyHide);
	void HideOtherEnemiesWithoutBoss(bool CompletlyHide, bool Rapid, bool WeaklyHide);
	void HideOtherPlayers(bool CompletlyHide, bool HideExcludesTargets);
	void HideInSphereTrace(const struct FVector& Location, float Size, bool HideStrong, bool HideIncludesTargets);
	void PlaySummonCamera(class UBP_BtlTargetManager_C* TargetMG);
	void PlayStandbyCamera();
	void PlayAlloutDamageCamera(class UBP_BtlTargetManager_C* Targets);
	void PlayHoldupCamera(class UBP_BtlTargetManager_C* Targets);
	void CheckUseAllTargetsCam(bool* UseAllTargetsSkill);
	void PlayItemUsingCamera(class UBtlTargetsManagerComponent* Btl_Targets);
	void PlayEnemyEscapeCam();
	void StopCameraAnimation();
	void PlayPlayerSelectCamera();
	void PlayPlayerAllSelectCamera();
	void Show_Hidden_Character();
	void GetCharaCameraRoot(class AActor** CharaCameraRoot_0);
	void CheckBackshotDisableTargets(bool* Disable);
	void HideOthersInPerformanceLine(class UBP_BtlTargetManager_C* TargetManager, bool HideStrong, bool HideRapid);
	void CheckAttackShortRange(class UBtlTargetsManagerComponent* TargetManager, bool* ShortRange);
	void Check_Target_Is_Enemy(class UBtlTargetsManagerComponent* Targets, bool* Enemy);
	void Check_Target_Is_Enemy_Boss(class UBtlTargetsManagerComponent* TargetsManager, bool* Enemy);
	void HideAllEnemies(bool CompletlyHide, bool Rapid, bool WeaklyHide);
	void HidePlayerInCameraEnchanterCircle(const struct FTransform& CameraTrans, class UBtlTargetsManagerComponent* BtlTargets);
	void HideAllPlayers();
	void HidingProcess();
	void PlayPlayerWholeCamera();
	void PlayPlayerEscapeCamera();
	void PlayAttackCharaCamera(class UBP_BtlTargetManager_C* Target, int32 Cut);
	void ProcWithCamChange();
	void RequestRelocationWhenCamChange(class UBtlCoreComponent* BtlCore, class ABtlActor* MainCharacter_0, bool TurntableForceReset);
	void ResetRelocationRequest();
	void SaveDefaultParam();
	void RestoreToDefaultParam();
	void SyncEventCamToSystemCam();
	void PlayAnalyzeCamera(class UBP_BtlTargetManager_C* Targets, bool InitialCamera, bool PlayFromLeft);
	void Coordinate_Backshot_Persona_Hiding_();
	void ClearHidingMode();
	void PlaySequenceCameraWithBaseTrans(class ALevelSequenceActor* Sequence_Actor, const struct FTransform& Playing_Transform, bool Loop, class ACineCameraActor* UsingOtherMainCamera);
	void HideEnemiesWithoutEnchanter(bool CompletlyHide, bool Rapid, bool WeaklyHide);
	void CallEnemiesFinalizeSummonFadeinProc();
	void ProcFadein();
	void RequestFadeinWhenCamChange();
	void GetCriticalAttackUpshotCamera(class ACineCameraActor** BCD_Camera);
	void ResetCalcCamera();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BtlCameraManagerComponent_C">();
	}
	static class UBP_BtlCameraManagerComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BtlCameraManagerComponent_C>();
	}
};
static_assert(alignof(UBP_BtlCameraManagerComponent_C) == 0x000010, "Wrong alignment on UBP_BtlCameraManagerComponent_C");
static_assert(sizeof(UBP_BtlCameraManagerComponent_C) == 0x000240, "Wrong size on UBP_BtlCameraManagerComponent_C");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, UberGraphFrame) == 0x0000B0, "Member 'UBP_BtlCameraManagerComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, MainCamera) == 0x0000B8, "Member 'UBP_BtlCameraManagerComponent_C::MainCamera' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, MainCharacter) == 0x0000C0, "Member 'UBP_BtlCameraManagerComponent_C::MainCharacter' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, SequenceRoot) == 0x0000C8, "Member 'UBP_BtlCameraManagerComponent_C::SequenceRoot' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, PlayingSequenceActor) == 0x0000D0, "Member 'UBP_BtlCameraManagerComponent_C::PlayingSequenceActor' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, SystemCamera) == 0x0000D8, "Member 'UBP_BtlCameraManagerComponent_C::SystemCamera' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, ChracterList) == 0x0000E0, "Member 'UBP_BtlCameraManagerComponent_C::ChracterList' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, CameraBefore) == 0x0000F0, "Member 'UBP_BtlCameraManagerComponent_C::CameraBefore' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, CameraAfter) == 0x000120, "Member 'UBP_BtlCameraManagerComponent_C::CameraAfter' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, IsCameraAnim) == 0x000150, "Member 'UBP_BtlCameraManagerComponent_C::IsCameraAnim' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, CharaCameraRoot) == 0x000158, "Member 'UBP_BtlCameraManagerComponent_C::CharaCameraRoot' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, Targets_Manager) == 0x000160, "Member 'UBP_BtlCameraManagerComponent_C::Targets_Manager' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, Btl_Core) == 0x000168, "Member 'UBP_BtlCameraManagerComponent_C::Btl_Core' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, SkillCameraStart) == 0x000170, "Member 'UBP_BtlCameraManagerComponent_C::SkillCameraStart' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, SkillCameraGoal) == 0x0001A0, "Member 'UBP_BtlCameraManagerComponent_C::SkillCameraGoal' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, HideOtherCharactersMode) == 0x0001D0, "Member 'UBP_BtlCameraManagerComponent_C::HideOtherCharactersMode' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, CameraParam) == 0x0001D8, "Member 'UBP_BtlCameraManagerComponent_C::CameraParam' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, ShowCameraCollisionMode) == 0x0001E0, "Member 'UBP_BtlCameraManagerComponent_C::ShowCameraCollisionMode' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, AnimTime) == 0x0001E4, "Member 'UBP_BtlCameraManagerComponent_C::AnimTime' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, ElapsedAnimTime) == 0x0001E8, "Member 'UBP_BtlCameraManagerComponent_C::ElapsedAnimTime' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, CameraCalc) == 0x0001F0, "Member 'UBP_BtlCameraManagerComponent_C::CameraCalc' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, HideOtherCharactersModeEnchanterOnly) == 0x0001F8, "Member 'UBP_BtlCameraManagerComponent_C::HideOtherCharactersModeEnchanterOnly' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, UICamera) == 0x000200, "Member 'UBP_BtlCameraManagerComponent_C::UICamera' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, HideOtherCharactersWeakly) == 0x000208, "Member 'UBP_BtlCameraManagerComponent_C::HideOtherCharactersWeakly' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, HideOtherCharactersRapidly) == 0x000209, "Member 'UBP_BtlCameraManagerComponent_C::HideOtherCharactersRapidly' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, IsRelocationRequest) == 0x00020A, "Member 'UBP_BtlCameraManagerComponent_C::IsRelocationRequest' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, RelocationMainCharacter) == 0x000210, "Member 'UBP_BtlCameraManagerComponent_C::RelocationMainCharacter' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, IsRelocationTurntableForceReset) == 0x000218, "Member 'UBP_BtlCameraManagerComponent_C::IsRelocationTurntableForceReset' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, Except_Command_Chara) == 0x000219, "Member 'UBP_BtlCameraManagerComponent_C::Except_Command_Chara' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, CurrentSequenceCamera) == 0x000220, "Member 'UBP_BtlCameraManagerComponent_C::CurrentSequenceCamera' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, SeqCamDefaultFOV) == 0x000228, "Member 'UBP_BtlCameraManagerComponent_C::SeqCamDefaultFOV' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, SysCamDefaultFOV) == 0x00022C, "Member 'UBP_BtlCameraManagerComponent_C::SysCamDefaultFOV' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, IsFadeinRequest) == 0x000230, "Member 'UBP_BtlCameraManagerComponent_C::IsFadeinRequest' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, IsRestoreCharaCameraRootWhenCamChange) == 0x000231, "Member 'UBP_BtlCameraManagerComponent_C::IsRestoreCharaCameraRootWhenCamChange' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraManagerComponent_C, CameraParam_Astrea) == 0x000238, "Member 'UBP_BtlCameraManagerComponent_C::CameraParam_Astrea' has a wrong offset!");

}
