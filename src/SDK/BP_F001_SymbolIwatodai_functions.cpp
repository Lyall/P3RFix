#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_F001_SymbolIwatodai

#include "Basic.hpp"

#include "BP_F001_SymbolIwatodai_classes.hpp"
#include "BP_F001_SymbolIwatodai_parameters.hpp"


namespace SDK
{

// Function BP_F001_SymbolIwatodai.BP_F001_SymbolIwatodai_C.ExecuteUbergraph_BP_F001_SymbolIwatodai
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_F001_SymbolIwatodai_C::ExecuteUbergraph_BP_F001_SymbolIwatodai(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_F001_SymbolIwatodai_C", "ExecuteUbergraph_BP_F001_SymbolIwatodai");

	Params::BP_F001_SymbolIwatodai_C_ExecuteUbergraph_BP_F001_SymbolIwatodai Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_F001_SymbolIwatodai.BP_F001_SymbolIwatodai_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_F001_SymbolIwatodai_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_F001_SymbolIwatodai_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

