#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlSkillNamePanel

#include "Basic.hpp"

#include "BP_BtlSkillNamePanel_classes.hpp"
#include "BP_BtlSkillNamePanel_parameters.hpp"


namespace SDK
{

// Function BP_BtlSkillNamePanel.BP_BtlSkillNamePanel_C.ExecuteUbergraph_BP_BtlSkillNamePanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlSkillNamePanel_C::ExecuteUbergraph_BP_BtlSkillNamePanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillNamePanel_C", "ExecuteUbergraph_BP_BtlSkillNamePanel");

	Params::BP_BtlSkillNamePanel_C_ExecuteUbergraph_BP_BtlSkillNamePanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlSkillNamePanel.BP_BtlSkillNamePanel_C.GuiActorUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlSkillNamePanel_C::GuiActorUpdate(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillNamePanel_C", "GuiActorUpdate");

	Params::BP_BtlSkillNamePanel_C_GuiActorUpdate Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlSkillNamePanel.BP_BtlSkillNamePanel_C.Start
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillNamePanel_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillNamePanel_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillNamePanel.BP_BtlSkillNamePanel_C.StartFadeOUT
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillNamePanel_C::StartFadeOUT()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillNamePanel_C", "StartFadeOUT");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillNamePanel.BP_BtlSkillNamePanel_C.StartFadeIN
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillNamePanel_C::StartFadeIN()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillNamePanel_C", "StartFadeIN");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillNamePanel.BP_BtlSkillNamePanel_C.FadeOutAnimTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_BtlSkillNamePanel_C::FadeOutAnimTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillNamePanel_C", "FadeOutAnimTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillNamePanel.BP_BtlSkillNamePanel_C.FadeOutAnimTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_BtlSkillNamePanel_C::FadeOutAnimTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillNamePanel_C", "FadeOutAnimTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillNamePanel.BP_BtlSkillNamePanel_C.FadeInAnimTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_BtlSkillNamePanel_C::FadeInAnimTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillNamePanel_C", "FadeInAnimTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillNamePanel.BP_BtlSkillNamePanel_C.FadeInAnimTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_BtlSkillNamePanel_C::FadeInAnimTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillNamePanel_C", "FadeInAnimTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillNamePanel.BP_BtlSkillNamePanel_C.SetSkillID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnemy_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Time_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlSkillNamePanel_C::SetSkillID(int32 SkillId, bool IsEnemy_0, float Time_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillNamePanel_C", "SetSkillID");

	Params::BP_BtlSkillNamePanel_C_SetSkillID Parms{};

	Parms.SkillId = SkillId;
	Parms.IsEnemy_0 = IsEnemy_0;
	Parms.Time_0 = Time_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlSkillNamePanel.BP_BtlSkillNamePanel_C.SetCommonText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnemy_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Time_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlSkillNamePanel_C::SetCommonText(int32 Key, bool IsEnemy_0, float Time_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillNamePanel_C", "SetCommonText");

	Params::BP_BtlSkillNamePanel_C_SetCommonText Parms{};

	Parms.Key = Key;
	Parms.IsEnemy_0 = IsEnemy_0;
	Parms.Time_0 = Time_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlSkillNamePanel.BP_BtlSkillNamePanel_C.SetItemName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnemy_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Time_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlSkillNamePanel_C::SetItemName(int32 ItemId, bool IsEnemy_0, float Time_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillNamePanel_C", "SetItemName");

	Params::BP_BtlSkillNamePanel_C_SetItemName Parms{};

	Parms.ItemId = ItemId;
	Parms.IsEnemy_0 = IsEnemy_0;
	Parms.Time_0 = Time_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlSkillNamePanel.BP_BtlSkillNamePanel_C.Set Debug Param
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   DebugSkillID_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlSkillNamePanel_C::Set_Debug_Param(int32 DebugSkillID_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillNamePanel_C", "Set Debug Param");

	Params::BP_BtlSkillNamePanel_C_Set_Debug_Param Parms{};

	Parms.DebugSkillID_0 = DebugSkillID_0;

	UObject::ProcessEvent(Func, &Parms);
}

}
