#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_BtlUIColorHuman

#include "Basic.hpp"

#include "ABP_BtlUIColorHuman_classes.hpp"
#include "ABP_BtlUIColorHuman_parameters.hpp"


namespace SDK
{

// Function ABP_BtlUIColorHuman.ABP_BtlUIColorHuman_C.ExecuteUbergraph_ABP_BtlUIColorHuman
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_BtlUIColorHuman_C::ExecuteUbergraph_ABP_BtlUIColorHuman(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BtlUIColorHuman_C", "ExecuteUbergraph_ABP_BtlUIColorHuman");

	Params::ABP_BtlUIColorHuman_C_ExecuteUbergraph_ABP_BtlUIColorHuman Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_BtlUIColorHuman.ABP_BtlUIColorHuman_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_BtlUIColorHuman_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BtlUIColorHuman_C", "BlueprintUpdateAnimation");

	Params::ABP_BtlUIColorHuman_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_BtlUIColorHuman.ABP_BtlUIColorHuman_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_BtlUIColorHuman_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_BtlUIColorHuman_C", "AnimGraph");

	Params::ABP_BtlUIColorHuman_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}
