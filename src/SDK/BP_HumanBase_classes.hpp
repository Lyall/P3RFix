#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HumanBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MovementSettings_State_structs.hpp"
#include "ALS_Stance_structs.hpp"
#include "ALS_Gait_structs.hpp"
#include "ALS_MovementState_structs.hpp"
#include "ALS_MovementAction_structs.hpp"
#include "ALS_ViewMode_structs.hpp"
#include "ALS_RotationMode_structs.hpp"
#include "ALS_OverlayState_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MovementSettings_structs.hpp"
#include "Mantle_Params_structs.hpp"
#include "ALS_ComponentAndTransform_structs.hpp"
#include "Mantle_TraceSettings_structs.hpp"
#include "BP_CharacterBase_classes.hpp"
#include "MantleType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HumanBase.BP_HumanBase_C
// 0x0300 (0x0910 - 0x0610)
#pragma pack(push, 0x1)
class alignas(0x10) ABP_HumanBase_C : public ABP_CharacterBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_HumanBase_C;                     // 0x0610(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 FaceMesh;                                          // 0x0618(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 HairMesh;                                          // 0x0620(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CostumeMesh;                                       // 0x0628(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         MantleTimeline_BlendIn_A9C55A224C848693D0EF239AEA6C7A41; // 0x0630(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            MantleTimeline__Direction_A9C55A224C848693D0EF239AEA6C7A41; // 0x0634(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_635[0x3];                                      // 0x0635(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     MantleTimeline;                                    // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_MovementState                            MovementState;                                     // 0x0640(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_MovementState                            PrevMovementState;                                 // 0x0641(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_RotationMode                             DesiredRotationMode;                               // 0x0642(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_MovementAction                           MovementAction;                                    // 0x0643(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_RotationMode                             RotationMode;                                      // 0x0644(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_Gait                                     DesiredGait;                                       // 0x0645(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_Gait                                     Gait;                                              // 0x0646(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_Stance                                   Stance;                                            // 0x0647(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_ViewMode                                 ViewMode;                                          // 0x0648(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_649[0x3];                                      // 0x0649(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                PreviousVelocity;                                  // 0x064C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Acceleration;                                      // 0x0658(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMoving;                                          // 0x0664(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HasMovementInput;                                  // 0x0665(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_666[0x2];                                      // 0x0666(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               LastVelocityRotation;                              // 0x0668(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               LastMovementInputRotation;                         // 0x0674(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Speed;                                             // 0x0680(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MovementInputAmount;                               // 0x0684(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PreviousAimYaw;                                    // 0x0688(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               TargetRotation;                                    // 0x068C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               InAirRotation;                                     // 0x0698(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         YawOffset;                                         // 0x06A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    MovementModel;                                     // 0x06A8(0x0010)(Edit, BlueprintVisible, NoDestructor)
	struct FMovementSettings_State                MovementData;                                      // 0x06B8(0x00C0)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMovementSettings                      CurrentMovementSettings;                           // 0x0778(0x0020)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMantle_Params                         MantleParams;                                      // 0x0798(0x0028)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FALS_ComponentAndTransform             MantleLedgeLS;                                     // 0x07C0(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FTransform                             MantleTarget;                                      // 0x0800(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             MantleActualStartOffset;                           // 0x0830(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             MantleAnimatedStartOffset;                         // 0x0860(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMantle_TraceSettings                  GroundedTraceSettings;                             // 0x0890(0x0014)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMantle_TraceSettings                  AutomaticTraceSettings;                            // 0x08A4(0x0014)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMantle_TraceSettings                  FallingTraceSettings;                              // 0x08B8(0x0014)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_Stance                                   DesiredStance;                                     // 0x08CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8CD[0x3];                                      // 0x08CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DownRate;                                          // 0x08D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LookLeftRightRate;                                 // 0x08D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AimYawRate;                                        // 0x08D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_OverlayState                             OverlayState;                                      // 0x08DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8DD[0x3];                                      // 0x08DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TimesPressedStance;                                // 0x08E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BreakFall;                                         // 0x08E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SprintHeld;                                        // 0x08E5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RagdollOnGround;                                   // 0x08E6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RagdollFaceUp;                                     // 0x08E7(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                LastRagdollVelocity;                               // 0x08E8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ThirdPersonFOV;                                    // 0x08F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FirstPersonFOV;                                    // 0x08F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RightShoulder;                                     // 0x08FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8FD[0x3];                                      // 0x08FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          MainAnimInstance;                                  // 0x0900(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_HumanBase(int32 EntryPoint);
	void InpAxisEvt_PM_AxisLY_K2Node_InputAxisEvent_0(float AxisValue);
	void InpAxisEvt_PM_AxisLX_K2Node_InputAxisEvent_1(float AxisValue);
	void BPI_Set_OverlayState(EALS_OverlayState NewOverlayState);
	void BPI_Set_ViewMode(EALS_ViewMode NewViewMode);
	void BPI_Set_Gait(EALS_Gait NewGait);
	void BPI_Set_RotationMode(EALS_RotationMode NewRotationMode);
	void BPI_Set_MovementAction(EALS_MovementAction NewMovementAction);
	void BPI_Set_MovementState(EALS_MovementState NewMovementState);
	void Roll_Event();
	void Breakfall_Event();
	void OnLanded(const struct FHitResult& Hit);
	void OnJumped();
	void K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void MantleTimeline__UpdateFunc();
	void MantleTimeline__FinishedFunc();
	void UserConstructionScript();
	void PlayerMovementInput(bool IsForwardAxis);
	void SetEssentialValues();
	void CacheValues();
	void UpdateGroudedRotation();
	void UpdateInAirRotation();
	void SmoothCharacterRotation(const struct FRotator& Target, float TargetInterpSpeed_Const_, float ActorInterpSpeed_Smooth_);
	void SetMovementModel();
	void UpdateCharacterMovement();
	void UpdateDynamicMovementSettings(EALS_Gait AllowedGait);
	void GetTargetMovementSettings(struct FMovementSettings* MovementSettings);
	void GetAllowedGait(EALS_Gait* AllowedGait);
	void GetActualGait(EALS_Gait AllowedGait, EALS_Gait* ActualGait);
	void CanSprint(bool* CanSprint_0);
	void AddToCharacterRotation(const struct FRotator& DeltaRotation);
	void LimitRotation(float AimYawMin, float AimYawMax, float InterpSpeed);
	bool SetActorLocationAndRotation_UpdateTarget_(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	float CalculateGroundedRotationRate();
	void MantleCheck(const struct FMantle_TraceSettings& Trace_Settings, EDrawDebugTrace DebugType, bool* Vault);
	struct FVector GetPlayerMovementInput();
	void FixDiagonalGamepadValues(float Y_in, float X_in, float* Y_Out, float* X_Out);
	void DrawDebugShapes();
	void MantleStart(float MantleHeight, const struct FALS_ComponentAndTransform& MantleLedgeWS, EMantleType MantleType);
	void MantleEnd();
	void MantleUpdate(float BlendIn);
	void CapsuleHasRoomCheck(class UCapsuleComponent* Capsule, const struct FVector& TargetLocation, float HeightOffset, float RadiusOffset, EDrawDebugTrace DebugType, bool* HasRoom);
	struct FMantle_Asset GetMantleAsset(EMantleType MantleType);
	void RightVector(struct FVector* ForwardVector, struct FVector* RightVector_0);
	struct FVector GetCalpsuleBaseLocation(float ZOffset);
	struct FVector GetCapsuleLocationFromBase(const struct FVector& BaseLocation, float ZOffset);
	struct FVector CalculateAcceleration();
	void RagdollStart();
	void RagdollEnd();
	void RagdollUpdate();
	void SetActorLocationDuringRagdoll();
	EDrawDebugTrace GetTraceDebugType(EDrawDebugTrace ShowTraceType);
	float GetAnimCurveValue(class FName CurveName);
	void On_Begin_Play();
	void OnCharacterMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);
	void OnMovementStateChanged(EALS_MovementState NewMovementState);
	void OnMovementActionChanged(EALS_MovementAction NewMovementAction);
	void OnStanceChanged(EALS_Stance NewStance);
	void OnRotationModeChanged(EALS_RotationMode NewRotationMode);
	void OnGaitChanged(EALS_Gait NewActualGait);
	void OnViewModeChanged(EALS_ViewMode NewViewMode);
	void OnOverlayStateChanged(EALS_OverlayState NewOverlayState);
	bool CanUpdateMovingRotation();
	float GetMappedSpeed();
	class UAnimMontage* GetRollAnimation();
	class UAnimMontage* GetGetUpAnimation(bool RagdollFaceUp_0);
	void BPI_Get_EssentialValues(struct FVector* Velocity, struct FVector* Acceleration_0, struct FVector* MovementInput, bool* IsMoving_0, bool* HasMovementInput_0, float* Speed_0, float* MovementInputAmount_0, struct FRotator* AimingRotation, float* AimYawRate_0);
	void BPI_Get_CurrentStates(EMovementMode* PawnMovementMode, EALS_MovementState* MovementState_0, EALS_MovementState* PrevMovementState_0, EALS_MovementAction* MovementAction_0, EALS_RotationMode* RotationMode_0, EALS_Gait* ActualGait, EALS_Stance* ActualStance, EALS_ViewMode* ViewMode_0, EALS_OverlayState* OverlayState_0);
	void Get_AnimBP(class UAnimInstance** Return);
	void Get_ABP_CH_MeshBaseVariable(float* LookAtHorizontal, float* LookAtVertical, float* Out_Interp_LookatHair_H, float* Out_Interp_LookatHair_V, float* PhysicsAlpha_Out, float* PhysicsAlpha_Upperbody_Out, float* PhysicsAlpha_Lowerbody_Out, float* PhysicsAlpha_Hair_Out, float* PhysicsAlpha_Jacket_Out, float* PhysicsAlpha_Skirt_Out);
	void Get_Enable_FootIK(bool* Out_foot_r, bool* Out_foot_l);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HumanBase_C">();
	}
	static class ABP_HumanBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HumanBase_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_HumanBase_C) == 0x000010, "Wrong alignment on ABP_HumanBase_C");
static_assert(sizeof(ABP_HumanBase_C) == 0x000910, "Wrong size on ABP_HumanBase_C");
static_assert(offsetof(ABP_HumanBase_C, UberGraphFrame_BP_HumanBase_C) == 0x000610, "Member 'ABP_HumanBase_C::UberGraphFrame_BP_HumanBase_C' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, FaceMesh) == 0x000618, "Member 'ABP_HumanBase_C::FaceMesh' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, HairMesh) == 0x000620, "Member 'ABP_HumanBase_C::HairMesh' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, CostumeMesh) == 0x000628, "Member 'ABP_HumanBase_C::CostumeMesh' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, MantleTimeline_BlendIn_A9C55A224C848693D0EF239AEA6C7A41) == 0x000630, "Member 'ABP_HumanBase_C::MantleTimeline_BlendIn_A9C55A224C848693D0EF239AEA6C7A41' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, MantleTimeline__Direction_A9C55A224C848693D0EF239AEA6C7A41) == 0x000634, "Member 'ABP_HumanBase_C::MantleTimeline__Direction_A9C55A224C848693D0EF239AEA6C7A41' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, MantleTimeline) == 0x000638, "Member 'ABP_HumanBase_C::MantleTimeline' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, MovementState) == 0x000640, "Member 'ABP_HumanBase_C::MovementState' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, PrevMovementState) == 0x000641, "Member 'ABP_HumanBase_C::PrevMovementState' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, DesiredRotationMode) == 0x000642, "Member 'ABP_HumanBase_C::DesiredRotationMode' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, MovementAction) == 0x000643, "Member 'ABP_HumanBase_C::MovementAction' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, RotationMode) == 0x000644, "Member 'ABP_HumanBase_C::RotationMode' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, DesiredGait) == 0x000645, "Member 'ABP_HumanBase_C::DesiredGait' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, Gait) == 0x000646, "Member 'ABP_HumanBase_C::Gait' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, Stance) == 0x000647, "Member 'ABP_HumanBase_C::Stance' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, ViewMode) == 0x000648, "Member 'ABP_HumanBase_C::ViewMode' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, PreviousVelocity) == 0x00064C, "Member 'ABP_HumanBase_C::PreviousVelocity' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, Acceleration) == 0x000658, "Member 'ABP_HumanBase_C::Acceleration' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, IsMoving) == 0x000664, "Member 'ABP_HumanBase_C::IsMoving' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, HasMovementInput) == 0x000665, "Member 'ABP_HumanBase_C::HasMovementInput' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, LastVelocityRotation) == 0x000668, "Member 'ABP_HumanBase_C::LastVelocityRotation' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, LastMovementInputRotation) == 0x000674, "Member 'ABP_HumanBase_C::LastMovementInputRotation' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, Speed) == 0x000680, "Member 'ABP_HumanBase_C::Speed' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, MovementInputAmount) == 0x000684, "Member 'ABP_HumanBase_C::MovementInputAmount' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, PreviousAimYaw) == 0x000688, "Member 'ABP_HumanBase_C::PreviousAimYaw' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, TargetRotation) == 0x00068C, "Member 'ABP_HumanBase_C::TargetRotation' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, InAirRotation) == 0x000698, "Member 'ABP_HumanBase_C::InAirRotation' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, YawOffset) == 0x0006A4, "Member 'ABP_HumanBase_C::YawOffset' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, MovementModel) == 0x0006A8, "Member 'ABP_HumanBase_C::MovementModel' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, MovementData) == 0x0006B8, "Member 'ABP_HumanBase_C::MovementData' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, CurrentMovementSettings) == 0x000778, "Member 'ABP_HumanBase_C::CurrentMovementSettings' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, MantleParams) == 0x000798, "Member 'ABP_HumanBase_C::MantleParams' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, MantleLedgeLS) == 0x0007C0, "Member 'ABP_HumanBase_C::MantleLedgeLS' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, MantleTarget) == 0x000800, "Member 'ABP_HumanBase_C::MantleTarget' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, MantleActualStartOffset) == 0x000830, "Member 'ABP_HumanBase_C::MantleActualStartOffset' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, MantleAnimatedStartOffset) == 0x000860, "Member 'ABP_HumanBase_C::MantleAnimatedStartOffset' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, GroundedTraceSettings) == 0x000890, "Member 'ABP_HumanBase_C::GroundedTraceSettings' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, AutomaticTraceSettings) == 0x0008A4, "Member 'ABP_HumanBase_C::AutomaticTraceSettings' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, FallingTraceSettings) == 0x0008B8, "Member 'ABP_HumanBase_C::FallingTraceSettings' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, DesiredStance) == 0x0008CC, "Member 'ABP_HumanBase_C::DesiredStance' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, DownRate) == 0x0008D0, "Member 'ABP_HumanBase_C::DownRate' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, LookLeftRightRate) == 0x0008D4, "Member 'ABP_HumanBase_C::LookLeftRightRate' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, AimYawRate) == 0x0008D8, "Member 'ABP_HumanBase_C::AimYawRate' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, OverlayState) == 0x0008DC, "Member 'ABP_HumanBase_C::OverlayState' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, TimesPressedStance) == 0x0008E0, "Member 'ABP_HumanBase_C::TimesPressedStance' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, BreakFall) == 0x0008E4, "Member 'ABP_HumanBase_C::BreakFall' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, SprintHeld) == 0x0008E5, "Member 'ABP_HumanBase_C::SprintHeld' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, RagdollOnGround) == 0x0008E6, "Member 'ABP_HumanBase_C::RagdollOnGround' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, RagdollFaceUp) == 0x0008E7, "Member 'ABP_HumanBase_C::RagdollFaceUp' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, LastRagdollVelocity) == 0x0008E8, "Member 'ABP_HumanBase_C::LastRagdollVelocity' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, ThirdPersonFOV) == 0x0008F4, "Member 'ABP_HumanBase_C::ThirdPersonFOV' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, FirstPersonFOV) == 0x0008F8, "Member 'ABP_HumanBase_C::FirstPersonFOV' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, RightShoulder) == 0x0008FC, "Member 'ABP_HumanBase_C::RightShoulder' has a wrong offset!");
static_assert(offsetof(ABP_HumanBase_C, MainAnimInstance) == 0x000900, "Member 'ABP_HumanBase_C::MainAnimInstance' has a wrong offset!");

}
