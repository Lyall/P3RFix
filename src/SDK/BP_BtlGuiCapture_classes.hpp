#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlGuiCapture

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_BtlGuiBaseActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BtlGuiCapture.BP_BtlGuiCapture_C
// 0x0028 (0x0378 - 0x0350)
class ABP_BtlGuiCapture_C final : public ABP_BtlGuiBaseActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_BtlGuiCapture_C;                 // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBtlGuiResources*                       BtlGuiResources;                                   // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_BtlGuiSceneCapture2D_C*             PlayerCamera;                                      // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 PlayerTransformActor;                              // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InCuptureUpdate;                                   // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsUIColor;                                         // 0x0371(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseCapture;                                        // 0x0372(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_BtlGuiCapture(int32 EntryPoint);
	void GuiActorUpdate(float DeltaTime);
	void GuiActorBeginDestroy();
	void GuiActorBeginPlay();
	void CaptureUpdate();
	void SetCaptureEnable(bool Enable);
	void ClearShowActorList();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BtlGuiCapture_C">();
	}
	static class ABP_BtlGuiCapture_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BtlGuiCapture_C>();
	}
};
static_assert(alignof(ABP_BtlGuiCapture_C) == 0x000008, "Wrong alignment on ABP_BtlGuiCapture_C");
static_assert(sizeof(ABP_BtlGuiCapture_C) == 0x000378, "Wrong size on ABP_BtlGuiCapture_C");
static_assert(offsetof(ABP_BtlGuiCapture_C, UberGraphFrame_BP_BtlGuiCapture_C) == 0x000350, "Member 'ABP_BtlGuiCapture_C::UberGraphFrame_BP_BtlGuiCapture_C' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiCapture_C, BtlGuiResources) == 0x000358, "Member 'ABP_BtlGuiCapture_C::BtlGuiResources' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiCapture_C, PlayerCamera) == 0x000360, "Member 'ABP_BtlGuiCapture_C::PlayerCamera' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiCapture_C, PlayerTransformActor) == 0x000368, "Member 'ABP_BtlGuiCapture_C::PlayerTransformActor' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiCapture_C, InCuptureUpdate) == 0x000370, "Member 'ABP_BtlGuiCapture_C::InCuptureUpdate' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiCapture_C, IsUIColor) == 0x000371, "Member 'ABP_BtlGuiCapture_C::IsUIColor' has a wrong offset!");
static_assert(offsetof(ABP_BtlGuiCapture_C, UseCapture) == 0x000372, "Member 'ABP_BtlGuiCapture_C::UseCapture' has a wrong offset!");

}
