#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlSimpleTextureDraw

#include "Basic.hpp"

#include "Xrd777_structs.hpp"


namespace SDK::Params
{

// Function BP_BtlSimpleTextureDraw.BP_BtlSimpleTextureDraw_C.ExecuteUbergraph_BP_BtlSimpleTextureDraw
// 0x00A0 (0x00A0 - 0x0000)
struct BP_BtlSimpleTextureDraw_C_ExecuteUbergraph_BP_BtlSimpleTextureDraw final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBtlBlendState                         K2Node_MakeStruct_BtlBlendState;                   // 0x0004(0x0008)(NoDestructor)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBtlBlendState                         K2Node_MakeStruct_BtlBlendState_1;                 // 0x0010(0x0008)(NoDestructor)
	uint8                                         Pad_18[0x8];                                       // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBtlGuiDrawImage                       K2Node_MakeStruct_BtlGuiDrawImage;                 // 0x0020(0x0070)(NoDestructor)
	int32                                         CallFunc_CreateDrawImageByStruct_outID;            // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBtlGuiDrawObjectImage*                 CallFunc_CreateDrawImageByStruct_outItem;          // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BtlSimpleTextureDraw_C_ExecuteUbergraph_BP_BtlSimpleTextureDraw) == 0x000010, "Wrong alignment on BP_BtlSimpleTextureDraw_C_ExecuteUbergraph_BP_BtlSimpleTextureDraw");
static_assert(sizeof(BP_BtlSimpleTextureDraw_C_ExecuteUbergraph_BP_BtlSimpleTextureDraw) == 0x0000A0, "Wrong size on BP_BtlSimpleTextureDraw_C_ExecuteUbergraph_BP_BtlSimpleTextureDraw");
static_assert(offsetof(BP_BtlSimpleTextureDraw_C_ExecuteUbergraph_BP_BtlSimpleTextureDraw, EntryPoint) == 0x000000, "Member 'BP_BtlSimpleTextureDraw_C_ExecuteUbergraph_BP_BtlSimpleTextureDraw::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BtlSimpleTextureDraw_C_ExecuteUbergraph_BP_BtlSimpleTextureDraw, K2Node_MakeStruct_BtlBlendState) == 0x000004, "Member 'BP_BtlSimpleTextureDraw_C_ExecuteUbergraph_BP_BtlSimpleTextureDraw::K2Node_MakeStruct_BtlBlendState' has a wrong offset!");
static_assert(offsetof(BP_BtlSimpleTextureDraw_C_ExecuteUbergraph_BP_BtlSimpleTextureDraw, K2Node_Event_DeltaSeconds) == 0x00000C, "Member 'BP_BtlSimpleTextureDraw_C_ExecuteUbergraph_BP_BtlSimpleTextureDraw::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_BtlSimpleTextureDraw_C_ExecuteUbergraph_BP_BtlSimpleTextureDraw, K2Node_MakeStruct_BtlBlendState_1) == 0x000010, "Member 'BP_BtlSimpleTextureDraw_C_ExecuteUbergraph_BP_BtlSimpleTextureDraw::K2Node_MakeStruct_BtlBlendState_1' has a wrong offset!");
static_assert(offsetof(BP_BtlSimpleTextureDraw_C_ExecuteUbergraph_BP_BtlSimpleTextureDraw, K2Node_MakeStruct_BtlGuiDrawImage) == 0x000020, "Member 'BP_BtlSimpleTextureDraw_C_ExecuteUbergraph_BP_BtlSimpleTextureDraw::K2Node_MakeStruct_BtlGuiDrawImage' has a wrong offset!");
static_assert(offsetof(BP_BtlSimpleTextureDraw_C_ExecuteUbergraph_BP_BtlSimpleTextureDraw, CallFunc_CreateDrawImageByStruct_outID) == 0x000090, "Member 'BP_BtlSimpleTextureDraw_C_ExecuteUbergraph_BP_BtlSimpleTextureDraw::CallFunc_CreateDrawImageByStruct_outID' has a wrong offset!");
static_assert(offsetof(BP_BtlSimpleTextureDraw_C_ExecuteUbergraph_BP_BtlSimpleTextureDraw, CallFunc_CreateDrawImageByStruct_outItem) == 0x000098, "Member 'BP_BtlSimpleTextureDraw_C_ExecuteUbergraph_BP_BtlSimpleTextureDraw::CallFunc_CreateDrawImageByStruct_outItem' has a wrong offset!");

// Function BP_BtlSimpleTextureDraw.BP_BtlSimpleTextureDraw_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_BtlSimpleTextureDraw_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BtlSimpleTextureDraw_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_BtlSimpleTextureDraw_C_ReceiveTick");
static_assert(sizeof(BP_BtlSimpleTextureDraw_C_ReceiveTick) == 0x000004, "Wrong size on BP_BtlSimpleTextureDraw_C_ReceiveTick");
static_assert(offsetof(BP_BtlSimpleTextureDraw_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_BtlSimpleTextureDraw_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}
