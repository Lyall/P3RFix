#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AppCharacter

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_AppCharacter.BP_AppCharacter_C.ExecuteUbergraph_BP_AppCharacter
// 0x0024 (0x0024 - 0x0000)
struct BP_AppCharacter_C_ExecuteUbergraph_BP_AppCharacter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_AppCharacter_C_ExecuteUbergraph_BP_AppCharacter) == 0x000004, "Wrong alignment on BP_AppCharacter_C_ExecuteUbergraph_BP_AppCharacter");
static_assert(sizeof(BP_AppCharacter_C_ExecuteUbergraph_BP_AppCharacter) == 0x000024, "Wrong size on BP_AppCharacter_C_ExecuteUbergraph_BP_AppCharacter");
static_assert(offsetof(BP_AppCharacter_C_ExecuteUbergraph_BP_AppCharacter, EntryPoint) == 0x000000, "Member 'BP_AppCharacter_C_ExecuteUbergraph_BP_AppCharacter::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AppCharacter_C_ExecuteUbergraph_BP_AppCharacter, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_AppCharacter_C_ExecuteUbergraph_BP_AppCharacter::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AppCharacter_C_ExecuteUbergraph_BP_AppCharacter, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BP_AppCharacter_C_ExecuteUbergraph_BP_AppCharacter::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function BP_AppCharacter.BP_AppCharacter_C.ResetIK
// 0x0018 (0x0018 - 0x0000)
struct BP_AppCharacter_C_ResetIK final
{
public:
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UABP_CH_MeshBase_C*                     K2Node_DynamicCast_AsABP_CH_Mesh_Base;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AppCharacter_C_ResetIK) == 0x000008, "Wrong alignment on BP_AppCharacter_C_ResetIK");
static_assert(sizeof(BP_AppCharacter_C_ResetIK) == 0x000018, "Wrong size on BP_AppCharacter_C_ResetIK");
static_assert(offsetof(BP_AppCharacter_C_ResetIK, CallFunc_GetAnimInstance_ReturnValue) == 0x000000, "Member 'BP_AppCharacter_C_ResetIK::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AppCharacter_C_ResetIK, K2Node_DynamicCast_AsABP_CH_Mesh_Base) == 0x000008, "Member 'BP_AppCharacter_C_ResetIK::K2Node_DynamicCast_AsABP_CH_Mesh_Base' has a wrong offset!");
static_assert(offsetof(BP_AppCharacter_C_ResetIK, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_AppCharacter_C_ResetIK::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_AppCharacter.BP_AppCharacter_C.UnlinkPhysics
// 0x0028 (0x0028 - 0x0000)
struct BP_AppCharacter_C_UnlinkPhysics final
{
public:
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UABP_CH_MeshBase_C*                     K2Node_DynamicCast_AsABP_CH_Mesh_Base;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_ModulerCharacterSet_C> CallFunc_UnlinkPhysics_self_CastInput;             // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AppCharacter_C_UnlinkPhysics) == 0x000008, "Wrong alignment on BP_AppCharacter_C_UnlinkPhysics");
static_assert(sizeof(BP_AppCharacter_C_UnlinkPhysics) == 0x000028, "Wrong size on BP_AppCharacter_C_UnlinkPhysics");
static_assert(offsetof(BP_AppCharacter_C_UnlinkPhysics, CallFunc_GetAnimInstance_ReturnValue) == 0x000000, "Member 'BP_AppCharacter_C_UnlinkPhysics::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AppCharacter_C_UnlinkPhysics, K2Node_DynamicCast_AsABP_CH_Mesh_Base) == 0x000008, "Member 'BP_AppCharacter_C_UnlinkPhysics::K2Node_DynamicCast_AsABP_CH_Mesh_Base' has a wrong offset!");
static_assert(offsetof(BP_AppCharacter_C_UnlinkPhysics, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_AppCharacter_C_UnlinkPhysics::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AppCharacter_C_UnlinkPhysics, CallFunc_UnlinkPhysics_self_CastInput) == 0x000018, "Member 'BP_AppCharacter_C_UnlinkPhysics::CallFunc_UnlinkPhysics_self_CastInput' has a wrong offset!");

}
