#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlEvent

#include "Basic.hpp"

#include "Xrd777_structs.hpp"


namespace SDK::Params
{

// Function BP_BtlEvent.BP_BtlEvent_C.ExecuteUbergraph_BP_BtlEvent
// 0x0040 (0x0040 - 0x0000)
struct BP_BtlEvent_C_ExecuteUbergraph_BP_BtlEvent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABtlActor*                              K2Node_Event_actor;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBtlEventAreaType                             K2Node_Event_type;                                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_BtlCharacterBase_C*                 K2Node_DynamicCast_AsBP_Btl_Character_Base;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_BtlPerformer_C*                     CallFunc_GetTargetPerfomerCutscene_Performer;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_BtlEvent_C_ExecuteUbergraph_BP_BtlEvent) == 0x000008, "Wrong alignment on BP_BtlEvent_C_ExecuteUbergraph_BP_BtlEvent");
static_assert(sizeof(BP_BtlEvent_C_ExecuteUbergraph_BP_BtlEvent) == 0x000040, "Wrong size on BP_BtlEvent_C_ExecuteUbergraph_BP_BtlEvent");
static_assert(offsetof(BP_BtlEvent_C_ExecuteUbergraph_BP_BtlEvent, EntryPoint) == 0x000000, "Member 'BP_BtlEvent_C_ExecuteUbergraph_BP_BtlEvent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BtlEvent_C_ExecuteUbergraph_BP_BtlEvent, K2Node_Event_actor) == 0x000008, "Member 'BP_BtlEvent_C_ExecuteUbergraph_BP_BtlEvent::K2Node_Event_actor' has a wrong offset!");
static_assert(offsetof(BP_BtlEvent_C_ExecuteUbergraph_BP_BtlEvent, K2Node_Event_type) == 0x000010, "Member 'BP_BtlEvent_C_ExecuteUbergraph_BP_BtlEvent::K2Node_Event_type' has a wrong offset!");
static_assert(offsetof(BP_BtlEvent_C_ExecuteUbergraph_BP_BtlEvent, K2Node_DynamicCast_AsBP_Btl_Character_Base) == 0x000018, "Member 'BP_BtlEvent_C_ExecuteUbergraph_BP_BtlEvent::K2Node_DynamicCast_AsBP_Btl_Character_Base' has a wrong offset!");
static_assert(offsetof(BP_BtlEvent_C_ExecuteUbergraph_BP_BtlEvent, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_BtlEvent_C_ExecuteUbergraph_BP_BtlEvent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BtlEvent_C_ExecuteUbergraph_BP_BtlEvent, CallFunc_GetTargetPerfomerCutscene_Performer) == 0x000028, "Member 'BP_BtlEvent_C_ExecuteUbergraph_BP_BtlEvent::CallFunc_GetTargetPerfomerCutscene_Performer' has a wrong offset!");
static_assert(offsetof(BP_BtlEvent_C_ExecuteUbergraph_BP_BtlEvent, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'BP_BtlEvent_C_ExecuteUbergraph_BP_BtlEvent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_BtlEvent.BP_BtlEvent_C.SetPerformer
// 0x0010 (0x0010 - 0x0000)
struct BP_BtlEvent_C_SetPerformer final
{
public:
	class ABtlActor*                              Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBtlEventAreaType                             Type;                                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BtlEvent_C_SetPerformer) == 0x000008, "Wrong alignment on BP_BtlEvent_C_SetPerformer");
static_assert(sizeof(BP_BtlEvent_C_SetPerformer) == 0x000010, "Wrong size on BP_BtlEvent_C_SetPerformer");
static_assert(offsetof(BP_BtlEvent_C_SetPerformer, Actor) == 0x000000, "Member 'BP_BtlEvent_C_SetPerformer::Actor' has a wrong offset!");
static_assert(offsetof(BP_BtlEvent_C_SetPerformer, Type) == 0x000008, "Member 'BP_BtlEvent_C_SetPerformer::Type' has a wrong offset!");

// Function BP_BtlEvent.BP_BtlEvent_C.SetBtlComponent
// 0x0018 (0x0018 - 0x0000)
struct BP_BtlEvent_C_SetBtlComponent final
{
public:
	class UBtlCoreComponent*                      Btl_Core;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_BtlEnvironment_C*                   BtlEnvironment_0;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BtlEvent_C_SetBtlComponent) == 0x000008, "Wrong alignment on BP_BtlEvent_C_SetBtlComponent");
static_assert(sizeof(BP_BtlEvent_C_SetBtlComponent) == 0x000018, "Wrong size on BP_BtlEvent_C_SetBtlComponent");
static_assert(offsetof(BP_BtlEvent_C_SetBtlComponent, Btl_Core) == 0x000000, "Member 'BP_BtlEvent_C_SetBtlComponent::Btl_Core' has a wrong offset!");
static_assert(offsetof(BP_BtlEvent_C_SetBtlComponent, BtlEnvironment_0) == 0x000008, "Member 'BP_BtlEvent_C_SetBtlComponent::BtlEnvironment_0' has a wrong offset!");
static_assert(offsetof(BP_BtlEvent_C_SetBtlComponent, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_BtlEvent_C_SetBtlComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_BtlEvent.BP_BtlEvent_C.HasEvent
// 0x002C (0x002C - 0x0000)
struct BP_BtlEvent_C_HasEvent final
{
public:
	bool                                          Has_Event;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBtlEncountParam                       CallFunc_GetEncountParamForBP_ReturnValue;         // 0x0004(0x0024)(NoDestructor)
	bool                                          CallFunc_HasEventScriptForBP_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BtlEvent_C_HasEvent) == 0x000004, "Wrong alignment on BP_BtlEvent_C_HasEvent");
static_assert(sizeof(BP_BtlEvent_C_HasEvent) == 0x00002C, "Wrong size on BP_BtlEvent_C_HasEvent");
static_assert(offsetof(BP_BtlEvent_C_HasEvent, Has_Event) == 0x000000, "Member 'BP_BtlEvent_C_HasEvent::Has_Event' has a wrong offset!");
static_assert(offsetof(BP_BtlEvent_C_HasEvent, CallFunc_GetEncountParamForBP_ReturnValue) == 0x000004, "Member 'BP_BtlEvent_C_HasEvent::CallFunc_GetEncountParamForBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlEvent_C_HasEvent, CallFunc_HasEventScriptForBP_ReturnValue) == 0x000028, "Member 'BP_BtlEvent_C_HasEvent::CallFunc_HasEventScriptForBP_ReturnValue' has a wrong offset!");

}
