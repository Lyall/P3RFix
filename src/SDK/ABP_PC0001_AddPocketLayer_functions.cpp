#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_PC0001_AddPocketLayer

#include "Basic.hpp"

#include "ABP_PC0001_AddPocketLayer_classes.hpp"
#include "ABP_PC0001_AddPocketLayer_parameters.hpp"


namespace SDK
{

// Function ABP_PC0001_AddPocketLayer.ABP_PC0001_AddPocketLayer_C.ExecuteUbergraph_ABP_PC0001_AddPocketLayer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_PC0001_AddPocketLayer_C::ExecuteUbergraph_ABP_PC0001_AddPocketLayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC0001_AddPocketLayer_C", "ExecuteUbergraph_ABP_PC0001_AddPocketLayer");

	Params::ABP_PC0001_AddPocketLayer_C_ExecuteUbergraph_ABP_PC0001_AddPocketLayer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_PC0001_AddPocketLayer.ABP_PC0001_AddPocketLayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PC0001_AddPocketLayer_AnimGraphNode_ModifyBone_00E746714CBE9B7F46C9029C3A6ABACB
// (BlueprintEvent)

void UABP_PC0001_AddPocketLayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PC0001_AddPocketLayer_AnimGraphNode_ModifyBone_00E746714CBE9B7F46C9029C3A6ABACB()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC0001_AddPocketLayer_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PC0001_AddPocketLayer_AnimGraphNode_ModifyBone_00E746714CBE9B7F46C9029C3A6ABACB");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_PC0001_AddPocketLayer.ABP_PC0001_AddPocketLayer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PC0001_AddPocketLayer_AnimGraphNode_ModifyBone_EAF985A94F79D1E8E58908A4067A9FE2
// (BlueprintEvent)

void UABP_PC0001_AddPocketLayer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PC0001_AddPocketLayer_AnimGraphNode_ModifyBone_EAF985A94F79D1E8E58908A4067A9FE2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC0001_AddPocketLayer_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PC0001_AddPocketLayer_AnimGraphNode_ModifyBone_EAF985A94F79D1E8E58908A4067A9FE2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_PC0001_AddPocketLayer.ABP_PC0001_AddPocketLayer_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_PC0001_AddPocketLayer_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC0001_AddPocketLayer_C", "BlueprintUpdateAnimation");

	Params::ABP_PC0001_AddPocketLayer_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_PC0001_AddPocketLayer.ABP_PC0001_AddPocketLayer_C.BlueprintLinkedAnimationLayersInitialized
// (Event, Public, BlueprintEvent)

void UABP_PC0001_AddPocketLayer_C::BlueprintLinkedAnimationLayersInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC0001_AddPocketLayer_C", "BlueprintLinkedAnimationLayersInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_PC0001_AddPocketLayer.ABP_PC0001_AddPocketLayer_C.Set_IsAttachPocket
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_PC0001_AddPocketLayer_C::Set_IsAttachPocket()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC0001_AddPocketLayer_C", "Set_IsAttachPocket");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_PC0001_AddPocketLayer.ABP_PC0001_AddPocketLayer_C.Interp_F_InOut
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Current                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Increase_Interp                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Decrease_Interp                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UABP_PC0001_AddPocketLayer_C::Interp_F_InOut(float Current, float Target, float Increase_Interp, float Decrease_Interp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC0001_AddPocketLayer_C", "Interp_F_InOut");

	Params::ABP_PC0001_AddPocketLayer_C_Interp_F_InOut Parms{};

	Parms.Current = Current;
	Parms.Target = Target;
	Parms.Increase_Interp = Increase_Interp;
	Parms.Decrease_Interp = Decrease_Interp;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ABP_PC0001_AddPocketLayer.ABP_PC0001_AddPocketLayer_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_PC0001_AddPocketLayer_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC0001_AddPocketLayer_C", "AnimGraph");

	Params::ABP_PC0001_AddPocketLayer_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_PC0001_AddPocketLayer.ABP_PC0001_AddPocketLayer_C.CustomAdditiveLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        CustomAdditiveLayer_0                                  (Parm, OutParm, NoDestructor)

void UABP_PC0001_AddPocketLayer_C::CustomAdditiveLayer(const struct FPoseLink& InPose, struct FPoseLink* CustomAdditiveLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC0001_AddPocketLayer_C", "CustomAdditiveLayer");

	Params::ABP_PC0001_AddPocketLayer_C_CustomAdditiveLayer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (CustomAdditiveLayer_0 != nullptr)
		*CustomAdditiveLayer_0 = std::move(Parms.CustomAdditiveLayer_0);
}


// Function ABP_PC0001_AddPocketLayer.ABP_PC0001_AddPocketLayer_C.CostumePhysLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPhysicsPose                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        CostumePhysLayer_0                                     (Parm, OutParm, NoDestructor)

void UABP_PC0001_AddPocketLayer_C::CostumePhysLayer(const struct FPoseLink& InPhysicsPose, struct FPoseLink* CostumePhysLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC0001_AddPocketLayer_C", "CostumePhysLayer");

	Params::ABP_PC0001_AddPocketLayer_C_CostumePhysLayer Parms{};

	Parms.InPhysicsPose = std::move(InPhysicsPose);

	UObject::ProcessEvent(Func, &Parms);

	if (CostumePhysLayer_0 != nullptr)
		*CostumePhysLayer_0 = std::move(Parms.CostumePhysLayer_0);
}


// Function ABP_PC0001_AddPocketLayer.ABP_PC0001_AddPocketLayer_C.CostumeAdjustLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InMeshPose                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        CostumeAdjustLayer_0                                   (Parm, OutParm, NoDestructor)

void UABP_PC0001_AddPocketLayer_C::CostumeAdjustLayer(const struct FPoseLink& InMeshPose, struct FPoseLink* CostumeAdjustLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_PC0001_AddPocketLayer_C", "CostumeAdjustLayer");

	Params::ABP_PC0001_AddPocketLayer_C_CostumeAdjustLayer Parms{};

	Parms.InMeshPose = std::move(InMeshPose);

	UObject::ProcessEvent(Func, &Parms);

	if (CostumeAdjustLayer_0 != nullptr)
		*CostumeAdjustLayer_0 = std::move(Parms.CostumeAdjustLayer_0);
}

}

