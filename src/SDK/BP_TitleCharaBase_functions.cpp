#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TitleCharaBase

#include "Basic.hpp"

#include "BP_TitleCharaBase_classes.hpp"
#include "BP_TitleCharaBase_parameters.hpp"


namespace SDK
{

// Function BP_TitleCharaBase.BP_TitleCharaBase_C.ExecuteUbergraph_BP_TitleCharaBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TitleCharaBase_C::ExecuteUbergraph_BP_TitleCharaBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleCharaBase_C", "ExecuteUbergraph_BP_TitleCharaBase");

	Params::BP_TitleCharaBase_C_ExecuteUbergraph_BP_TitleCharaBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TitleCharaBase.BP_TitleCharaBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TitleCharaBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TitleCharaBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

