#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlCameraCalc

#include "Basic.hpp"

#include "BP_BtlCameraCalc_classes.hpp"
#include "BP_BtlCameraCalc_parameters.hpp"


namespace SDK
{

// Function BP_BtlCameraCalc.BP_BtlCameraCalc_C.GetEnchanterCylinder
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UseCommonCylinder                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ExceptPersona                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          Bottom_Center                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Radius                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Height                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlCameraCalc_C::GetEnchanterCylinder(bool UseCommonCylinder, bool ExceptPersona, struct FVector* Bottom_Center, float* Radius, float* Height)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlCameraCalc_C", "GetEnchanterCylinder");

	Params::BP_BtlCameraCalc_C_GetEnchanterCylinder Parms{};

	Parms.UseCommonCylinder = UseCommonCylinder;
	Parms.ExceptPersona = ExceptPersona;

	UObject::ProcessEvent(Func, &Parms);

	if (Bottom_Center != nullptr)
		*Bottom_Center = std::move(Parms.Bottom_Center);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

	if (Height != nullptr)
		*Height = Parms.Height;
}


// Function BP_BtlCameraCalc.BP_BtlCameraCalc_C.GetTargetsCylinder
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UseCommonCylinder                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          Bottom_Center                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Radius                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Height                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlCameraCalc_C::GetTargetsCylinder(bool UseCommonCylinder, struct FVector* Bottom_Center, float* Radius, float* Height)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlCameraCalc_C", "GetTargetsCylinder");

	Params::BP_BtlCameraCalc_C_GetTargetsCylinder Parms{};

	Parms.UseCommonCylinder = UseCommonCylinder;

	UObject::ProcessEvent(Func, &Parms);

	if (Bottom_Center != nullptr)
		*Bottom_Center = std::move(Parms.Bottom_Center);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

	if (Height != nullptr)
		*Height = Parms.Height;
}


// Function BP_BtlCameraCalc.BP_BtlCameraCalc_C.CalcCylinderCamPos
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlCalcCameraPosParam           CalcParam                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFBtlCamCalcAddParam             AddParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlCameraCalc_C::CalcCylinderCamPos(const struct FBtlCalcCameraPosParam& CalcParam, const struct FFBtlCamCalcAddParam& AddParam, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlCameraCalc_C", "CalcCylinderCamPos");

	Params::BP_BtlCameraCalc_C_CalcCylinderCamPos Parms{};

	Parms.CalcParam = std::move(CalcParam);
	Parms.AddParam = std::move(AddParam);

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BP_BtlCameraCalc.BP_BtlCameraCalc_C.CalcCylinderLocation
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          BottomCenter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Radius                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Height                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CylinderRotate                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Degree                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RadiusRatio                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RadiusAdd                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RadiusAddHeightRatio                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HeightRatio                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HeightBlendToDefault                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HeightAddRadiusRatio                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HeightDefault                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlCameraCalc_C::CalcCylinderLocation(const struct FVector& BottomCenter, float Radius, float Height, float CylinderRotate, float Degree, float RadiusRatio, float RadiusAdd, float RadiusAddHeightRatio, float HeightRatio, float HeightBlendToDefault, float HeightAddRadiusRatio, float HeightDefault, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlCameraCalc_C", "CalcCylinderLocation");

	Params::BP_BtlCameraCalc_C_CalcCylinderLocation Parms{};

	Parms.BottomCenter = std::move(BottomCenter);
	Parms.Radius = Radius;
	Parms.Height = Height;
	Parms.CylinderRotate = CylinderRotate;
	Parms.Degree = Degree;
	Parms.RadiusRatio = RadiusRatio;
	Parms.RadiusAdd = RadiusAdd;
	Parms.RadiusAddHeightRatio = RadiusAddHeightRatio;
	Parms.HeightRatio = HeightRatio;
	Parms.HeightBlendToDefault = HeightBlendToDefault;
	Parms.HeightAddRadiusRatio = HeightAddRadiusRatio;
	Parms.HeightDefault = HeightDefault;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BP_BtlCameraCalc.BP_BtlCameraCalc_C.CalcCylinderRotation
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBtlCalcCameraCylinderType              CylinderType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBtlCalcCameraCylinderType              TargetType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlCameraCalc_C::CalcCylinderRotation(EBtlCalcCameraCylinderType CylinderType, EBtlCalcCameraCylinderType TargetType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlCameraCalc_C", "CalcCylinderRotation");

	Params::BP_BtlCameraCalc_C_CalcCylinderRotation Parms{};

	Parms.CylinderType = CylinderType;
	Parms.TargetType = TargetType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlCameraCalc.BP_BtlCameraCalc_C.GetEnchanterRotate
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Z__Yaw_                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlCameraCalc_C::GetEnchanterRotate(float* Z__Yaw_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlCameraCalc_C", "GetEnchanterRotate");

	Params::BP_BtlCameraCalc_C_GetEnchanterRotate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Z__Yaw_ != nullptr)
		*Z__Yaw_ = Parms.Z__Yaw_;
}


// Function BP_BtlCameraCalc.BP_BtlCameraCalc_C.GetAllCylinder
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UseCommonCylinder                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ExceptPersonaCylinder                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          Bottom_Center                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Radius                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Height                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlCameraCalc_C::GetAllCylinder(bool UseCommonCylinder, bool ExceptPersonaCylinder, struct FVector* Bottom_Center, float* Radius, float* Height)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlCameraCalc_C", "GetAllCylinder");

	Params::BP_BtlCameraCalc_C_GetAllCylinder Parms{};

	Parms.UseCommonCylinder = UseCommonCylinder;
	Parms.ExceptPersonaCylinder = ExceptPersonaCylinder;

	UObject::ProcessEvent(Func, &Parms);

	if (Bottom_Center != nullptr)
		*Bottom_Center = std::move(Parms.Bottom_Center);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

	if (Height != nullptr)
		*Height = Parms.Height;
}


// Function BP_BtlCameraCalc.BP_BtlCameraCalc_C.LookAtLine
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Alpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBtlCalcCameraPosParam           Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFBtlCamCalcAddParam             AddParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          LookAtLocation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlCameraCalc_C::LookAtLine(float Alpha, const struct FBtlCalcCameraPosParam& Param, const struct FFBtlCamCalcAddParam& AddParam, struct FVector* LookAtLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlCameraCalc_C", "LookAtLine");

	Params::BP_BtlCameraCalc_C_LookAtLine Parms{};

	Parms.Alpha = Alpha;
	Parms.Param = std::move(Param);
	Parms.AddParam = std::move(AddParam);

	UObject::ProcessEvent(Func, &Parms);

	if (LookAtLocation != nullptr)
		*LookAtLocation = std::move(Parms.LookAtLocation);
}


// Function BP_BtlCameraCalc.BP_BtlCameraCalc_C.MakeCameraTrans
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Lookat                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Roll                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Pan                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Pan_V                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SlideX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       Trans                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)

void UBP_BtlCameraCalc_C::MakeCameraTrans(const struct FVector& Location, const struct FVector& Lookat, float Roll, float Pan, float Pan_V, float SlideX, struct FTransform* Trans)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlCameraCalc_C", "MakeCameraTrans");

	Params::BP_BtlCameraCalc_C_MakeCameraTrans Parms{};

	Parms.Location = std::move(Location);
	Parms.Lookat = std::move(Lookat);
	Parms.Roll = Roll;
	Parms.Pan = Pan;
	Parms.Pan_V = Pan_V;
	Parms.SlideX = SlideX;

	UObject::ProcessEvent(Func, &Parms);

	if (Trans != nullptr)
		*Trans = std::move(Parms.Trans);
}


// Function BP_BtlCameraCalc.BP_BtlCameraCalc_C.SetStartCameraPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Lookat                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Roll                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Pan                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Pan_V                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SlideX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlCameraCalc_C::SetStartCameraPosition(const struct FVector& Location, const struct FVector& Lookat, float Roll, float Pan, float Pan_V, float SlideX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlCameraCalc_C", "SetStartCameraPosition");

	Params::BP_BtlCameraCalc_C_SetStartCameraPosition Parms{};

	Parms.Location = std::move(Location);
	Parms.Lookat = std::move(Lookat);
	Parms.Roll = Roll;
	Parms.Pan = Pan;
	Parms.Pan_V = Pan_V;
	Parms.SlideX = SlideX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlCameraCalc.BP_BtlCameraCalc_C.SetGoalCameraPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Lookat                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Roll                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Pan                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Pan_V                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SlideX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlCameraCalc_C::SetGoalCameraPosition(const struct FVector& Location, const struct FVector& Lookat, float Roll, float Pan, float Pan_V, float SlideX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlCameraCalc_C", "SetGoalCameraPosition");

	Params::BP_BtlCameraCalc_C_SetGoalCameraPosition Parms{};

	Parms.Location = std::move(Location);
	Parms.Lookat = std::move(Lookat);
	Parms.Roll = Roll;
	Parms.Pan = Pan;
	Parms.Pan_V = Pan_V;
	Parms.SlideX = SlideX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlCameraCalc.BP_BtlCameraCalc_C.GetCalculatedTrans
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       CameraStart_0                                          (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FTransform                       CameraGoal_0                                           (Parm, OutParm, IsPlainOldData, NoDestructor)

void UBP_BtlCameraCalc_C::GetCalculatedTrans(struct FTransform* CameraStart_0, struct FTransform* CameraGoal_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlCameraCalc_C", "GetCalculatedTrans");

	Params::BP_BtlCameraCalc_C_GetCalculatedTrans Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CameraStart_0 != nullptr)
		*CameraStart_0 = std::move(Parms.CameraStart_0);

	if (CameraGoal_0 != nullptr)
		*CameraGoal_0 = std::move(Parms.CameraGoal_0);
}


// Function BP_BtlCameraCalc.BP_BtlCameraCalc_C.GetLookAtRatio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlCalcCameraPosParam           Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   Alpha                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlCameraCalc_C::GetLookAtRatio(const struct FBtlCalcCameraPosParam& Param, float* Alpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlCameraCalc_C", "GetLookAtRatio");

	Params::BP_BtlCameraCalc_C_GetLookAtRatio Parms{};

	Parms.Param = std::move(Param);

	UObject::ProcessEvent(Func, &Parms);

	if (Alpha != nullptr)
		*Alpha = Parms.Alpha;
}


// Function BP_BtlCameraCalc.BP_BtlCameraCalc_C.CalcCamData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    UseLastCamData                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBtlCoreComponent*                BtlCore_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFBtlCamCalcAddParam             AddParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   AnimTime                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlCameraCalc_C::CalcCamData(class FName RowName, bool UseLastCamData, class UBtlCoreComponent* BtlCore_0, const struct FFBtlCamCalcAddParam& AddParam, float* AnimTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlCameraCalc_C", "CalcCamData");

	Params::BP_BtlCameraCalc_C_CalcCamData Parms{};

	Parms.RowName = RowName;
	Parms.UseLastCamData = UseLastCamData;
	Parms.BtlCore_0 = BtlCore_0;
	Parms.AddParam = std::move(AddParam);

	UObject::ProcessEvent(Func, &Parms);

	if (AnimTime != nullptr)
		*AnimTime = Parms.AnimTime;
}


// Function BP_BtlCameraCalc.BP_BtlCameraCalc_C.CalcLookAtPos
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_BtlCharacterBase_C*>   Chara                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EBtlCalcCameraLookAtType                Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HeightRatio                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    UseCommonCylinder                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlCameraCalc_C::CalcLookAtPos(TArray<class ABP_BtlCharacterBase_C*>& Chara, EBtlCalcCameraLookAtType Type, float HeightRatio, bool UseCommonCylinder, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlCameraCalc_C", "CalcLookAtPos");

	Params::BP_BtlCameraCalc_C_CalcLookAtPos Parms{};

	Parms.Chara = std::move(Chara);
	Parms.Type = Type;
	Parms.HeightRatio = HeightRatio;
	Parms.UseCommonCylinder = UseCommonCylinder;

	UObject::ProcessEvent(Func, &Parms);

	Chara = std::move(Parms.Chara);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BP_BtlCameraCalc.BP_BtlCameraCalc_C.CheckNeedToReflesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Need                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BtlCameraCalc_C::CheckNeedToReflesh(bool* Need)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlCameraCalc_C", "CheckNeedToReflesh");

	Params::BP_BtlCameraCalc_C_CheckNeedToReflesh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Need != nullptr)
		*Need = Parms.Need;
}


// Function BP_BtlCameraCalc.BP_BtlCameraCalc_C.GetTargetsRotate
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Z__Yaw_                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlCameraCalc_C::GetTargetsRotate(float* Z__Yaw_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlCameraCalc_C", "GetTargetsRotate");

	Params::BP_BtlCameraCalc_C_GetTargetsRotate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Z__Yaw_ != nullptr)
		*Z__Yaw_ = Parms.Z__Yaw_;
}


// Function BP_BtlCameraCalc.BP_BtlCameraCalc_C.GetCamAnimCurve
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveFloat*                      Curve                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlCameraCalc_C::GetCamAnimCurve(class UCurveFloat** Curve)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlCameraCalc_C", "GetCamAnimCurve");

	Params::BP_BtlCameraCalc_C_GetCamAnimCurve Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Curve != nullptr)
		*Curve = Parms.Curve;
}


// Function BP_BtlCameraCalc.BP_BtlCameraCalc_C.GetFieldCylinder
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Bottom_Center                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Radius                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Height                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlCameraCalc_C::GetFieldCylinder(struct FVector* Bottom_Center, float* Radius, float* Height)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlCameraCalc_C", "GetFieldCylinder");

	Params::BP_BtlCameraCalc_C_GetFieldCylinder Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Bottom_Center != nullptr)
		*Bottom_Center = std::move(Parms.Bottom_Center);

	if (Radius != nullptr)
		*Radius = Parms.Radius;

	if (Height != nullptr)
		*Height = Parms.Height;
}


// Function BP_BtlCameraCalc.BP_BtlCameraCalc_C.Calc Direct
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    DirectToOrigin                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          CylinderCenter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CylinderRotate                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    DirectToLookedAtChara                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Rotate                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlCameraCalc_C::Calc_Direct(bool DirectToOrigin, const struct FVector& CylinderCenter, float CylinderRotate, bool DirectToLookedAtChara, float* Rotate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlCameraCalc_C", "Calc Direct");

	Params::BP_BtlCameraCalc_C_Calc_Direct Parms{};

	Parms.DirectToOrigin = DirectToOrigin;
	Parms.CylinderCenter = std::move(CylinderCenter);
	Parms.CylinderRotate = CylinderRotate;
	Parms.DirectToLookedAtChara = DirectToLookedAtChara;

	UObject::ProcessEvent(Func, &Parms);

	if (Rotate != nullptr)
		*Rotate = Parms.Rotate;
}


// Function BP_BtlCameraCalc.BP_BtlCameraCalc_C.SearchBossCamera
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             SearchCamera                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBtlCoreComponent*                BtlCore_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Found                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BtlCameraCalc_C::SearchBossCamera(class FName SearchCamera, class UBtlCoreComponent* BtlCore_0, bool* Found)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlCameraCalc_C", "SearchBossCamera");

	Params::BP_BtlCameraCalc_C_SearchBossCamera Parms{};

	Parms.SearchCamera = SearchCamera;
	Parms.BtlCore_0 = BtlCore_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;
}

}
