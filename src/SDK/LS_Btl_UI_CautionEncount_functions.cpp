#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LS_Btl_UI_CautionEncount

#include "Basic.hpp"

#include "LS_Btl_UI_CautionEncount_classes.hpp"
#include "LS_Btl_UI_CautionEncount_parameters.hpp"


namespace SDK
{

// Function LS_Btl_UI_CautionEncount.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void LS_Btl_UI_CautionEncount::USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::SequenceDirector_C_ExecuteUbergraph_SequenceDirector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_Btl_UI_CautionEncount.SequenceDirector_C.BtlEventAssistant_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BtlEventAssistant_C*          BtlEventAssistant                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void LS_Btl_UI_CautionEncount::USequenceDirector_C::BtlEventAssistant_Event_1(class ABP_BtlEventAssistant_C* BtlEventAssistant, int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "BtlEventAssistant_Event_1");

	Params::SequenceDirector_C_BtlEventAssistant_Event_1 Parms{};

	Parms.BtlEventAssistant = BtlEventAssistant;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_Btl_UI_CautionEncount.SequenceDirector_C.BtlEventAssistant_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BtlEventAssistant_C*          BtlEventAssistant                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void LS_Btl_UI_CautionEncount::USequenceDirector_C::BtlEventAssistant_Event_0(class ABP_BtlEventAssistant_C* BtlEventAssistant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "BtlEventAssistant_Event_0");

	Params::SequenceDirector_C_BtlEventAssistant_Event_0 Parms{};

	Parms.BtlEventAssistant = BtlEventAssistant;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_Btl_UI_CautionEncount.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BtlEventAssistant_C*          BtlEventAssistant                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void LS_Btl_UI_CautionEncount::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_BtlEventAssistant_C* BtlEventAssistant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");

	Params::SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0 Parms{};

	Parms.BtlEventAssistant = BtlEventAssistant;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LS_Btl_UI_CautionEncount.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BtlEventAssistant_C*          BtlEventAssistant                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void LS_Btl_UI_CautionEncount::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_BtlEventAssistant_C* BtlEventAssistant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_1");

	Params::SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1 Parms{};

	Parms.BtlEventAssistant = BtlEventAssistant;

	UObject::ProcessEvent(Func, &Parms);
}

}
