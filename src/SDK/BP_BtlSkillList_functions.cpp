#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlSkillList

#include "Basic.hpp"

#include "BP_BtlSkillList_classes.hpp"
#include "BP_BtlSkillList_parameters.hpp"


namespace SDK
{

// Function BP_BtlSkillList.BP_BtlSkillList_C.ExecuteUbergraph_BP_BtlSkillList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlSkillList_C::ExecuteUbergraph_BP_BtlSkillList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "ExecuteUbergraph_BP_BtlSkillList");

	Params::BP_BtlSkillList_C_ExecuteUbergraph_BP_BtlSkillList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.GuiActorEncountStart
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillList_C::GuiActorEncountStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "GuiActorEncountStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.SetAddResources
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillList_C::SetAddResources()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "SetAddResources");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.PlayCursorSE
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillList_C::PlayCursorSE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "PlayCursorSE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.GuiActorStateExit
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillList_C::GuiActorStateExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "GuiActorStateExit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.GuiActorStateInit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Flag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlSkillList_C::GuiActorStateInit(bool Flag, int32 Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "GuiActorStateInit");

	Params::BP_BtlSkillList_C_GuiActorStateInit Parms{};

	Parms.Flag = Flag;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.GuiActorBeginPlay
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillList_C::GuiActorBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "GuiActorBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.EntryChangeState
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillList_C::EntryChangeState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "EntryChangeState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.�������_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBtlInputKey                     InputKey                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_BtlSkillList_C::_________0(const struct FBtlInputKey& InputKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "�������_0");

	Params::BP_BtlSkillList_C__________0 Parms{};

	Parms.InputKey = std::move(InputKey);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.OpenPersonaStatus
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillList_C::OpenPersonaStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "OpenPersonaStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.JumpMajorSkill
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillList_C::JumpMajorSkill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "JumpMajorSkill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.ChangePersonaLeft
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillList_C::ChangePersonaLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "ChangePersonaLeft");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.ChangePersonaRight
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillList_C::ChangePersonaRight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "ChangePersonaRight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.GuiActorUnbindAction
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillList_C::GuiActorUnbindAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "GuiActorUnbindAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.GuiActorBindAction
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillList_C::GuiActorBindAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "GuiActorBindAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.PushOk
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillList_C::PushOk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "PushOk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.PushCancel
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillList_C::PushCancel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "PushCancel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.CursorSetup
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillList_C::CursorSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "CursorSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.CallCursorUpdate
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillList_C::CallCursorUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "CallCursorUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.GuiActorUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlSkillList_C::GuiActorUpdate(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "GuiActorUpdate");

	Params::BP_BtlSkillList_C_GuiActorUpdate Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.StartOutTimeline
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillList_C::StartOutTimeline()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "StartOutTimeline");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.StartPersonaChangeTimeline
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillList_C::StartPersonaChangeTimeline()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "StartPersonaChangeTimeline");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.StartInTimeline
// (BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillList_C::StartInTimeline()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "StartInTimeline");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.OutAnimTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_BtlSkillList_C::OutAnimTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "OutAnimTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.OutAnimTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_BtlSkillList_C::OutAnimTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "OutAnimTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.EquipIconTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_BtlSkillList_C::EquipIconTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "EquipIconTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.EquipIconTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_BtlSkillList_C::EquipIconTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "EquipIconTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.LiR1Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_BtlSkillList_C::LiR1Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "LiR1Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.LiR1Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_BtlSkillList_C::LiR1Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "LiR1Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.PresonaChangeTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_BtlSkillList_C::PresonaChangeTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "PresonaChangeTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.PresonaChangeTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_BtlSkillList_C::PresonaChangeTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "PresonaChangeTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.InAnimTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_BtlSkillList_C::InAnimTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "InAnimTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.InAnimTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_BtlSkillList_C::InAnimTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "InAnimTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.CaustikTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_BtlSkillList_C::CaustikTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "CaustikTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.CaustikTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_BtlSkillList_C::CaustikTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "CaustikTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.GetSkillName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutString                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_BtlSkillList_C::GetSkillName(int32 SkillId, class FString* OutString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "GetSkillName");

	Params::BP_BtlSkillList_C_GetSkillName Parms{};

	Parms.SkillId = SkillId;

	UObject::ProcessEvent(Func, &Parms);

	if (OutString != nullptr)
		*OutString = std::move(Parms.OutString);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.SetupPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CursorIndex_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Pos                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlSkillList_C::SetupPosition(int32 Index_0, int32 CursorIndex_0, struct FVector2D* Pos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "SetupPosition");

	Params::BP_BtlSkillList_C_SetupPosition Parms{};

	Parms.Index_0 = Index_0;
	Parms.CursorIndex_0 = CursorIndex_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Pos != nullptr)
		*Pos = std::move(Parms.Pos);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.GetParamNText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutString                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_BtlSkillList_C::GetParamNText(int32 SkillId, class FString* OutString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "GetParamNText");

	Params::BP_BtlSkillList_C_GetParamNText Parms{};

	Parms.SkillId = SkillId;

	UObject::ProcessEvent(Func, &Parms);

	if (OutString != nullptr)
		*OutString = std::move(Parms.OutString);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.setCostNumParam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Cost                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsHandred1                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   HandredNum1                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        HandredPos1                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsTen1                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   TenNum1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        TenPos1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsNum_1                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Num1                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Pos1                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BtlSkillList_C::SetCostNumParam(int32 Cost, bool* IsHandred1, int32* HandredNum1, struct FVector2D* HandredPos1, bool* IsTen1, int32* TenNum1, struct FVector2D* TenPos1, bool* IsNum_1, int32* Num1, struct FVector2D* Pos1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "setCostNumParam");

	Params::BP_BtlSkillList_C_SetCostNumParam Parms{};

	Parms.Cost = Cost;

	UObject::ProcessEvent(Func, &Parms);

	if (IsHandred1 != nullptr)
		*IsHandred1 = Parms.IsHandred1;

	if (HandredNum1 != nullptr)
		*HandredNum1 = Parms.HandredNum1;

	if (HandredPos1 != nullptr)
		*HandredPos1 = std::move(Parms.HandredPos1);

	if (IsTen1 != nullptr)
		*IsTen1 = Parms.IsTen1;

	if (TenNum1 != nullptr)
		*TenNum1 = Parms.TenNum1;

	if (TenPos1 != nullptr)
		*TenPos1 = std::move(Parms.TenPos1);

	if (IsNum_1 != nullptr)
		*IsNum_1 = Parms.IsNum_1;

	if (Num1 != nullptr)
		*Num1 = Parms.Num1;

	if (Pos1 != nullptr)
		*Pos1 = std::move(Parms.Pos1);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.BackGroundDrawEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BtlSkillList_C::BackGroundDrawEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "BackGroundDrawEnable");

	Params::BP_BtlSkillList_C_BackGroundDrawEnable Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.LoadPersonaAsset
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillList_C::LoadPersonaAsset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "LoadPersonaAsset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.RefrectLocalizeData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BtlSkillList_C::RefrectLocalizeData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "RefrectLocalizeData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlSkillList.BP_BtlSkillList_C.IsVisibleEquipIcon
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABtlActor*                        _____                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsVisible                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BtlSkillList_C::IsVisibleEquipIcon(class ABtlActor* _____, bool* bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlSkillList_C", "IsVisibleEquipIcon");

	Params::BP_BtlSkillList_C_IsVisibleEquipIcon Parms{};

	Parms._____ = _____;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsVisible != nullptr)
		*bIsVisible = Parms.bIsVisible;
}

}

