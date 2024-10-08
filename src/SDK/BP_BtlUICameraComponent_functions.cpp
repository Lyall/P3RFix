#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlUICameraComponent

#include "Basic.hpp"

#include "BP_BtlUICameraComponent_classes.hpp"
#include "BP_BtlUICameraComponent_parameters.hpp"


namespace SDK
{

// Function BP_BtlUICameraComponent.BP_BtlUICameraComponent_C.ExecuteUbergraph_BP_BtlUICameraComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlUICameraComponent_C::ExecuteUbergraph_BP_BtlUICameraComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlUICameraComponent_C", "ExecuteUbergraph_BP_BtlUICameraComponent");

	Params::BP_BtlUICameraComponent_C_ExecuteUbergraph_BP_BtlUICameraComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlUICameraComponent.BP_BtlUICameraComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlUICameraComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlUICameraComponent_C", "ReceiveEndPlay");

	Params::BP_BtlUICameraComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlUICameraComponent.BP_BtlUICameraComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_BtlUICameraComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlUICameraComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlUICameraComponent.BP_BtlUICameraComponent_C.UILook At Target
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBtlTargetsManagerComponent*      BtlTargetsManager_0                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBtlGuiState                            State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    BossBattle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          RotateExParam                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlUICameraComponent_C::UILook_At_Target(class UBtlTargetsManagerComponent* BtlTargetsManager_0, EBtlGuiState State, bool BossBattle, const struct FVector& RotateExParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlUICameraComponent_C", "UILook At Target");

	Params::BP_BtlUICameraComponent_C_UILook_At_Target Parms{};

	Parms.BtlTargetsManager_0 = BtlTargetsManager_0;
	Parms.State = State;
	Parms.BossBattle = BossBattle;
	Parms.RotateExParam = std::move(RotateExParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlUICameraComponent.BP_BtlUICameraComponent_C.UpdateCraneParam
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Lerp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABtlActor*                        Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BtlUICameraRoot_C*            CameraRoot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EBtlGuiState                            State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    BossBattle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlUICameraComponent_C::UpdateCraneParam(float Lerp, class ABtlActor* Action, class ABP_BtlUICameraRoot_C* CameraRoot, EBtlGuiState State, bool BossBattle, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlUICameraComponent_C", "UpdateCraneParam");

	Params::BP_BtlUICameraComponent_C_UpdateCraneParam Parms{};

	Parms.Lerp = Lerp;
	Parms.Action = Action;
	Parms.CameraRoot = CameraRoot;
	Parms.State = State;
	Parms.BossBattle = BossBattle;
	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlUICameraComponent.BP_BtlUICameraComponent_C.MakeEnemyListCenterPos
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          EnemyListCenterPos                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlUICameraComponent_C::MakeEnemyListCenterPos(struct FVector* EnemyListCenterPos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlUICameraComponent_C", "MakeEnemyListCenterPos");

	Params::BP_BtlUICameraComponent_C_MakeEnemyListCenterPos Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (EnemyListCenterPos != nullptr)
		*EnemyListCenterPos = std::move(Parms.EnemyListCenterPos);
}


// Function BP_BtlUICameraComponent.BP_BtlUICameraComponent_C.MakeTargetListCenterPos
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          TargetListCenterPos                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlUICameraComponent_C::MakeTargetListCenterPos(struct FVector* TargetListCenterPos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlUICameraComponent_C", "MakeTargetListCenterPos");

	Params::BP_BtlUICameraComponent_C_MakeTargetListCenterPos Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TargetListCenterPos != nullptr)
		*TargetListCenterPos = std::move(Parms.TargetListCenterPos);
}


// Function BP_BtlUICameraComponent.BP_BtlUICameraComponent_C.Setup Look At Rot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlActor*                        MainCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBtlTargetsManagerComponent*      TargetManager                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    BossBattle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BtlUICameraComponent_C::Setup_Look_At_Rot(class ABtlActor* MainCharacter, class UBtlTargetsManagerComponent* TargetManager, bool BossBattle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlUICameraComponent_C", "Setup Look At Rot");

	Params::BP_BtlUICameraComponent_C_Setup_Look_At_Rot Parms{};

	Parms.MainCharacter = MainCharacter;
	Parms.TargetManager = TargetManager;
	Parms.BossBattle = BossBattle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlUICameraComponent.BP_BtlUICameraComponent_C.UpdateActorTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Lerp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABtlActor*                        Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BtlUICameraRoot_C*            CameraRoot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          RotateExParam                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlUICameraComponent_C::UpdateActorTransform(float Lerp, class ABtlActor* Action, class ABP_BtlUICameraRoot_C* CameraRoot, const struct FVector& RotateExParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlUICameraComponent_C", "UpdateActorTransform");

	Params::BP_BtlUICameraComponent_C_UpdateActorTransform Parms{};

	Parms.Lerp = Lerp;
	Parms.Action = Action;
	Parms.CameraRoot = CameraRoot;
	Parms.RotateExParam = std::move(RotateExParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlUICameraComponent.BP_BtlUICameraComponent_C.GetCommandCameraTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlActor*                        Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBtlTargetsManagerComponent*      TargetManager                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       Transform                                              (Parm, OutParm, IsPlainOldData, NoDestructor)

void UBP_BtlUICameraComponent_C::GetCommandCameraTransform(class ABtlActor* Action, class UBtlTargetsManagerComponent* TargetManager, struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlUICameraComponent_C", "GetCommandCameraTransform");

	Params::BP_BtlUICameraComponent_C_GetCommandCameraTransform Parms{};

	Parms.Action = Action;
	Parms.TargetManager = TargetManager;

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);
}


// Function BP_BtlUICameraComponent.BP_BtlUICameraComponent_C.SetEncountID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BtlUICameraComponent_C::SetEncountID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlUICameraComponent_C", "SetEncountID");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlUICameraComponent.BP_BtlUICameraComponent_C.GetCranePitch
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Vector1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Vector2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Pitch                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlUICameraComponent_C::GetCranePitch(const struct FVector& Vector1, const struct FVector& Vector2, float* Pitch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlUICameraComponent_C", "GetCranePitch");

	Params::BP_BtlUICameraComponent_C_GetCranePitch Parms{};

	Parms.Vector1 = std::move(Vector1);
	Parms.Vector2 = std::move(Vector2);

	UObject::ProcessEvent(Func, &Parms);

	if (Pitch != nullptr)
		*Pitch = Parms.Pitch;
}


// Function BP_BtlUICameraComponent.BP_BtlUICameraComponent_C.SetPitchYaw
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Yaw                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Pitch                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BtlUICameraRoot_C*            Root                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Lerp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlUICameraComponent_C::SetPitchYaw(float Yaw, float Pitch, class ABP_BtlUICameraRoot_C* Root, float Lerp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlUICameraComponent_C", "SetPitchYaw");

	Params::BP_BtlUICameraComponent_C_SetPitchYaw Parms{};

	Parms.Yaw = Yaw;
	Parms.Pitch = Pitch;
	Parms.Root = Root;
	Parms.Lerp = Lerp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlUICameraComponent.BP_BtlUICameraComponent_C.PlayUICommandCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlActor*                        Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlUICameraComponent_C::PlayUICommandCamera(class ABtlActor* Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlUICameraComponent_C", "PlayUICommandCamera");

	Params::BP_BtlUICameraComponent_C_PlayUICommandCamera Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}

}

