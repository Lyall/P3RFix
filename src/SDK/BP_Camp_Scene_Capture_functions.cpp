#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Camp_Scene_Capture

#include "Basic.hpp"

#include "BP_Camp_Scene_Capture_classes.hpp"
#include "BP_Camp_Scene_Capture_parameters.hpp"


namespace SDK
{

// Function BP_Camp_Scene_Capture.BP_Camp_Scene_Capture_C.ExecuteUbergraph_BP_Camp_Scene_Capture
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Camp_Scene_Capture_C::ExecuteUbergraph_BP_Camp_Scene_Capture(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Camp_Scene_Capture_C", "ExecuteUbergraph_BP_Camp_Scene_Capture");

	Params::BP_Camp_Scene_Capture_C_ExecuteUbergraph_BP_Camp_Scene_Capture Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Camp_Scene_Capture.BP_Camp_Scene_Capture_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Camp_Scene_Capture_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Camp_Scene_Capture_C", "ReceiveTick");

	Params::BP_Camp_Scene_Capture_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Camp_Scene_Capture.BP_Camp_Scene_Capture_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Camp_Scene_Capture_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Camp_Scene_Capture_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

