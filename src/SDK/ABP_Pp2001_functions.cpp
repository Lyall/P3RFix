#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Pp2001

#include "Basic.hpp"

#include "ABP_Pp2001_classes.hpp"
#include "ABP_Pp2001_parameters.hpp"


namespace SDK
{

// Function ABP_Pp2001.ABP_Pp2001_C.ExecuteUbergraph_ABP_Pp2001
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Pp2001_C::ExecuteUbergraph_ABP_Pp2001(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Pp2001_C", "ExecuteUbergraph_ABP_Pp2001");

	Params::ABP_Pp2001_C_ExecuteUbergraph_ABP_Pp2001 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Pp2001.ABP_Pp2001_C.RootYawEvent_����_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   RootYaw                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Pp2001_C::RootYawEvent______0(float RootYaw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Pp2001_C", "RootYawEvent_����_0");

	Params::ABP_Pp2001_C_RootYawEvent______0 Parms{};

	Parms.RootYaw = RootYaw;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Pp2001.ABP_Pp2001_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UABP_Pp2001_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Pp2001_C", "BlueprintBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_Pp2001.ABP_Pp2001_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Pp2001_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Pp2001_C", "BlueprintUpdateAnimation");

	Params::ABP_Pp2001_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_Pp2001.ABP_Pp2001_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_Pp2001_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Pp2001_C", "AnimGraph");

	Params::ABP_Pp2001_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

