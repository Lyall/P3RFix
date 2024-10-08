#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlSequencerObserve

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_BtlSequencerObserve.BP_BtlSequencerObserve_C.ExecuteUbergraph_BP_BtlSequencerObserve
// 0x0028 (0x0028 - 0x0000)
struct BP_BtlSequencerObserve_C_ExecuteUbergraph_BP_BtlSequencerObserve final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_BtlEventAssistant_C*                CallFunc_GetActorOfClass_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                    K2Node_Event_InSequenceActor;                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_InStart;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BtlSequencerObserve_C_ExecuteUbergraph_BP_BtlSequencerObserve) == 0x000008, "Wrong alignment on BP_BtlSequencerObserve_C_ExecuteUbergraph_BP_BtlSequencerObserve");
static_assert(sizeof(BP_BtlSequencerObserve_C_ExecuteUbergraph_BP_BtlSequencerObserve) == 0x000028, "Wrong size on BP_BtlSequencerObserve_C_ExecuteUbergraph_BP_BtlSequencerObserve");
static_assert(offsetof(BP_BtlSequencerObserve_C_ExecuteUbergraph_BP_BtlSequencerObserve, EntryPoint) == 0x000000, "Member 'BP_BtlSequencerObserve_C_ExecuteUbergraph_BP_BtlSequencerObserve::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BtlSequencerObserve_C_ExecuteUbergraph_BP_BtlSequencerObserve, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_BtlSequencerObserve_C_ExecuteUbergraph_BP_BtlSequencerObserve::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlSequencerObserve_C_ExecuteUbergraph_BP_BtlSequencerObserve, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'BP_BtlSequencerObserve_C_ExecuteUbergraph_BP_BtlSequencerObserve::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_BtlSequencerObserve_C_ExecuteUbergraph_BP_BtlSequencerObserve, CallFunc_IsValid_ReturnValue_1) == 0x00000C, "Member 'BP_BtlSequencerObserve_C_ExecuteUbergraph_BP_BtlSequencerObserve::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BtlSequencerObserve_C_ExecuteUbergraph_BP_BtlSequencerObserve, CallFunc_GetActorOfClass_ReturnValue) == 0x000010, "Member 'BP_BtlSequencerObserve_C_ExecuteUbergraph_BP_BtlSequencerObserve::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlSequencerObserve_C_ExecuteUbergraph_BP_BtlSequencerObserve, K2Node_Event_InSequenceActor) == 0x000018, "Member 'BP_BtlSequencerObserve_C_ExecuteUbergraph_BP_BtlSequencerObserve::K2Node_Event_InSequenceActor' has a wrong offset!");
static_assert(offsetof(BP_BtlSequencerObserve_C_ExecuteUbergraph_BP_BtlSequencerObserve, K2Node_Event_InStart) == 0x000020, "Member 'BP_BtlSequencerObserve_C_ExecuteUbergraph_BP_BtlSequencerObserve::K2Node_Event_InStart' has a wrong offset!");

// Function BP_BtlSequencerObserve.BP_BtlSequencerObserve_C.SetParam
// 0x0010 (0x0010 - 0x0000)
struct BP_BtlSequencerObserve_C_SetParam final
{
public:
	class ALevelSequenceActor*                    InSequenceActor;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InStart;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BtlSequencerObserve_C_SetParam) == 0x000008, "Wrong alignment on BP_BtlSequencerObserve_C_SetParam");
static_assert(sizeof(BP_BtlSequencerObserve_C_SetParam) == 0x000010, "Wrong size on BP_BtlSequencerObserve_C_SetParam");
static_assert(offsetof(BP_BtlSequencerObserve_C_SetParam, InSequenceActor) == 0x000000, "Member 'BP_BtlSequencerObserve_C_SetParam::InSequenceActor' has a wrong offset!");
static_assert(offsetof(BP_BtlSequencerObserve_C_SetParam, InStart) == 0x000008, "Member 'BP_BtlSequencerObserve_C_SetParam::InStart' has a wrong offset!");

// Function BP_BtlSequencerObserve.BP_BtlSequencerObserve_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_BtlSequencerObserve_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BtlSequencerObserve_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_BtlSequencerObserve_C_ReceiveTick");
static_assert(sizeof(BP_BtlSequencerObserve_C_ReceiveTick) == 0x000004, "Wrong size on BP_BtlSequencerObserve_C_ReceiveTick");
static_assert(offsetof(BP_BtlSequencerObserve_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_BtlSequencerObserve_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_BtlSequencerObserve.BP_BtlSequencerObserve_C.Set Paramater
// 0x0030 (0x0030 - 0x0000)
struct BP_BtlSequencerObserve_C_Set_Paramater final
{
public:
	class ALevelSequenceActor*                    SequenceActor;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsStart;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BtlSequencerObserve_C_Set_Paramater) == 0x000008, "Wrong alignment on BP_BtlSequencerObserve_C_Set_Paramater");
static_assert(sizeof(BP_BtlSequencerObserve_C_Set_Paramater) == 0x000030, "Wrong size on BP_BtlSequencerObserve_C_Set_Paramater");
static_assert(offsetof(BP_BtlSequencerObserve_C_Set_Paramater, SequenceActor) == 0x000000, "Member 'BP_BtlSequencerObserve_C_Set_Paramater::SequenceActor' has a wrong offset!");
static_assert(offsetof(BP_BtlSequencerObserve_C_Set_Paramater, IsStart) == 0x000008, "Member 'BP_BtlSequencerObserve_C_Set_Paramater::IsStart' has a wrong offset!");
static_assert(offsetof(BP_BtlSequencerObserve_C_Set_Paramater, CallFunc_GetDisplayName_ReturnValue) == 0x000010, "Member 'BP_BtlSequencerObserve_C_Set_Paramater::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlSequencerObserve_C_Set_Paramater, CallFunc_Concat_StrStr_ReturnValue) == 0x000020, "Member 'BP_BtlSequencerObserve_C_Set_Paramater::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

}

