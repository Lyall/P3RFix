#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlGuiDamage2

#include "Basic.hpp"

#include "BP_BtlGuiDamage2_classes.hpp"
#include "BP_BtlGuiDamage2_parameters.hpp"


namespace SDK
{

// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.OnEndDamageAnim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BtlCharacterBase_C*           NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlGuiDamage2_C::OnEndDamageAnim__DelegateSignature(class ABP_BtlCharacterBase_C* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "OnEndDamageAnim__DelegateSignature");

	Params::BP_BtlGuiDamage2_C_OnEndDamageAnim__DelegateSignature Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.ExecuteUbergraph_BP_BtlGuiDamage2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlGuiDamage2_C::ExecuteUbergraph_BP_BtlGuiDamage2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "ExecuteUbergraph_BP_BtlGuiDamage2");

	Params::BP_BtlGuiDamage2_C_ExecuteUbergraph_BP_BtlGuiDamage2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.Remove
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlGuiDamage2_C::Remove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "Remove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.GuiActorBeginDestroy
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlGuiDamage2_C::GuiActorBeginDestroy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "GuiActorBeginDestroy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.GuiActorUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlGuiDamage2_C::GuiActorUpdate(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "GuiActorUpdate");

	Params::BP_BtlGuiDamage2_C_GuiActorUpdate Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_BtlCharacterBase_C*           Chara_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Damage_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Type_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Pos_0                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    FripFlop                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BtlGuiDamage2_C::Start(class ABP_BtlCharacterBase_C* Chara_0, int32 Damage_0, int32 Type_0, const struct FVector2D& Pos_0, bool FripFlop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "Start");

	Params::BP_BtlGuiDamage2_C_Start Parms{};

	Parms.Chara_0 = Chara_0;
	Parms.Damage_0 = Damage_0;
	Parms.Type_0 = Type_0;
	Parms.Pos_0 = std::move(Pos_0);
	Parms.FripFlop = FripFlop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.StartAllTimeline
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlGuiDamage2_C::StartAllTimeline()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "StartAllTimeline");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.TimelineEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlGuiDamage2_C::TimelineEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "TimelineEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.AllAddTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_BtlGuiDamage2_C::AllAddTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "AllAddTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.AllAddTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_BtlGuiDamage2_C::AllAddTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "AllAddTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.CriticalTimeline__OutAnim__EventFunc
// (BlueprintEvent)

void ABP_BtlGuiDamage2_C::CriticalTimeline__OutAnim__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "CriticalTimeline__OutAnim__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.CriticalTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_BtlGuiDamage2_C::CriticalTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "CriticalTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.CriticalTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_BtlGuiDamage2_C::CriticalTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "CriticalTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.BlockTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_BtlGuiDamage2_C::BlockTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "BlockTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.BlockTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_BtlGuiDamage2_C::BlockTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "BlockTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.MissTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_BtlGuiDamage2_C::MissTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "MissTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.MissTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_BtlGuiDamage2_C::MissTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "MissTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.ResistTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_BtlGuiDamage2_C::ResistTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "ResistTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.ResistTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_BtlGuiDamage2_C::ResistTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "ResistTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.WeakTimeline__OutAnim__EventFunc
// (BlueprintEvent)

void ABP_BtlGuiDamage2_C::WeakTimeline__OutAnim__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "WeakTimeline__OutAnim__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.WeakTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_BtlGuiDamage2_C::WeakTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "WeakTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.WeakTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_BtlGuiDamage2_C::WeakTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "WeakTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.rootTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_BtlGuiDamage2_C::RootTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "rootTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.rootTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_BtlGuiDamage2_C::RootTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "rootTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.UpdateVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BtlGuiDamage2_C::UpdateVisible(int32 Index_0, bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "UpdateVisible");

	Params::BP_BtlGuiDamage2_C_UpdateVisible Parms{};

	Parms.Index_0 = Index_0;
	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.Update Add PositionAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        AddPos                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Alpha_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlGuiDamage2_C::Update_Add_PositionAlpha(int32 Index_0, const struct FVector2D& AddPos, float Alpha_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "Update Add PositionAlpha");

	Params::BP_BtlGuiDamage2_C_Update_Add_PositionAlpha Parms{};

	Parms.Index_0 = Index_0;
	Parms.AddPos = std::move(AddPos);
	Parms.Alpha_0 = Alpha_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.GetNumberHalfWidth
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UseTempParam                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Damage_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Type_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HalfWidth                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Scale_0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    FlipFlopFlag                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BtlGuiDamage2_C::GetNumberHalfWidth(bool UseTempParam, int32 Damage_0, int32 Type_0, float* HalfWidth, float* Scale_0, bool* FlipFlopFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "GetNumberHalfWidth");

	Params::BP_BtlGuiDamage2_C_GetNumberHalfWidth Parms{};

	Parms.UseTempParam = UseTempParam;
	Parms.Damage_0 = Damage_0;
	Parms.Type_0 = Type_0;

	UObject::ProcessEvent(Func, &Parms);

	if (HalfWidth != nullptr)
		*HalfWidth = Parms.HalfWidth;

	if (Scale_0 != nullptr)
		*Scale_0 = Parms.Scale_0;

	if (FlipFlopFlag != nullptr)
		*FlipFlopFlag = Parms.FlipFlopFlag;
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.SetWeakTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutAnim                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BtlGuiDamage2_C::SetWeakTime(bool OutAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "SetWeakTime");

	Params::BP_BtlGuiDamage2_C_SetWeakTime Parms{};

	Parms.OutAnim = OutAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.SetWeakLineTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutAnim                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BtlGuiDamage2_C::SetWeakLineTime(bool OutAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "SetWeakLineTime");

	Params::BP_BtlGuiDamage2_C_SetWeakLineTime Parms{};

	Parms.OutAnim = OutAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.SetCriticalTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutAnim                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BtlGuiDamage2_C::SetCriticalTime(bool OutAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "SetCriticalTime");

	Params::BP_BtlGuiDamage2_C_SetCriticalTime Parms{};

	Parms.OutAnim = OutAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.SetCriticalLineTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    OutAnim                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BtlGuiDamage2_C::SetCriticalLineTime(bool OutAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "SetCriticalLineTime");

	Params::BP_BtlGuiDamage2_C_SetCriticalLineTime Parms{};

	Parms.OutAnim = OutAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.CreateDebugText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Type_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlGuiDamage2_C::CreateDebugText(int32 Type_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "CreateDebugText");

	Params::BP_BtlGuiDamage2_C_CreateDebugText Parms{};

	Parms.Type_0 = Type_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlGuiDamage2.BP_BtlGuiDamage2_C.UpdateDebugText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Type_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlGuiDamage2_C::UpdateDebugText(int32 Type_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlGuiDamage2_C", "UpdateDebugText");

	Params::BP_BtlGuiDamage2_C_UpdateDebugText Parms{};

	Parms.Type_0 = Type_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

