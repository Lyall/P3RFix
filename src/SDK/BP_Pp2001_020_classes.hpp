#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Pp2001_020

#include "Basic.hpp"

#include "BP_Pp2001_TarotCardBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Pp2001_020.BP_Pp2001_020_C
// 0x0000 (0x0318 - 0x0318)
class ABP_Pp2001_020_C final : public ABP_Pp2001_TarotCardBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Pp2001_020_C">();
	}
	static class ABP_Pp2001_020_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Pp2001_020_C>();
	}
};
static_assert(alignof(ABP_Pp2001_020_C) == 0x000008, "Wrong alignment on ABP_Pp2001_020_C");
static_assert(sizeof(ABP_Pp2001_020_C) == 0x000318, "Wrong size on ABP_Pp2001_020_C");

}

