#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PersonaBase

#include "Basic.hpp"

#include "BP_PersonaBase_classes.hpp"
#include "BP_PersonaBase_parameters.hpp"


namespace SDK
{

// Function BP_PersonaBase.BP_PersonaBase_C.ExecuteUbergraph_BP_PersonaBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PersonaBase_C::ExecuteUbergraph_BP_PersonaBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PersonaBase_C", "ExecuteUbergraph_BP_PersonaBase");

	Params::BP_PersonaBase_C_ExecuteUbergraph_BP_PersonaBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PersonaBase.BP_PersonaBase_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PersonaBase_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PersonaBase_C", "ReceiveActorEndOverlap");

	Params::BP_PersonaBase_C_ReceiveActorEndOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PersonaBase.BP_PersonaBase_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PersonaBase_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PersonaBase_C", "ReceiveActorBeginOverlap");

	Params::BP_PersonaBase_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PersonaBase.BP_PersonaBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PersonaBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PersonaBase_C", "ReceiveTick");

	Params::BP_PersonaBase_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PersonaBase.BP_PersonaBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PersonaBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PersonaBase_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PersonaBase.BP_PersonaBase_C.CreateDMI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*                   MeshComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PersonaBase_C::CreateDMI(class UMeshComponent* MeshComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PersonaBase_C", "CreateDMI");

	Params::BP_PersonaBase_C_CreateDMI Parms{};

	Parms.MeshComponent = MeshComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PersonaBase.BP_PersonaBase_C.SetPointLightParameter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         MIDObjectReference                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PersonaBase_C::SetPointLightParameter(class UMaterialInstanceDynamic* MIDObjectReference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PersonaBase_C", "SetPointLightParameter");

	Params::BP_PersonaBase_C_SetPointLightParameter Parms{};

	Parms.MIDObjectReference = MIDObjectReference;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PersonaBase.BP_PersonaBase_C.SetDMIParameter_Tick
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PersonaBase_C::SetDMIParameter_Tick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PersonaBase_C", "SetDMIParameter_Tick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PersonaBase.BP_PersonaBase_C.SetScalarParameterValueEx
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ParameterName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ParameterValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PersonaBase_C::SetScalarParameterValueEx(class UMaterialInstanceDynamic* Material, class FName ParameterName, float ParameterValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PersonaBase_C", "SetScalarParameterValueEx");

	Params::BP_PersonaBase_C_SetScalarParameterValueEx Parms{};

	Parms.Material = Material;
	Parms.ParameterName = ParameterName;
	Parms.ParameterValue = ParameterValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PersonaBase.BP_PersonaBase_C.GetClosestPointLights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PersonaBase_C::GetClosestPointLights()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PersonaBase_C", "GetClosestPointLights");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PersonaBase.BP_PersonaBase_C.Set Niagara Offscreen Mode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PersonaBase_C::Set_Niagara_Offscreen_Mode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PersonaBase_C", "Set Niagara Offscreen Mode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PersonaBase.BP_PersonaBase_C.SetNiagaraOffscreenTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PersonaBase_C::SetNiagaraOffscreenTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PersonaBase_C", "SetNiagaraOffscreenTick");

	Params::BP_PersonaBase_C_SetNiagaraOffscreenTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}
