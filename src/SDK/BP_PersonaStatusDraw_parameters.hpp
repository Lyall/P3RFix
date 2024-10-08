#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PersonaStatusDraw

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PersonaStatusDraw.BP_PersonaStatusDraw_C.ExecuteUbergraph_BP_PersonaStatusDraw
// 0x0088 (0x0088 - 0x0000)
struct BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActorTickEnabled_ReturnValue;           // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(float Param1)>                 K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(float Param1)>                 K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(float Param1, float Param2)>   K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(float Param1)>                 K2Node_CreateDelegate_OutputDelegate_3;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               CallFunc_GetCaptureRenderTarget_ReturnValue;       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Sync_ReturnValue;                         // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_Param1_3;                       // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Param1_2;                       // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Param1_1;                       // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Param2;                         // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Param1;                         // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw) == 0x000008, "Wrong alignment on BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw");
static_assert(sizeof(BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw) == 0x000088, "Wrong size on BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw");
static_assert(offsetof(BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw, EntryPoint) == 0x000000, "Member 'BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw, CallFunc_IsActorTickEnabled_ReturnValue) == 0x000004, "Member 'BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw::CallFunc_IsActorTickEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw, K2Node_CreateDelegate_OutputDelegate_3) == 0x000038, "Member 'BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000048, "Member 'BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw, CallFunc_GetCaptureRenderTarget_ReturnValue) == 0x000050, "Member 'BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw::CallFunc_GetCaptureRenderTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw, K2Node_Event_DeltaSeconds) == 0x000058, "Member 'BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw, CallFunc_Sync_ReturnValue) == 0x00005C, "Member 'BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw::CallFunc_Sync_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000060, "Member 'BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw, K2Node_SwitchEnum_CmpSuccess) == 0x000070, "Member 'BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw, K2Node_CustomEvent_Param1_3) == 0x000074, "Member 'BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw::K2Node_CustomEvent_Param1_3' has a wrong offset!");
static_assert(offsetof(BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw, K2Node_CustomEvent_Param1_2) == 0x000078, "Member 'BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw::K2Node_CustomEvent_Param1_2' has a wrong offset!");
static_assert(offsetof(BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw, K2Node_CustomEvent_Param1_1) == 0x00007C, "Member 'BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw::K2Node_CustomEvent_Param1_1' has a wrong offset!");
static_assert(offsetof(BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw, K2Node_CustomEvent_Param2) == 0x000080, "Member 'BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw::K2Node_CustomEvent_Param2' has a wrong offset!");
static_assert(offsetof(BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw, K2Node_CustomEvent_Param1) == 0x000084, "Member 'BP_PersonaStatusDraw_C_ExecuteUbergraph_BP_PersonaStatusDraw::K2Node_CustomEvent_Param1' has a wrong offset!");

// Function BP_PersonaStatusDraw.BP_PersonaStatusDraw_C.OnSetBackgroundAlphaEvent
// 0x0004 (0x0004 - 0x0000)
struct BP_PersonaStatusDraw_C_OnSetBackgroundAlphaEvent final
{
public:
	float                                         Param1;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PersonaStatusDraw_C_OnSetBackgroundAlphaEvent) == 0x000004, "Wrong alignment on BP_PersonaStatusDraw_C_OnSetBackgroundAlphaEvent");
static_assert(sizeof(BP_PersonaStatusDraw_C_OnSetBackgroundAlphaEvent) == 0x000004, "Wrong size on BP_PersonaStatusDraw_C_OnSetBackgroundAlphaEvent");
static_assert(offsetof(BP_PersonaStatusDraw_C_OnSetBackgroundAlphaEvent, Param1) == 0x000000, "Member 'BP_PersonaStatusDraw_C_OnSetBackgroundAlphaEvent::Param1' has a wrong offset!");

// Function BP_PersonaStatusDraw.BP_PersonaStatusDraw_C.OnSetCausticsSlideEvent
// 0x0008 (0x0008 - 0x0000)
struct BP_PersonaStatusDraw_C_OnSetCausticsSlideEvent final
{
public:
	float                                         Param1;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Param2;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PersonaStatusDraw_C_OnSetCausticsSlideEvent) == 0x000004, "Wrong alignment on BP_PersonaStatusDraw_C_OnSetCausticsSlideEvent");
static_assert(sizeof(BP_PersonaStatusDraw_C_OnSetCausticsSlideEvent) == 0x000008, "Wrong size on BP_PersonaStatusDraw_C_OnSetCausticsSlideEvent");
static_assert(offsetof(BP_PersonaStatusDraw_C_OnSetCausticsSlideEvent, Param1) == 0x000000, "Member 'BP_PersonaStatusDraw_C_OnSetCausticsSlideEvent::Param1' has a wrong offset!");
static_assert(offsetof(BP_PersonaStatusDraw_C_OnSetCausticsSlideEvent, Param2) == 0x000004, "Member 'BP_PersonaStatusDraw_C_OnSetCausticsSlideEvent::Param2' has a wrong offset!");

// Function BP_PersonaStatusDraw.BP_PersonaStatusDraw_C.OnSetCausticsRectMaskScaleEvent
// 0x0004 (0x0004 - 0x0000)
struct BP_PersonaStatusDraw_C_OnSetCausticsRectMaskScaleEvent final
{
public:
	float                                         Param1;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PersonaStatusDraw_C_OnSetCausticsRectMaskScaleEvent) == 0x000004, "Wrong alignment on BP_PersonaStatusDraw_C_OnSetCausticsRectMaskScaleEvent");
static_assert(sizeof(BP_PersonaStatusDraw_C_OnSetCausticsRectMaskScaleEvent) == 0x000004, "Wrong size on BP_PersonaStatusDraw_C_OnSetCausticsRectMaskScaleEvent");
static_assert(offsetof(BP_PersonaStatusDraw_C_OnSetCausticsRectMaskScaleEvent, Param1) == 0x000000, "Member 'BP_PersonaStatusDraw_C_OnSetCausticsRectMaskScaleEvent::Param1' has a wrong offset!");

// Function BP_PersonaStatusDraw.BP_PersonaStatusDraw_C.OnSkillSelectListEvent
// 0x0004 (0x0004 - 0x0000)
struct BP_PersonaStatusDraw_C_OnSkillSelectListEvent final
{
public:
	float                                         Param1;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PersonaStatusDraw_C_OnSkillSelectListEvent) == 0x000004, "Wrong alignment on BP_PersonaStatusDraw_C_OnSkillSelectListEvent");
static_assert(sizeof(BP_PersonaStatusDraw_C_OnSkillSelectListEvent) == 0x000004, "Wrong size on BP_PersonaStatusDraw_C_OnSkillSelectListEvent");
static_assert(offsetof(BP_PersonaStatusDraw_C_OnSkillSelectListEvent, Param1) == 0x000000, "Member 'BP_PersonaStatusDraw_C_OnSkillSelectListEvent::Param1' has a wrong offset!");

// Function BP_PersonaStatusDraw.BP_PersonaStatusDraw_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PersonaStatusDraw_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PersonaStatusDraw_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PersonaStatusDraw_C_ReceiveTick");
static_assert(sizeof(BP_PersonaStatusDraw_C_ReceiveTick) == 0x000004, "Wrong size on BP_PersonaStatusDraw_C_ReceiveTick");
static_assert(offsetof(BP_PersonaStatusDraw_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PersonaStatusDraw_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

