#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AppCharBag_0001_099

#include "Basic.hpp"

#include "BP_AppCharBag_0001_099_classes.hpp"
#include "BP_AppCharBag_0001_099_parameters.hpp"


namespace SDK
{

// Function BP_AppCharBag_0001_099.BP_AppCharBag_0001_099_C.ExecuteUbergraph_BP_AppCharBag_0001_099
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AppCharBag_0001_099_C::ExecuteUbergraph_BP_AppCharBag_0001_099(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AppCharBag_0001_099_C", "ExecuteUbergraph_BP_AppCharBag_0001_099");

	Params::BP_AppCharBag_0001_099_C_ExecuteUbergraph_BP_AppCharBag_0001_099 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AppCharBag_0001_099.BP_AppCharBag_0001_099_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AppCharBag_0001_099_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AppCharBag_0001_099_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
