#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AtlEvtActorComponent

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_AtlEvtActorComponent.BP_AtlEvtActorComponent_C.ExecuteUbergraph_BP_AtlEvtActorComponent
// 0x0004 (0x0004 - 0x0000)
struct BP_AtlEvtActorComponent_C_ExecuteUbergraph_BP_AtlEvtActorComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AtlEvtActorComponent_C_ExecuteUbergraph_BP_AtlEvtActorComponent) == 0x000004, "Wrong alignment on BP_AtlEvtActorComponent_C_ExecuteUbergraph_BP_AtlEvtActorComponent");
static_assert(sizeof(BP_AtlEvtActorComponent_C_ExecuteUbergraph_BP_AtlEvtActorComponent) == 0x000004, "Wrong size on BP_AtlEvtActorComponent_C_ExecuteUbergraph_BP_AtlEvtActorComponent");
static_assert(offsetof(BP_AtlEvtActorComponent_C_ExecuteUbergraph_BP_AtlEvtActorComponent, EntryPoint) == 0x000000, "Member 'BP_AtlEvtActorComponent_C_ExecuteUbergraph_BP_AtlEvtActorComponent::EntryPoint' has a wrong offset!");

// Function BP_AtlEvtActorComponent.BP_AtlEvtActorComponent_C.ResetEvtLocomotionParams
// 0x0020 (0x0020 - 0x0000)
struct BP_AtlEvtActorComponent_C_ResetEvtLocomotionParams final
{
public:
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_AtlEvtActor_C>    K2Node_DynamicCast_AsBPI_Atl_Evt_Actor;            // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AtlEvtActorComponent_C_ResetEvtLocomotionParams) == 0x000008, "Wrong alignment on BP_AtlEvtActorComponent_C_ResetEvtLocomotionParams");
static_assert(sizeof(BP_AtlEvtActorComponent_C_ResetEvtLocomotionParams) == 0x000020, "Wrong size on BP_AtlEvtActorComponent_C_ResetEvtLocomotionParams");
static_assert(offsetof(BP_AtlEvtActorComponent_C_ResetEvtLocomotionParams, CallFunc_GetOwner_ReturnValue) == 0x000000, "Member 'BP_AtlEvtActorComponent_C_ResetEvtLocomotionParams::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AtlEvtActorComponent_C_ResetEvtLocomotionParams, K2Node_DynamicCast_AsBPI_Atl_Evt_Actor) == 0x000008, "Member 'BP_AtlEvtActorComponent_C_ResetEvtLocomotionParams::K2Node_DynamicCast_AsBPI_Atl_Evt_Actor' has a wrong offset!");
static_assert(offsetof(BP_AtlEvtActorComponent_C_ResetEvtLocomotionParams, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_AtlEvtActorComponent_C_ResetEvtLocomotionParams::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

