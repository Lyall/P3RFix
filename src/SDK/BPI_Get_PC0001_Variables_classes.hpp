#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Get_PC0001_Variables

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_Get_PC0001_Variables.BPI_Get_PC0001_Variables_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_Get_PC0001_Variables_C final : public IInterface
{
public:
	void Is_EventPlayAndHaveBag(bool* Out_Result);
	void Get_ForceAttachPocket(bool* Out_ForceAttachPocket);
	void Get_IsAttachedBostonBag(bool* Out_IsAttachedBostonBag);
	void Get_NotUpdateAttachPocket(bool* Out_NotUpdateEnableAttachPocket);
	void Get_AttachPocketAlpha(float* Out_AttachPocket_L_Alpha, float* Out_AttachPocket_R_Alpha);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_Get_PC0001_Variables_C">();
	}
	static class IBPI_Get_PC0001_Variables_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_Get_PC0001_Variables_C>();
	}
};
static_assert(alignof(IBPI_Get_PC0001_Variables_C) == 0x000008, "Wrong alignment on IBPI_Get_PC0001_Variables_C");
static_assert(sizeof(IBPI_Get_PC0001_Variables_C) == 0x000028, "Wrong size on IBPI_Get_PC0001_Variables_C");

}
