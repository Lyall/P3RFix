#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlGuiJyokyoHelp

#include "Basic.hpp"

#include "BP_BtlGuiJyokyoHelp_classes.hpp"
#include "BP_BtlGuiJyokyoHelp_parameters.hpp"


namespace SDK
{

// Function BP_BtlGuiJyokyoHelp.BP_BtlGuiJyokyoHelp_C.ExecuteUbergraph_BP_BtlGuiJyokyoHelp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlGuiJyokyoHelp_C::ExecuteUbergraph_BP_BtlGuiJyokyoHelp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiJyokyoHelp_C", "ExecuteUbergraph_BP_BtlGuiJyokyoHelp");

	Params::BP_BtlGuiJyokyoHelp_C_ExecuteUbergraph_BP_BtlGuiJyokyoHelp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlGuiJyokyoHelp.BP_BtlGuiJyokyoHelp_C.Start
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlGuiJyokyoHelp_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiJyokyoHelp_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiJyokyoHelp.BP_BtlGuiJyokyoHelp_C.GuiActorUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlGuiJyokyoHelp_C::GuiActorUpdate(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiJyokyoHelp_C", "GuiActorUpdate");

	Params::BP_BtlGuiJyokyoHelp_C_GuiActorUpdate Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlGuiJyokyoHelp.BP_BtlGuiJyokyoHelp_C.StartFadeOUT
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlGuiJyokyoHelp_C::StartFadeOUT()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiJyokyoHelp_C", "StartFadeOUT");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiJyokyoHelp.BP_BtlGuiJyokyoHelp_C.Start Fade In
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlGuiJyokyoHelp_C::Start_Fade_In()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiJyokyoHelp_C", "Start Fade In");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiJyokyoHelp.BP_BtlGuiJyokyoHelp_C.Fade out__UpdateFunc
// (BlueprintEvent)

void ABP_BtlGuiJyokyoHelp_C::Fade_out__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiJyokyoHelp_C", "Fade out__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiJyokyoHelp.BP_BtlGuiJyokyoHelp_C.Fade out__FinishedFunc
// (BlueprintEvent)

void ABP_BtlGuiJyokyoHelp_C::Fade_out__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiJyokyoHelp_C", "Fade out__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiJyokyoHelp.BP_BtlGuiJyokyoHelp_C.Fade In__UpdateFunc
// (BlueprintEvent)

void ABP_BtlGuiJyokyoHelp_C::Fade_In__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiJyokyoHelp_C", "Fade In__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiJyokyoHelp.BP_BtlGuiJyokyoHelp_C.Fade In__FinishedFunc
// (BlueprintEvent)

void ABP_BtlGuiJyokyoHelp_C::Fade_In__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiJyokyoHelp_C", "Fade In__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiJyokyoHelp.BP_BtlGuiJyokyoHelp_C.SetParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BtlGuiIcon_C*                 BtlGuiIcon_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Genus_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ID_0                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MsgNo_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Var1_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Var2_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   RenderTime_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DelayTime_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Flags_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlGuiJyokyoHelp_C::SetParam(class ABP_BtlGuiIcon_C* BtlGuiIcon_0, int32 Genus_0, int32 ID_0, int32 MsgNo_0, int32 Var1_0, int32 Var2_0, float RenderTime_0, float DelayTime_0, int32 Flags_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiJyokyoHelp_C", "SetParam");

	Params::BP_BtlGuiJyokyoHelp_C_SetParam Parms{};

	Parms.BtlGuiIcon_0 = BtlGuiIcon_0;
	Parms.Genus_0 = Genus_0;
	Parms.ID_0 = ID_0;
	Parms.MsgNo_0 = MsgNo_0;
	Parms.Var1_0 = Var1_0;
	Parms.Var2_0 = Var2_0;
	Parms.RenderTime_0 = RenderTime_0;
	Parms.DelayTime_0 = DelayTime_0;
	Parms.Flags_0 = Flags_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlGuiJyokyoHelp.BP_BtlGuiJyokyoHelp_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BtlGuiJyokyoHelp_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiJyokyoHelp_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiJyokyoHelp.BP_BtlGuiJyokyoHelp_C.ClearAlpha
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BtlGuiJyokyoHelp_C::ClearAlpha()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiJyokyoHelp_C", "ClearAlpha");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiJyokyoHelp.BP_BtlGuiJyokyoHelp_C.ChangeWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BtlGuiJyokyoHelp_C::ChangeWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiJyokyoHelp_C", "ChangeWindow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiJyokyoHelp.BP_BtlGuiJyokyoHelp_C.CalcAlpha
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Alpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FadeParam                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   CalcedAlpha                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlGuiJyokyoHelp_C::CalcAlpha(float Alpha, float FadeParam, uint8* CalcedAlpha)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiJyokyoHelp_C", "CalcAlpha");

	Params::BP_BtlGuiJyokyoHelp_C_CalcAlpha Parms{};

	Parms.Alpha = Alpha;
	Parms.FadeParam = FadeParam;

	UObject::ProcessEvent(Func, &Parms);

	if (CalcedAlpha != nullptr)
		*CalcedAlpha = Parms.CalcedAlpha;
}


// Function BP_BtlGuiJyokyoHelp.BP_BtlGuiJyokyoHelp_C.Calc Alpha by Color
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FColor                           In                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FadeParam                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                           Out                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlGuiJyokyoHelp_C::Calc_Alpha_by_Color(const struct FColor& In, float FadeParam, struct FColor* Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiJyokyoHelp_C", "Calc Alpha by Color");

	Params::BP_BtlGuiJyokyoHelp_C_Calc_Alpha_by_Color Parms{};

	Parms.In = std::move(In);
	Parms.FadeParam = FadeParam;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);
}

}

