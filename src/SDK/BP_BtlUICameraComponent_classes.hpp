#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlUICameraComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Xrd777_structs.hpp"
#include "Xrd777_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BtlUICameraComponent.BP_BtlUICameraComponent_C
// 0x0068 (0x0130 - 0x00C8)
class UBP_BtlUICameraComponent_C final : public UAppActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_BtlCameraManagerComponent_C*        BtlCameraManager;                                  // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BtlUICameraRoot_C*                  UICameraRoot;                                      // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           UICamera;                                          // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBtlTargetsManagerComponent*            BtlTargetsManager;                                 // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotateLerpParam;                                   // 0x00F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCallSetCamera;                                   // 0x00F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CheckPlayer;                                       // 0x00F5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F6[0x2];                                       // 0x00F6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_BtlUICameraRoot_C*                  MathCameraRoot;                                    // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           MathCamera;                                        // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SwingCoefficient;                                  // 0x0108(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LerpTime;                                          // 0x010C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LerpSpeed;                                         // 0x0110(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_114[0x4];                                      // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            GuardCurve;                                        // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            StrategyCurve;                                     // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DefaultMoveToTop;                                  // 0x0128(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_BtlUICameraComponent(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void UILook_At_Target(class UBtlTargetsManagerComponent* BtlTargetsManager_0, EBtlGuiState State, bool BossBattle, const struct FVector& RotateExParam);
	void UpdateCraneParam(float Lerp, class ABtlActor* Action, class ABP_BtlUICameraRoot_C* CameraRoot, EBtlGuiState State, bool BossBattle, float DeltaTime);
	void MakeEnemyListCenterPos(struct FVector* EnemyListCenterPos);
	void MakeTargetListCenterPos(struct FVector* TargetListCenterPos);
	void Setup_Look_At_Rot(class ABtlActor* MainCharacter, class UBtlTargetsManagerComponent* TargetManager, bool BossBattle);
	void UpdateActorTransform(float Lerp, class ABtlActor* Action, class ABP_BtlUICameraRoot_C* CameraRoot, const struct FVector& RotateExParam);
	void GetCommandCameraTransform(class ABtlActor* Action, class UBtlTargetsManagerComponent* TargetManager, struct FTransform* Transform);
	void SetEncountID();
	void GetCranePitch(const struct FVector& Vector1, const struct FVector& Vector2, float* Pitch);
	void SetPitchYaw(float Yaw, float Pitch, class ABP_BtlUICameraRoot_C* Root, float Lerp);
	void PlayUICommandCamera(class ABtlActor* Action);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BtlUICameraComponent_C">();
	}
	static class UBP_BtlUICameraComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BtlUICameraComponent_C>();
	}
};
static_assert(alignof(UBP_BtlUICameraComponent_C) == 0x000008, "Wrong alignment on UBP_BtlUICameraComponent_C");
static_assert(sizeof(UBP_BtlUICameraComponent_C) == 0x000130, "Wrong size on UBP_BtlUICameraComponent_C");
static_assert(offsetof(UBP_BtlUICameraComponent_C, UberGraphFrame) == 0x0000C8, "Member 'UBP_BtlUICameraComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_BtlUICameraComponent_C, BtlCameraManager) == 0x0000D0, "Member 'UBP_BtlUICameraComponent_C::BtlCameraManager' has a wrong offset!");
static_assert(offsetof(UBP_BtlUICameraComponent_C, UICameraRoot) == 0x0000D8, "Member 'UBP_BtlUICameraComponent_C::UICameraRoot' has a wrong offset!");
static_assert(offsetof(UBP_BtlUICameraComponent_C, UICamera) == 0x0000E0, "Member 'UBP_BtlUICameraComponent_C::UICamera' has a wrong offset!");
static_assert(offsetof(UBP_BtlUICameraComponent_C, BtlTargetsManager) == 0x0000E8, "Member 'UBP_BtlUICameraComponent_C::BtlTargetsManager' has a wrong offset!");
static_assert(offsetof(UBP_BtlUICameraComponent_C, RotateLerpParam) == 0x0000F0, "Member 'UBP_BtlUICameraComponent_C::RotateLerpParam' has a wrong offset!");
static_assert(offsetof(UBP_BtlUICameraComponent_C, IsCallSetCamera) == 0x0000F4, "Member 'UBP_BtlUICameraComponent_C::IsCallSetCamera' has a wrong offset!");
static_assert(offsetof(UBP_BtlUICameraComponent_C, CheckPlayer) == 0x0000F5, "Member 'UBP_BtlUICameraComponent_C::CheckPlayer' has a wrong offset!");
static_assert(offsetof(UBP_BtlUICameraComponent_C, MathCameraRoot) == 0x0000F8, "Member 'UBP_BtlUICameraComponent_C::MathCameraRoot' has a wrong offset!");
static_assert(offsetof(UBP_BtlUICameraComponent_C, MathCamera) == 0x000100, "Member 'UBP_BtlUICameraComponent_C::MathCamera' has a wrong offset!");
static_assert(offsetof(UBP_BtlUICameraComponent_C, SwingCoefficient) == 0x000108, "Member 'UBP_BtlUICameraComponent_C::SwingCoefficient' has a wrong offset!");
static_assert(offsetof(UBP_BtlUICameraComponent_C, LerpTime) == 0x00010C, "Member 'UBP_BtlUICameraComponent_C::LerpTime' has a wrong offset!");
static_assert(offsetof(UBP_BtlUICameraComponent_C, LerpSpeed) == 0x000110, "Member 'UBP_BtlUICameraComponent_C::LerpSpeed' has a wrong offset!");
static_assert(offsetof(UBP_BtlUICameraComponent_C, GuardCurve) == 0x000118, "Member 'UBP_BtlUICameraComponent_C::GuardCurve' has a wrong offset!");
static_assert(offsetof(UBP_BtlUICameraComponent_C, StrategyCurve) == 0x000120, "Member 'UBP_BtlUICameraComponent_C::StrategyCurve' has a wrong offset!");
static_assert(offsetof(UBP_BtlUICameraComponent_C, DefaultMoveToTop) == 0x000128, "Member 'UBP_BtlUICameraComponent_C::DefaultMoveToTop' has a wrong offset!");

}
