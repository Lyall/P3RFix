#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlgAssetPlugin

#include "Basic.hpp"

#include "PlgAssetPlugin_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class PlgAssetPlugin.PlgAsset
// 0x0010 (0x0038 - 0x0028)
class UPlgAsset final : public UObject
{
public:
	struct FPlgData                               PlgData;                                           // 0x0028(0x0010)(Edit, EditConst, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlgAsset">();
	}
	static class UPlgAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlgAsset>();
	}
};
static_assert(alignof(UPlgAsset) == 0x000008, "Wrong alignment on UPlgAsset");
static_assert(sizeof(UPlgAsset) == 0x000038, "Wrong size on UPlgAsset");
static_assert(offsetof(UPlgAsset, PlgData) == 0x000028, "Member 'UPlgAsset::PlgData' has a wrong offset!");

// Class PlgAssetPlugin.PlgPrimitiveComponent
// 0x0010 (0x0490 - 0x0480)
class UPlgPrimitiveComponent final : public UMeshComponent
{
public:
	class UPlgAsset*                              PlgAsset;                                          // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PlgPrimitiveNo;                                    // 0x0480(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_484[0xC];                                      // 0x0484(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlgPrimitiveComponent">();
	}
	static class UPlgPrimitiveComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlgPrimitiveComponent>();
	}
};
static_assert(alignof(UPlgPrimitiveComponent) == 0x000010, "Wrong alignment on UPlgPrimitiveComponent");
static_assert(sizeof(UPlgPrimitiveComponent) == 0x000490, "Wrong size on UPlgPrimitiveComponent");
static_assert(offsetof(UPlgPrimitiveComponent, PlgAsset) == 0x000478, "Member 'UPlgPrimitiveComponent::PlgAsset' has a wrong offset!");
static_assert(offsetof(UPlgPrimitiveComponent, PlgPrimitiveNo) == 0x000480, "Member 'UPlgPrimitiveComponent::PlgPrimitiveNo' has a wrong offset!");

}

