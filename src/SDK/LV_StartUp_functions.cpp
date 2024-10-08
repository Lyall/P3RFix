#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LV_StartUp

#include "Basic.hpp"

#include "LV_StartUp_classes.hpp"
#include "LV_StartUp_parameters.hpp"


namespace SDK
{

// Function LV_StartUp.LV_StartUp_C.ExecuteUbergraph_LV_StartUp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALV_StartUp_C::ExecuteUbergraph_LV_StartUp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LV_StartUp_C", "ExecuteUbergraph_LV_StartUp");

	Params::LV_StartUp_C_ExecuteUbergraph_LV_StartUp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LV_StartUp.LV_StartUp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALV_StartUp_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LV_StartUp_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

