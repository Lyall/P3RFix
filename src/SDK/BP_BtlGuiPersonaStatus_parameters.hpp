#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlGuiPersonaStatus

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_BtlGuiPersonaStatus.BP_BtlGuiPersonaStatus_C.ExecuteUbergraph_BP_BtlGuiPersonaStatus
// 0x0128 (0x0128 - 0x0000)
struct BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_CheckPersonaChange_ReturnValue;           // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangePersonaStatusLeft_ReturnValue;      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ChangePersonaStatusRight_ReturnValue;     // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABtlActor*                              CallFunc_GetDispActor_ReturnValue;                 // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BtlGuiBaseActor_C*                  CallFunc_FindGUIActor_GuiActor;                    // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindGUIActor_sucsess;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABtlActor*>                      K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ReferenceParm)
	class ABP_BtlGuiCapture_C*                    K2Node_DynamicCast_AsBP_Btl_Gui_Capture;           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABtlActor*                              CallFunc_GetAction_ReturnValue;                    // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetID_ReturnValue;                        // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_2;       // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96[0x2];                                       // 0x0096(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_BtlGuiBaseActor_C*                  CallFunc_FindGUIActor_GuiActor_1;                  // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindGUIActor_sucsess_1;                   // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_BtlGuiCapture_C*                    K2Node_DynamicCast_AsBP_Btl_Gui_Capture_1;         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_flag;                                 // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B2[0x2];                                       // 0x00B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_param;                                // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABtlActor*>                      CallFunc_GetTargets_ReturnValue;                   // 0x00B8(0x0010)(ReferenceParm)
	TArray<class ABtlActor*>                      CallFunc_GetPlayerList_ReturnValue;                // 0x00C8(0x0010)(ReferenceParm)
	class ABtlActor*                              CallFunc_Array_Get_Item;                           // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABtlActor*                              CallFunc_GetAction_ReturnValue_1;                  // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckPersonaAlreadyChanged_ReturnValue;   // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x3];                                       // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_deltaTime;                            // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckPersonaCommentary_ReturnValue;       // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckPersonaSkillHelp_ReturnValue;        // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_3;       // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEndPersonaStatus_ReturnValue;           // 0x00FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_4;       // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_5;       // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckPersonaSkillHelp_ReturnValue_1;      // 0x00FE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FF[0x1];                                       // 0x00FF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0100(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0110(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus) == 0x000008, "Wrong alignment on BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus");
static_assert(sizeof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus) == 0x000128, "Wrong size on BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, EntryPoint) == 0x000000, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_CheckPersonaChange_ReturnValue) == 0x000024, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_CheckPersonaChange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000038, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_ChangePersonaStatusLeft_ReturnValue) == 0x000039, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_ChangePersonaStatusLeft_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_LessEqual_FloatFloat_ReturnValue_1) == 0x00003A, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_LessEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_ChangePersonaStatusRight_ReturnValue) == 0x00003B, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_ChangePersonaStatusRight_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, K2Node_CreateDelegate_OutputDelegate_3) == 0x00003C, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_BooleanOR_ReturnValue) == 0x00004C, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_GetDispActor_ReturnValue) == 0x000050, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_GetDispActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_FindGUIActor_GuiActor) == 0x000058, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_FindGUIActor_GuiActor' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_FindGUIActor_sucsess) == 0x000060, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_FindGUIActor_sucsess' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, K2Node_MakeArray_Array) == 0x000068, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, K2Node_DynamicCast_AsBP_Btl_Gui_Capture) == 0x000078, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::K2Node_DynamicCast_AsBP_Btl_Gui_Capture' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_GetAction_ReturnValue) == 0x000088, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_GetAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_GetID_ReturnValue) == 0x000090, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_GetID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000094, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_LessEqual_FloatFloat_ReturnValue_2) == 0x000095, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_LessEqual_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_FindGUIActor_GuiActor_1) == 0x000098, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_FindGUIActor_GuiActor_1' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_FindGUIActor_sucsess_1) == 0x0000A0, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_FindGUIActor_sucsess_1' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, K2Node_DynamicCast_AsBP_Btl_Gui_Capture_1) == 0x0000A8, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::K2Node_DynamicCast_AsBP_Btl_Gui_Capture_1' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, K2Node_DynamicCast_bSuccess_1) == 0x0000B0, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, K2Node_Event_flag) == 0x0000B1, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::K2Node_Event_flag' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, K2Node_Event_param) == 0x0000B4, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::K2Node_Event_param' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_GetTargets_ReturnValue) == 0x0000B8, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_GetTargets_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_GetPlayerList_ReturnValue) == 0x0000C8, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_GetPlayerList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_Array_Get_Item) == 0x0000D8, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_GetAction_ReturnValue_1) == 0x0000E0, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_GetAction_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_CheckPersonaAlreadyChanged_ReturnValue) == 0x0000E8, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_CheckPersonaAlreadyChanged_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, K2Node_Event_deltaTime) == 0x0000EC, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::K2Node_Event_deltaTime' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000F0, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_FMax_ReturnValue) == 0x0000F4, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_CheckPersonaCommentary_ReturnValue) == 0x0000F8, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_CheckPersonaCommentary_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_CheckPersonaSkillHelp_ReturnValue) == 0x0000F9, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_CheckPersonaSkillHelp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_LessEqual_FloatFloat_ReturnValue_3) == 0x0000FA, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_LessEqual_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_IsEndPersonaStatus_ReturnValue) == 0x0000FB, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_IsEndPersonaStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_LessEqual_FloatFloat_ReturnValue_4) == 0x0000FC, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_LessEqual_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_LessEqual_FloatFloat_ReturnValue_5) == 0x0000FD, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_LessEqual_FloatFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_CheckPersonaSkillHelp_ReturnValue_1) == 0x0000FE, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_CheckPersonaSkillHelp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, K2Node_CreateDelegate_OutputDelegate_4) == 0x000100, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, K2Node_CreateDelegate_OutputDelegate_5) == 0x000110, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000120, "Member 'BP_BtlGuiPersonaStatus_C_ExecuteUbergraph_BP_BtlGuiPersonaStatus::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_BtlGuiPersonaStatus.BP_BtlGuiPersonaStatus_C.GuiActorUpdate
// 0x0004 (0x0004 - 0x0000)
struct BP_BtlGuiPersonaStatus_C_GuiActorUpdate final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BtlGuiPersonaStatus_C_GuiActorUpdate) == 0x000004, "Wrong alignment on BP_BtlGuiPersonaStatus_C_GuiActorUpdate");
static_assert(sizeof(BP_BtlGuiPersonaStatus_C_GuiActorUpdate) == 0x000004, "Wrong size on BP_BtlGuiPersonaStatus_C_GuiActorUpdate");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_GuiActorUpdate, DeltaTime) == 0x000000, "Member 'BP_BtlGuiPersonaStatus_C_GuiActorUpdate::DeltaTime' has a wrong offset!");

// Function BP_BtlGuiPersonaStatus.BP_BtlGuiPersonaStatus_C.GuiActorStateInit
// 0x0008 (0x0008 - 0x0000)
struct BP_BtlGuiPersonaStatus_C_GuiActorStateInit final
{
public:
	bool                                          Flag;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BtlGuiPersonaStatus_C_GuiActorStateInit) == 0x000004, "Wrong alignment on BP_BtlGuiPersonaStatus_C_GuiActorStateInit");
static_assert(sizeof(BP_BtlGuiPersonaStatus_C_GuiActorStateInit) == 0x000008, "Wrong size on BP_BtlGuiPersonaStatus_C_GuiActorStateInit");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_GuiActorStateInit, Flag) == 0x000000, "Member 'BP_BtlGuiPersonaStatus_C_GuiActorStateInit::Flag' has a wrong offset!");
static_assert(offsetof(BP_BtlGuiPersonaStatus_C_GuiActorStateInit, Param) == 0x000004, "Member 'BP_BtlGuiPersonaStatus_C_GuiActorStateInit::Param' has a wrong offset!");

}
