#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlPhaseEscape

#include "Basic.hpp"

#include "BP_BtlPhaseEscape_classes.hpp"
#include "BP_BtlPhaseEscape_parameters.hpp"


namespace SDK
{

// Function BP_BtlPhaseEscape.BP_BtlPhaseEscape_C.ExecuteUbergraph_BP_BtlPhaseEscape
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlPhaseEscape_C::ExecuteUbergraph_BP_BtlPhaseEscape(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlPhaseEscape_C", "ExecuteUbergraph_BP_BtlPhaseEscape");

	Params::BP_BtlPhaseEscape_C_ExecuteUbergraph_BP_BtlPhaseEscape Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlPhaseEscape.BP_BtlPhaseEscape_C.Has Finished Escape Skill
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlPhaseEscape_C::Has_Finished_Escape_Skill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlPhaseEscape_C", "Has Finished Escape Skill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlPhaseEscape.BP_BtlPhaseEscape_C.Has Finished a character Escaping
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlPhaseEscape_C::Has_Finished_a_character_Escaping()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlPhaseEscape_C", "Has Finished a character Escaping");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlPhaseEscape.BP_BtlPhaseEscape_C.On Progress Next
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlPhaseEscape_C::On_Progress_Next()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlPhaseEscape_C", "On Progress Next");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlPhaseEscape.BP_BtlPhaseEscape_C.Has Finished Performance
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlPhaseEscape_C::Has_Finished_Performance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlPhaseEscape_C", "Has Finished Performance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlPhaseEscape.BP_BtlPhaseEscape_C.On Fadeout BGM
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlPhaseEscape_C::On_Fadeout_BGM()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlPhaseEscape_C", "On Fadeout BGM");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlPhaseEscape.BP_BtlPhaseEscape_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_BtlPhaseEscape_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlPhaseEscape_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlPhaseEscape.BP_BtlPhaseEscape_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlPhaseEscape_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlPhaseEscape_C", "ReceiveTick");

	Params::BP_BtlPhaseEscape_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlPhaseEscape.BP_BtlPhaseEscape_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BtlPhaseEscape_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlPhaseEscape_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlPhaseEscape.BP_BtlPhaseEscape_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlPhaseEscape_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlPhaseEscape_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlPhaseEscape.BP_BtlPhaseEscape_C.GetNextPhaseInBP
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABtlPhase*                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ABtlPhase* ABP_BtlPhaseEscape_C::GetNextPhaseInBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlPhaseEscape_C", "GetNextPhaseInBP");

	Params::BP_BtlPhaseEscape_C_GetNextPhaseInBP Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BtlPhaseEscape.BP_BtlPhaseEscape_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlPhaseEscape_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlPhaseEscape_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlPhaseEscape.BP_BtlPhaseEscape_C.AllocateMembers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BtlPhaseEscape_C::AllocateMembers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlPhaseEscape_C", "AllocateMembers");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlPhaseEscape.BP_BtlPhaseEscape_C.Setup All Members Visibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BtlPhaseEscape_C::Setup_All_Members_Visibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlPhaseEscape_C", "Setup All Members Visibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlPhaseEscape.BP_BtlPhaseEscape_C.HideAllEnemies
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BtlPhaseEscape_C::HideAllEnemies()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlPhaseEscape_C", "HideAllEnemies");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlPhaseEscape.BP_BtlPhaseEscape_C.CheckProgressNextPhaseInBP
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_BtlPhaseEscape_C::CheckProgressNextPhaseInBP() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlPhaseEscape_C", "CheckProgressNextPhaseInBP");

	Params::BP_BtlPhaseEscape_C_CheckProgressNextPhaseInBP Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

