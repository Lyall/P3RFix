#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CampCharaModel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CampCharaModel.BP_CampCharaModel_C
// 0x0020 (0x04E0 - 0x04C0)
class ABP_CampCharaModel_C final : public ACharacter
{
public:
	uint8                                         Pad_4B8[0x8];                                      // 0x04B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 FaceMesh;                                          // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 HairMesh;                                          // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CostumeMesh;                                       // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_CampCharaModel(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CampCharaModel_C">();
	}
	static class ABP_CampCharaModel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CampCharaModel_C>();
	}
};
static_assert(alignof(ABP_CampCharaModel_C) == 0x000010, "Wrong alignment on ABP_CampCharaModel_C");
static_assert(sizeof(ABP_CampCharaModel_C) == 0x0004E0, "Wrong size on ABP_CampCharaModel_C");
static_assert(offsetof(ABP_CampCharaModel_C, UberGraphFrame) == 0x0004C0, "Member 'ABP_CampCharaModel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CampCharaModel_C, FaceMesh) == 0x0004C8, "Member 'ABP_CampCharaModel_C::FaceMesh' has a wrong offset!");
static_assert(offsetof(ABP_CampCharaModel_C, HairMesh) == 0x0004D0, "Member 'ABP_CampCharaModel_C::HairMesh' has a wrong offset!");
static_assert(offsetof(ABP_CampCharaModel_C, CostumeMesh) == 0x0004D8, "Member 'ABP_CampCharaModel_C::CostumeMesh' has a wrong offset!");

}
