#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AppKoromaru

#include "Basic.hpp"

#include "BP_AnimalBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AppKoromaru.BP_AppKoromaru_C
// 0x0020 (0x0680 - 0x0660)
#pragma pack(push, 0x1)
class alignas(0x10) ABP_AppKoromaru_C : public ABP_AnimalBase_C
{
public:
	uint8                                         Pad_655[0x3];                                      // 0x0655(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterSimpleLipsAnimAppComponent*   CharacterSimpleLipsAnimApp;                        // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharacterLipsyncAppComponent*          CharacterLipsyncApp;                               // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAppCharFootstepsAtom*                  FootstepsAtom;                                     // 0x0668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAppKoromaruComp*                       AppKoromaruComp;                                   // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AppKoromaru_C">();
	}
	static class ABP_AppKoromaru_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AppKoromaru_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ABP_AppKoromaru_C) == 0x000010, "Wrong alignment on ABP_AppKoromaru_C");
static_assert(sizeof(ABP_AppKoromaru_C) == 0x000680, "Wrong size on ABP_AppKoromaru_C");
static_assert(offsetof(ABP_AppKoromaru_C, CharacterSimpleLipsAnimApp) == 0x000658, "Member 'ABP_AppKoromaru_C::CharacterSimpleLipsAnimApp' has a wrong offset!");
static_assert(offsetof(ABP_AppKoromaru_C, CharacterLipsyncApp) == 0x000660, "Member 'ABP_AppKoromaru_C::CharacterLipsyncApp' has a wrong offset!");
static_assert(offsetof(ABP_AppKoromaru_C, FootstepsAtom) == 0x000668, "Member 'ABP_AppKoromaru_C::FootstepsAtom' has a wrong offset!");
static_assert(offsetof(ABP_AppKoromaru_C, AppKoromaruComp) == 0x000670, "Member 'ABP_AppKoromaru_C::AppKoromaruComp' has a wrong offset!");

}
