#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlPhaseResult

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Xrd777_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BtlPhaseResult.BP_BtlPhaseResult_C
// 0x0030 (0x05B0 - 0x0580)
class ABP_BtlPhaseResult_C final : public ABtlPhaseResult
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0580(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0588(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_BtlCameraManagerComponent_C*        CameraManager;                                     // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_BtlEnvironment_C*                   BtlEnviroment;                                     // 0x0598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_BtlEvent_C*                         BtlEvent;                                          // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBtlCoreComponent*                      Core;                                              // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BtlPhaseResult(int32 EntryPoint);
	void OnRequestReleaseResource______0();
	void OnRequestSkipResult______0();
	void CreatePhaseVictory();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void SetVictoryParameter(class UBP_BtlCameraManagerComponent_C* CameraManager_0, class UBtlCoreComponent* BtlCore_0, class UBP_BtlEnvironment_C* Enviroment, class UBP_BtlEvent_C* Event);
	class ABtlPhase* GetNextPhaseInBP();

	bool CheckProgressNextPhaseInBP() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BtlPhaseResult_C">();
	}
	static class ABP_BtlPhaseResult_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BtlPhaseResult_C>();
	}
};
static_assert(alignof(ABP_BtlPhaseResult_C) == 0x000008, "Wrong alignment on ABP_BtlPhaseResult_C");
static_assert(sizeof(ABP_BtlPhaseResult_C) == 0x0005B0, "Wrong size on ABP_BtlPhaseResult_C");
static_assert(offsetof(ABP_BtlPhaseResult_C, UberGraphFrame) == 0x000580, "Member 'ABP_BtlPhaseResult_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseResult_C, DefaultSceneRoot) == 0x000588, "Member 'ABP_BtlPhaseResult_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseResult_C, CameraManager) == 0x000590, "Member 'ABP_BtlPhaseResult_C::CameraManager' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseResult_C, BtlEnviroment) == 0x000598, "Member 'ABP_BtlPhaseResult_C::BtlEnviroment' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseResult_C, BtlEvent) == 0x0005A0, "Member 'ABP_BtlPhaseResult_C::BtlEvent' has a wrong offset!");
static_assert(offsetof(ABP_BtlPhaseResult_C, Core) == 0x0005A8, "Member 'ABP_BtlPhaseResult_C::Core' has a wrong offset!");

}
