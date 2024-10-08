#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlCharacterTidy

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_BtlCharacterTidy.BP_BtlCharacterTidy_C.ExecuteUbergraph_BP_BtlCharacterTidy
// 0x0018 (0x0018 - 0x0000)
struct BP_BtlCharacterTidy_C_ExecuteUbergraph_BP_BtlCharacterTidy final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MinTime;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MaxTime;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BtlCharacterTidy_C_ExecuteUbergraph_BP_BtlCharacterTidy) == 0x000004, "Wrong alignment on BP_BtlCharacterTidy_C_ExecuteUbergraph_BP_BtlCharacterTidy");
static_assert(sizeof(BP_BtlCharacterTidy_C_ExecuteUbergraph_BP_BtlCharacterTidy) == 0x000018, "Wrong size on BP_BtlCharacterTidy_C_ExecuteUbergraph_BP_BtlCharacterTidy");
static_assert(offsetof(BP_BtlCharacterTidy_C_ExecuteUbergraph_BP_BtlCharacterTidy, EntryPoint) == 0x000000, "Member 'BP_BtlCharacterTidy_C_ExecuteUbergraph_BP_BtlCharacterTidy::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BtlCharacterTidy_C_ExecuteUbergraph_BP_BtlCharacterTidy, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_BtlCharacterTidy_C_ExecuteUbergraph_BP_BtlCharacterTidy::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_BtlCharacterTidy_C_ExecuteUbergraph_BP_BtlCharacterTidy, CallFunc_Add_FloatFloat_ReturnValue) == 0x000008, "Member 'BP_BtlCharacterTidy_C_ExecuteUbergraph_BP_BtlCharacterTidy::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlCharacterTidy_C_ExecuteUbergraph_BP_BtlCharacterTidy, CallFunc_GetTimeRange_MinTime) == 0x00000C, "Member 'BP_BtlCharacterTidy_C_ExecuteUbergraph_BP_BtlCharacterTidy::CallFunc_GetTimeRange_MinTime' has a wrong offset!");
static_assert(offsetof(BP_BtlCharacterTidy_C_ExecuteUbergraph_BP_BtlCharacterTidy, CallFunc_GetTimeRange_MaxTime) == 0x000010, "Member 'BP_BtlCharacterTidy_C_ExecuteUbergraph_BP_BtlCharacterTidy::CallFunc_GetTimeRange_MaxTime' has a wrong offset!");
static_assert(offsetof(BP_BtlCharacterTidy_C_ExecuteUbergraph_BP_BtlCharacterTidy, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000014, "Member 'BP_BtlCharacterTidy_C_ExecuteUbergraph_BP_BtlCharacterTidy::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_BtlCharacterTidy.BP_BtlCharacterTidy_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_BtlCharacterTidy_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BtlCharacterTidy_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_BtlCharacterTidy_C_ReceiveTick");
static_assert(sizeof(BP_BtlCharacterTidy_C_ReceiveTick) == 0x000004, "Wrong size on BP_BtlCharacterTidy_C_ReceiveTick");
static_assert(offsetof(BP_BtlCharacterTidy_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_BtlCharacterTidy_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_BtlCharacterTidy.BP_BtlCharacterTidy_C.GetTargetShakePos
// 0x0024 (0x0024 - 0x0000)
struct BP_BtlCharacterTidy_C_GetTargetShakePos final
{
public:
	struct FVector                                Positon;                                           // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Pos;                                               // 0x000C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetVectorValue_ReturnValue;               // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BtlCharacterTidy_C_GetTargetShakePos) == 0x000004, "Wrong alignment on BP_BtlCharacterTidy_C_GetTargetShakePos");
static_assert(sizeof(BP_BtlCharacterTidy_C_GetTargetShakePos) == 0x000024, "Wrong size on BP_BtlCharacterTidy_C_GetTargetShakePos");
static_assert(offsetof(BP_BtlCharacterTidy_C_GetTargetShakePos, Positon) == 0x000000, "Member 'BP_BtlCharacterTidy_C_GetTargetShakePos::Positon' has a wrong offset!");
static_assert(offsetof(BP_BtlCharacterTidy_C_GetTargetShakePos, Pos) == 0x00000C, "Member 'BP_BtlCharacterTidy_C_GetTargetShakePos::Pos' has a wrong offset!");
static_assert(offsetof(BP_BtlCharacterTidy_C_GetTargetShakePos, CallFunc_GetVectorValue_ReturnValue) == 0x000018, "Member 'BP_BtlCharacterTidy_C_GetTargetShakePos::CallFunc_GetVectorValue_ReturnValue' has a wrong offset!");

}

