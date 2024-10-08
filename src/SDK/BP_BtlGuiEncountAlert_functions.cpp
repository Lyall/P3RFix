#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlGuiEncountAlert

#include "Basic.hpp"

#include "BP_BtlGuiEncountAlert_classes.hpp"
#include "BP_BtlGuiEncountAlert_parameters.hpp"


namespace SDK
{

// Function BP_BtlGuiEncountAlert.BP_BtlGuiEncountAlert_C.ExecuteUbergraph_BP_BtlGuiEncountAlert
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlGuiEncountAlert_C::ExecuteUbergraph_BP_BtlGuiEncountAlert(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiEncountAlert_C", "ExecuteUbergraph_BP_BtlGuiEncountAlert");

	Params::BP_BtlGuiEncountAlert_C_ExecuteUbergraph_BP_BtlGuiEncountAlert Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlGuiEncountAlert.BP_BtlGuiEncountAlert_C.GuiActorUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlGuiEncountAlert_C::GuiActorUpdate(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiEncountAlert_C", "GuiActorUpdate");

	Params::BP_BtlGuiEncountAlert_C_GuiActorUpdate Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlGuiEncountAlert.BP_BtlGuiEncountAlert_C.GuiActorBeginPlay
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlGuiEncountAlert_C::GuiActorBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiEncountAlert_C", "GuiActorBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiEncountAlert.BP_BtlGuiEncountAlert_C.EncountTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_BtlGuiEncountAlert_C::EncountTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiEncountAlert_C", "EncountTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiEncountAlert.BP_BtlGuiEncountAlert_C.EncountTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_BtlGuiEncountAlert_C::EncountTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiEncountAlert_C", "EncountTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiEncountAlert.BP_BtlGuiEncountAlert_C.SetParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PlayerAdvantage_0                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   LifeTime_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlGuiEncountAlert_C::SetParam(bool PlayerAdvantage_0, float LifeTime_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiEncountAlert_C", "SetParam");

	Params::BP_BtlGuiEncountAlert_C_SetParam Parms{};

	Parms.PlayerAdvantage_0 = PlayerAdvantage_0;
	Parms.LifeTime_0 = LifeTime_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

