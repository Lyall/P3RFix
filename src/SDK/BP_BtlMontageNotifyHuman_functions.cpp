#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlMontageNotifyHuman

#include "Basic.hpp"

#include "BP_BtlMontageNotifyHuman_classes.hpp"
#include "BP_BtlMontageNotifyHuman_parameters.hpp"


namespace SDK
{

// Function BP_BtlMontageNotifyHuman.BP_BtlMontageNotifyHuman_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_BtlMontageNotifyHuman_C::GetNotifyName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlMontageNotifyHuman_C", "GetNotifyName");

	Params::BP_BtlMontageNotifyHuman_C_GetNotifyName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BtlMontageNotifyHuman.BP_BtlMontageNotifyHuman_C.GetBattleNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UBP_BtlMontageNotifyHuman_C::GetBattleNotifyName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlMontageNotifyHuman_C", "GetBattleNotifyName");

	Params::BP_BtlMontageNotifyHuman_C_GetBattleNotifyName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BtlMontageNotifyHuman.BP_BtlMontageNotifyHuman_C.GetHitStrFromNotify
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EBtlAnimNotifyHitEffect                 HitType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Str                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBP_BtlMontageNotifyHuman_C::GetHitStrFromNotify(EBtlAnimNotifyHitEffect HitType, class FString* Str) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlMontageNotifyHuman_C", "GetHitStrFromNotify");

	Params::BP_BtlMontageNotifyHuman_C_GetHitStrFromNotify Parms{};

	Parms.HitType = HitType;

	UObject::ProcessEvent(Func, &Parms);

	if (Str != nullptr)
		*Str = std::move(Parms.Str);
}

}

