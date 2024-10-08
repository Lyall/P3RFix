#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LV_Title

#include "Basic.hpp"

#include "LV_Title_classes.hpp"
#include "LV_Title_parameters.hpp"


namespace SDK
{

// Function LV_Title.LV_Title_C.ExecuteUbergraph_LV_Title
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALV_Title_C::ExecuteUbergraph_LV_Title(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LV_Title_C", "ExecuteUbergraph_LV_Title");

	Params::LV_Title_C_ExecuteUbergraph_LV_Title Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LV_Title.LV_Title_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALV_Title_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LV_Title_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

