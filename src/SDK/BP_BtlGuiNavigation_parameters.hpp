#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlGuiNavigation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Xrd777_structs.hpp"


namespace SDK::Params
{

// Function BP_BtlGuiNavigation.BP_BtlGuiNavigation_C.ExecuteUbergraph_BP_BtlGuiNavigation
// 0x0118 (0x0118 - 0x0000)
struct BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABtlActor*>                      CallFunc_GetTargetEnemyList_ReturnValue;           // 0x0018(0x0010)(ReferenceParm)
	TArray<class ABtlActor*>                      CallFunc_SortByList_OutList;                       // 0x0028(0x0010)(ReferenceParm)
	class ABP_BtlUIColorModel_C*                  CallFunc_GetUIColorModel_model;                    // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BtlGuiBaseActor_C*                  CallFunc_FindGUIActor_GuiActor;                    // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindGUIActor_sucsess;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_BtlGuiIcon_C*                       K2Node_DynamicCast_AsBP_Btl_Gui_Icon;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_BtlUIColorModel_C*                  CallFunc_GetUIColorModel_model_1;                  // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_flag;                                 // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_param;                                // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0080(0x0008)(NoDestructor, HasGetValueTypeHash)
	class ABtlActor*                              CallFunc_GetAction_ReturnValue;                    // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBtlGuiState                                  CallFunc_StartNavigation_state;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_StartNavigation_id;                       // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABtlActor*>                      CallFunc_StartNavigation_target;                   // 0x0098(0x0010)(ReferenceParm)
	int32                                         CallFunc_StartNavigation_personaID;                // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_StartNavigation_physical;                 // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_AE[0x2];                                       // 0x00AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ABtlActor*                              CallFunc_Array_Get_Item;                           // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABtlActor*                              CallFunc_Array_Get_Item_1;                         // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABtlActor*>                      K2Node_MakeArray_Array;                            // 0x00C0(0x0010)(ReferenceParm)
	TArray<class ABtlActor*>                      K2Node_MakeArray_Array_1;                          // 0x00D0(0x0010)(ReferenceParm)
	class ABtlActor*                              CallFunc_Array_Get_Item_2;                         // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABtlActor*                              CallFunc_Array_Get_Item_3;                         // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABtlActor*>                      K2Node_MakeArray_Array_2;                          // 0x00F0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10A[0x2];                                      // 0x010A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation) == 0x000008, "Wrong alignment on BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation");
static_assert(sizeof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation) == 0x000118, "Wrong size on BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, EntryPoint) == 0x000000, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_GetTargetEnemyList_ReturnValue) == 0x000018, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_GetTargetEnemyList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_SortByList_OutList) == 0x000028, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_SortByList_OutList' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_GetUIColorModel_model) == 0x000038, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_GetUIColorModel_model' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_FindGUIActor_GuiActor) == 0x000040, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_FindGUIActor_GuiActor' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_FindGUIActor_sucsess) == 0x000048, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_FindGUIActor_sucsess' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, K2Node_DynamicCast_AsBP_Btl_Gui_Icon) == 0x000050, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::K2Node_DynamicCast_AsBP_Btl_Gui_Icon' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_GetUIColorModel_model_1) == 0x000060, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_GetUIColorModel_model_1' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, K2Node_Event_flag) == 0x000068, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::K2Node_Event_flag' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, K2Node_Event_param) == 0x00006C, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::K2Node_Event_param' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000074, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_Add_FloatFloat_ReturnValue) == 0x000078, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000080, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_GetAction_ReturnValue) == 0x000088, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_GetAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_StartNavigation_state) == 0x000090, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_StartNavigation_state' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_StartNavigation_id) == 0x000094, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_StartNavigation_id' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_StartNavigation_target) == 0x000098, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_StartNavigation_target' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_StartNavigation_personaID) == 0x0000A8, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_StartNavigation_personaID' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_StartNavigation_physical) == 0x0000AC, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_StartNavigation_physical' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, K2Node_SwitchEnum_CmpSuccess) == 0x0000AD, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_Array_Get_Item_1) == 0x0000B8, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, K2Node_MakeArray_Array) == 0x0000C0, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, K2Node_MakeArray_Array_1) == 0x0000D0, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_Array_Get_Item_2) == 0x0000E0, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_Array_Get_Item_3) == 0x0000E8, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, K2Node_MakeArray_Array_2) == 0x0000F0, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_Array_Length_ReturnValue_1) == 0x000100, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_Array_Length_ReturnValue_2) == 0x000104, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_Greater_IntInt_ReturnValue) == 0x000108, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000109, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_Array_Length_ReturnValue_3) == 0x00010C, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000110, "Member 'BP_BtlGuiNavigation_C_ExecuteUbergraph_BP_BtlGuiNavigation::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");

// Function BP_BtlGuiNavigation.BP_BtlGuiNavigation_C.GuiActorStateInit
// 0x0008 (0x0008 - 0x0000)
struct BP_BtlGuiNavigation_C_GuiActorStateInit final
{
public:
	bool                                          Flag;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BtlGuiNavigation_C_GuiActorStateInit) == 0x000004, "Wrong alignment on BP_BtlGuiNavigation_C_GuiActorStateInit");
static_assert(sizeof(BP_BtlGuiNavigation_C_GuiActorStateInit) == 0x000008, "Wrong size on BP_BtlGuiNavigation_C_GuiActorStateInit");
static_assert(offsetof(BP_BtlGuiNavigation_C_GuiActorStateInit, Flag) == 0x000000, "Member 'BP_BtlGuiNavigation_C_GuiActorStateInit::Flag' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiNavigation_C_GuiActorStateInit, Param) == 0x000004, "Member 'BP_BtlGuiNavigation_C_GuiActorStateInit::Param' has a wrong offset!");

}
