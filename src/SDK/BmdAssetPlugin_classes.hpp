#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BmdAssetPlugin

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class BmdAssetPlugin.BmdAsset
// 0x0010 (0x0038 - 0x0028)
class UBmdAsset final : public UObject
{
public:
	TArray<int8>                                  MBuf;                                              // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BmdAsset">();
	}
	static class UBmdAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBmdAsset>();
	}
};
static_assert(alignof(UBmdAsset) == 0x000008, "Wrong alignment on UBmdAsset");
static_assert(sizeof(UBmdAsset) == 0x000038, "Wrong size on UBmdAsset");
static_assert(offsetof(UBmdAsset, MBuf) == 0x000028, "Member 'UBmdAsset::MBuf' has a wrong offset!");

}
