#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlgAssetPlugin

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct PlgAssetPlugin.PlgPrimitiveData
// 0x0048 (0x0048 - 0x0000)
struct FPlgPrimitiveData final
{
public:
	TArray<struct FVector>                        Vertices;                                          // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<uint16>                                Indices;                                           // 0x0010(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<uint32>                                Colors;                                            // 0x0020(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	class FName                                   Name;                                              // 0x0030(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinX;                                              // 0x0038(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinY;                                              // 0x003C(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxX;                                              // 0x0040(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxY;                                              // 0x0044(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPlgPrimitiveData) == 0x000008, "Wrong alignment on FPlgPrimitiveData");
static_assert(sizeof(FPlgPrimitiveData) == 0x000048, "Wrong size on FPlgPrimitiveData");
static_assert(offsetof(FPlgPrimitiveData, Vertices) == 0x000000, "Member 'FPlgPrimitiveData::Vertices' has a wrong offset!");
static_assert(offsetof(FPlgPrimitiveData, Indices) == 0x000010, "Member 'FPlgPrimitiveData::Indices' has a wrong offset!");
static_assert(offsetof(FPlgPrimitiveData, Colors) == 0x000020, "Member 'FPlgPrimitiveData::Colors' has a wrong offset!");
static_assert(offsetof(FPlgPrimitiveData, Name) == 0x000030, "Member 'FPlgPrimitiveData::Name' has a wrong offset!");
static_assert(offsetof(FPlgPrimitiveData, MinX) == 0x000038, "Member 'FPlgPrimitiveData::MinX' has a wrong offset!");
static_assert(offsetof(FPlgPrimitiveData, MinY) == 0x00003C, "Member 'FPlgPrimitiveData::MinY' has a wrong offset!");
static_assert(offsetof(FPlgPrimitiveData, MaxX) == 0x000040, "Member 'FPlgPrimitiveData::MaxX' has a wrong offset!");
static_assert(offsetof(FPlgPrimitiveData, MaxY) == 0x000044, "Member 'FPlgPrimitiveData::MaxY' has a wrong offset!");

// ScriptStruct PlgAssetPlugin.PlgData
// 0x0010 (0x0010 - 0x0000)
struct FPlgData final
{
public:
	TArray<struct FPlgPrimitiveData>              PlgDatas;                                          // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPlgData) == 0x000008, "Wrong alignment on FPlgData");
static_assert(sizeof(FPlgData) == 0x000010, "Wrong size on FPlgData");
static_assert(offsetof(FPlgData, PlgDatas) == 0x000000, "Member 'FPlgData::PlgDatas' has a wrong offset!");

}
