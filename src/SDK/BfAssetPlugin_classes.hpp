#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BfAssetPlugin

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class BfAssetPlugin.BfAsset
// 0x0010 (0x0038 - 0x0028)
class UBfAsset final : public UObject
{
public:
	TArray<uint8>                                 MBuf;                                              // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BfAsset">();
	}
	static class UBfAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBfAsset>();
	}
};
static_assert(alignof(UBfAsset) == 0x000008, "Wrong alignment on UBfAsset");
static_assert(sizeof(UBfAsset) == 0x000038, "Wrong size on UBfAsset");
static_assert(offsetof(UBfAsset, MBuf) == 0x000028, "Member 'UBfAsset::MBuf' has a wrong offset!");

}
