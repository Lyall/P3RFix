#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlHitEffectEX

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_BtlHitEffectEX.BP_BtlHitEffectEX_C.ExecuteUbergraph_BP_BtlHitEffectEX
// 0x0050 (0x0050 - 0x0000)
struct BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         K2Node_DynamicCast_AsNiagara_System;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B[0x5];                                       // 0x002B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX) == 0x000008, "Wrong alignment on BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX");
static_assert(sizeof(BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX) == 0x000050, "Wrong size on BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX");
static_assert(offsetof(BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX, EntryPoint) == 0x000000, "Member 'BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX, Temp_object_Variable) == 0x000008, "Member 'BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX, K2Node_DynamicCast_AsNiagara_System) == 0x000010, "Member 'BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX::K2Node_DynamicCast_AsNiagara_System' has a wrong offset!");
static_assert(offsetof(BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX, K2Node_Event_DeltaSeconds) == 0x00001C, "Member 'BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000020, "Member 'BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000028, "Member 'BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x00002A, "Member 'BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX, K2Node_CustomEvent_Loaded) == 0x000030, "Member 'BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX, K2Node_CreateDelegate_OutputDelegate) == 0x00003C, "Member 'BP_BtlHitEffectEX_C_ExecuteUbergraph_BP_BtlHitEffectEX::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_BtlHitEffectEX.BP_BtlHitEffectEX_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_BtlHitEffectEX_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BtlHitEffectEX_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_BtlHitEffectEX_C_ReceiveTick");
static_assert(sizeof(BP_BtlHitEffectEX_C_ReceiveTick) == 0x000004, "Wrong size on BP_BtlHitEffectEX_C_ReceiveTick");
static_assert(offsetof(BP_BtlHitEffectEX_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_BtlHitEffectEX_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_BtlHitEffectEX.BP_BtlHitEffectEX_C.OnLoaded_CB5170E841E1DBFFA867F0BDA86E9CE7
// 0x0008 (0x0008 - 0x0000)
struct BP_BtlHitEffectEX_C_OnLoaded_CB5170E841E1DBFFA867F0BDA86E9CE7 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BtlHitEffectEX_C_OnLoaded_CB5170E841E1DBFFA867F0BDA86E9CE7) == 0x000008, "Wrong alignment on BP_BtlHitEffectEX_C_OnLoaded_CB5170E841E1DBFFA867F0BDA86E9CE7");
static_assert(sizeof(BP_BtlHitEffectEX_C_OnLoaded_CB5170E841E1DBFFA867F0BDA86E9CE7) == 0x000008, "Wrong size on BP_BtlHitEffectEX_C_OnLoaded_CB5170E841E1DBFFA867F0BDA86E9CE7");
static_assert(offsetof(BP_BtlHitEffectEX_C_OnLoaded_CB5170E841E1DBFFA867F0BDA86E9CE7, Loaded) == 0x000000, "Member 'BP_BtlHitEffectEX_C_OnLoaded_CB5170E841E1DBFFA867F0BDA86E9CE7::Loaded' has a wrong offset!");

}

