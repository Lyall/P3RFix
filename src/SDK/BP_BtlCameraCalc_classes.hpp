#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlCameraCalc

#include "Basic.hpp"

#include "FBtlCamCalcAddparam_structs.hpp"
#include "Xrd777_structs.hpp"
#include "Xrd777_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BtlCameraCalc.BP_BtlCameraCalc_C
// 0x01D8 (0x02A0 - 0x00C8)
class UBP_BtlCameraCalc_C final : public UAppActorComponent
{
public:
	class UBP_BtlTargetManager_C*                 TargetManager;                                     // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             CommonCameraParam;                                 // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D8[0x8];                                       // 0x00D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CameraStart;                                       // 0x00E0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             CameraGoal;                                        // 0x0110(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         MinCylinderRadius;                                 // 0x0140(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_144[0xC];                                      // 0x0144(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBtlCalcCameraData                     LatestCamData;                                     // 0x0150(0x0120)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UDataTable*                             CriticalCameraParam;                               // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFBtlCamCalcAddParam                   LatestAddParam;                                    // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_279[0x7];                                      // 0x0279(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBtlCoreComponent*                      BtlCore;                                           // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             CommonCameraParam_Astrea;                          // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             CriticalCameraParam_Astrea;                        // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetEnchanterCylinder(bool UseCommonCylinder, bool ExceptPersona, struct FVector* Bottom_Center, float* Radius, float* Height);
	void GetTargetsCylinder(bool UseCommonCylinder, struct FVector* Bottom_Center, float* Radius, float* Height);
	void CalcCylinderCamPos(const struct FBtlCalcCameraPosParam& CalcParam, const struct FFBtlCamCalcAddParam& AddParam, struct FVector* Location);
	void CalcCylinderLocation(const struct FVector& BottomCenter, float Radius, float Height, float CylinderRotate, float Degree, float RadiusRatio, float RadiusAdd, float RadiusAddHeightRatio, float HeightRatio, float HeightBlendToDefault, float HeightAddRadiusRatio, float HeightDefault, struct FVector* Location);
	void CalcCylinderRotation(EBtlCalcCameraCylinderType CylinderType, EBtlCalcCameraCylinderType TargetType);
	void GetEnchanterRotate(float* Z__Yaw_);
	void GetAllCylinder(bool UseCommonCylinder, bool ExceptPersonaCylinder, struct FVector* Bottom_Center, float* Radius, float* Height);
	void LookAtLine(float Alpha, const struct FBtlCalcCameraPosParam& Param, const struct FFBtlCamCalcAddParam& AddParam, struct FVector* LookAtLocation);
	void MakeCameraTrans(const struct FVector& Location, const struct FVector& Lookat, float Roll, float Pan, float Pan_V, float SlideX, struct FTransform* Trans);
	void SetStartCameraPosition(const struct FVector& Location, const struct FVector& Lookat, float Roll, float Pan, float Pan_V, float SlideX);
	void SetGoalCameraPosition(const struct FVector& Location, const struct FVector& Lookat, float Roll, float Pan, float Pan_V, float SlideX);
	void GetCalculatedTrans(struct FTransform* CameraStart_0, struct FTransform* CameraGoal_0);
	void GetLookAtRatio(const struct FBtlCalcCameraPosParam& Param, float* Alpha);
	void CalcCamData(class FName RowName, bool UseLastCamData, class UBtlCoreComponent* BtlCore_0, const struct FFBtlCamCalcAddParam& AddParam, float* AnimTime);
	void CalcLookAtPos(TArray<class ABP_BtlCharacterBase_C*>& Chara, EBtlCalcCameraLookAtType Type, float HeightRatio, bool UseCommonCylinder, struct FVector* Location);
	void CheckNeedToReflesh(bool* Need);
	void GetTargetsRotate(float* Z__Yaw_);
	void GetCamAnimCurve(class UCurveFloat** Curve);
	void GetFieldCylinder(struct FVector* Bottom_Center, float* Radius, float* Height);
	void Calc_Direct(bool DirectToOrigin, const struct FVector& CylinderCenter, float CylinderRotate, bool DirectToLookedAtChara, float* Rotate);
	void SearchBossCamera(class FName SearchCamera, class UBtlCoreComponent* BtlCore_0, bool* Found);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BtlCameraCalc_C">();
	}
	static class UBP_BtlCameraCalc_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BtlCameraCalc_C>();
	}
};
static_assert(alignof(UBP_BtlCameraCalc_C) == 0x000010, "Wrong alignment on UBP_BtlCameraCalc_C");
static_assert(sizeof(UBP_BtlCameraCalc_C) == 0x0002A0, "Wrong size on UBP_BtlCameraCalc_C");
static_assert(offsetof(UBP_BtlCameraCalc_C, TargetManager) == 0x0000C8, "Member 'UBP_BtlCameraCalc_C::TargetManager' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraCalc_C, CommonCameraParam) == 0x0000D0, "Member 'UBP_BtlCameraCalc_C::CommonCameraParam' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraCalc_C, CameraStart) == 0x0000E0, "Member 'UBP_BtlCameraCalc_C::CameraStart' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraCalc_C, CameraGoal) == 0x000110, "Member 'UBP_BtlCameraCalc_C::CameraGoal' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraCalc_C, MinCylinderRadius) == 0x000140, "Member 'UBP_BtlCameraCalc_C::MinCylinderRadius' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraCalc_C, LatestCamData) == 0x000150, "Member 'UBP_BtlCameraCalc_C::LatestCamData' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraCalc_C, CriticalCameraParam) == 0x000270, "Member 'UBP_BtlCameraCalc_C::CriticalCameraParam' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraCalc_C, LatestAddParam) == 0x000278, "Member 'UBP_BtlCameraCalc_C::LatestAddParam' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraCalc_C, BtlCore) == 0x000280, "Member 'UBP_BtlCameraCalc_C::BtlCore' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraCalc_C, CommonCameraParam_Astrea) == 0x000288, "Member 'UBP_BtlCameraCalc_C::CommonCameraParam_Astrea' has a wrong offset!");
static_assert(offsetof(UBP_BtlCameraCalc_C, CriticalCameraParam_Astrea) == 0x000290, "Member 'UBP_BtlCameraCalc_C::CriticalCameraParam_Astrea' has a wrong offset!");

}
