#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Get_PC0001_Variables

#include "Basic.hpp"

#include "BPI_Get_PC0001_Variables_classes.hpp"
#include "BPI_Get_PC0001_Variables_parameters.hpp"


namespace SDK
{

// Function BPI_Get_PC0001_Variables.BPI_Get_PC0001_Variables_C.Is_EventPlayAndHaveBag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Out_Result                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_Get_PC0001_Variables_C::Is_EventPlayAndHaveBag(bool* Out_Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Get_PC0001_Variables_C", "Is_EventPlayAndHaveBag");

	Params::BPI_Get_PC0001_Variables_C_Is_EventPlayAndHaveBag Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Result != nullptr)
		*Out_Result = Parms.Out_Result;
}


// Function BPI_Get_PC0001_Variables.BPI_Get_PC0001_Variables_C.Get_ForceAttachPocket
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Out_ForceAttachPocket                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_Get_PC0001_Variables_C::Get_ForceAttachPocket(bool* Out_ForceAttachPocket)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Get_PC0001_Variables_C", "Get_ForceAttachPocket");

	Params::BPI_Get_PC0001_Variables_C_Get_ForceAttachPocket Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Out_ForceAttachPocket != nullptr)
		*Out_ForceAttachPocket = Parms.Out_ForceAttachPocket;
}


// Function BPI_Get_PC0001_Variables.BPI_Get_PC0001_Variables_C.Get_IsAttachedBostonBag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Out_IsAttachedBostonBag                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_Get_PC0001_Variables_C::Get_IsAttachedBostonBag(bool* Out_IsAttachedBostonBag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Get_PC0001_Variables_C", "Get_IsAttachedBostonBag");

	Params::BPI_Get_PC0001_Variables_C_Get_IsAttachedBostonBag Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Out_IsAttachedBostonBag != nullptr)
		*Out_IsAttachedBostonBag = Parms.Out_IsAttachedBostonBag;
}


// Function BPI_Get_PC0001_Variables.BPI_Get_PC0001_Variables_C.Get_NotUpdateAttachPocket
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Out_NotUpdateEnableAttachPocket                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_Get_PC0001_Variables_C::Get_NotUpdateAttachPocket(bool* Out_NotUpdateEnableAttachPocket)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Get_PC0001_Variables_C", "Get_NotUpdateAttachPocket");

	Params::BPI_Get_PC0001_Variables_C_Get_NotUpdateAttachPocket Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Out_NotUpdateEnableAttachPocket != nullptr)
		*Out_NotUpdateEnableAttachPocket = Parms.Out_NotUpdateEnableAttachPocket;
}


// Function BPI_Get_PC0001_Variables.BPI_Get_PC0001_Variables_C.Get_AttachPocketAlpha
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Out_AttachPocket_L_Alpha                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Out_AttachPocket_R_Alpha                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Get_PC0001_Variables_C::Get_AttachPocketAlpha(float* Out_AttachPocket_L_Alpha, float* Out_AttachPocket_R_Alpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Get_PC0001_Variables_C", "Get_AttachPocketAlpha");

	Params::BPI_Get_PC0001_Variables_C_Get_AttachPocketAlpha Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Out_AttachPocket_L_Alpha != nullptr)
		*Out_AttachPocket_L_Alpha = Parms.Out_AttachPocket_L_Alpha;

	if (Out_AttachPocket_R_Alpha != nullptr)
		*Out_AttachPocket_R_Alpha = Parms.Out_AttachPocket_R_Alpha;
}

}

