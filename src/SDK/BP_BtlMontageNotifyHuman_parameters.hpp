#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlMontageNotifyHuman

#include "Basic.hpp"

#include "Xrd777_structs.hpp"


namespace SDK::Params
{

// Function BP_BtlMontageNotifyHuman.BP_BtlMontageNotifyHuman_C.GetNotifyName
// 0x0020 (0x0020 - 0x0000)
struct BP_BtlMontageNotifyHuman_C_GetNotifyName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BtlMontageNotifyHuman_C_GetNotifyName) == 0x000008, "Wrong alignment on BP_BtlMontageNotifyHuman_C_GetNotifyName");
static_assert(sizeof(BP_BtlMontageNotifyHuman_C_GetNotifyName) == 0x000020, "Wrong size on BP_BtlMontageNotifyHuman_C_GetNotifyName");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'BP_BtlMontageNotifyHuman_C_GetNotifyName::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetNotifyName, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000010, "Member 'BP_BtlMontageNotifyHuman_C_GetNotifyName::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");

// Function BP_BtlMontageNotifyHuman.BP_BtlMontageNotifyHuman_C.GetBattleNotifyName
// 0x00C0 (0x00C0 - 0x0000)
struct BP_BtlMontageNotifyHuman_C_GetBattleNotifyName final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Work;                                              // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetHitStrFromNotify_Str;                  // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E[0x2];                                       // 0x005E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Abs_Int_ReturnValue;                      // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue_1;          // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Get_Human_Notify_Notify_Name;             // 0x00B4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BtlMontageNotifyHuman_C_GetBattleNotifyName) == 0x000008, "Wrong alignment on BP_BtlMontageNotifyHuman_C_GetBattleNotifyName");
static_assert(sizeof(BP_BtlMontageNotifyHuman_C_GetBattleNotifyName) == 0x0000C0, "Wrong size on BP_BtlMontageNotifyHuman_C_GetBattleNotifyName");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetBattleNotifyName, ReturnValue) == 0x000000, "Member 'BP_BtlMontageNotifyHuman_C_GetBattleNotifyName::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetBattleNotifyName, Work) == 0x000008, "Member 'BP_BtlMontageNotifyHuman_C_GetBattleNotifyName::Work' has a wrong offset!");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetBattleNotifyName, CallFunc_Conv_NameToString_ReturnValue) == 0x000010, "Member 'BP_BtlMontageNotifyHuman_C_GetBattleNotifyName::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetBattleNotifyName, CallFunc_GetHitStrFromNotify_Str) == 0x000020, "Member 'BP_BtlMontageNotifyHuman_C_GetBattleNotifyName::CallFunc_GetHitStrFromNotify_Str' has a wrong offset!");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetBattleNotifyName, CallFunc_Concat_StrStr_ReturnValue) == 0x000030, "Member 'BP_BtlMontageNotifyHuman_C_GetBattleNotifyName::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetBattleNotifyName, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000040, "Member 'BP_BtlMontageNotifyHuman_C_GetBattleNotifyName::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetBattleNotifyName, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000050, "Member 'BP_BtlMontageNotifyHuman_C_GetBattleNotifyName::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetBattleNotifyName, CallFunc_Conv_StringToName_ReturnValue) == 0x000054, "Member 'BP_BtlMontageNotifyHuman_C_GetBattleNotifyName::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetBattleNotifyName, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00005C, "Member 'BP_BtlMontageNotifyHuman_C_GetBattleNotifyName::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetBattleNotifyName, CallFunc_BooleanOR_ReturnValue) == 0x00005D, "Member 'BP_BtlMontageNotifyHuman_C_GetBattleNotifyName::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetBattleNotifyName, CallFunc_Abs_Int_ReturnValue) == 0x000060, "Member 'BP_BtlMontageNotifyHuman_C_GetBattleNotifyName::CallFunc_Abs_Int_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetBattleNotifyName, CallFunc_Conv_IntToString_ReturnValue) == 0x000068, "Member 'BP_BtlMontageNotifyHuman_C_GetBattleNotifyName::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetBattleNotifyName, CallFunc_Conv_NameToString_ReturnValue_1) == 0x000078, "Member 'BP_BtlMontageNotifyHuman_C_GetBattleNotifyName::CallFunc_Conv_NameToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetBattleNotifyName, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000088, "Member 'BP_BtlMontageNotifyHuman_C_GetBattleNotifyName::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetBattleNotifyName, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000098, "Member 'BP_BtlMontageNotifyHuman_C_GetBattleNotifyName::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetBattleNotifyName, CallFunc_Conv_StringToName_ReturnValue_1) == 0x0000A8, "Member 'BP_BtlMontageNotifyHuman_C_GetBattleNotifyName::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetBattleNotifyName, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0000B0, "Member 'BP_BtlMontageNotifyHuman_C_GetBattleNotifyName::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetBattleNotifyName, CallFunc_Get_Human_Notify_Notify_Name) == 0x0000B4, "Member 'BP_BtlMontageNotifyHuman_C_GetBattleNotifyName::CallFunc_Get_Human_Notify_Notify_Name' has a wrong offset!");

// Function BP_BtlMontageNotifyHuman.BP_BtlMontageNotifyHuman_C.GetHitStrFromNotify
// 0x0030 (0x0030 - 0x0000)
struct BP_BtlMontageNotifyHuman_C_GetHitStrFromNotify final
{
public:
	EBtlAnimNotifyHitEffect                       HitType;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Str;                                               // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Get_Hit_Notify_Name_Notify_Name;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BtlMontageNotifyHuman_C_GetHitStrFromNotify) == 0x000008, "Wrong alignment on BP_BtlMontageNotifyHuman_C_GetHitStrFromNotify");
static_assert(sizeof(BP_BtlMontageNotifyHuman_C_GetHitStrFromNotify) == 0x000030, "Wrong size on BP_BtlMontageNotifyHuman_C_GetHitStrFromNotify");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetHitStrFromNotify, HitType) == 0x000000, "Member 'BP_BtlMontageNotifyHuman_C_GetHitStrFromNotify::HitType' has a wrong offset!");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetHitStrFromNotify, Str) == 0x000008, "Member 'BP_BtlMontageNotifyHuman_C_GetHitStrFromNotify::Str' has a wrong offset!");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetHitStrFromNotify, CallFunc_Get_Hit_Notify_Name_Notify_Name) == 0x000018, "Member 'BP_BtlMontageNotifyHuman_C_GetHitStrFromNotify::CallFunc_Get_Hit_Notify_Name_Notify_Name' has a wrong offset!");
static_assert(offsetof(BP_BtlMontageNotifyHuman_C_GetHitStrFromNotify, CallFunc_Conv_NameToString_ReturnValue) == 0x000020, "Member 'BP_BtlMontageNotifyHuman_C_GetHitStrFromNotify::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");

}
