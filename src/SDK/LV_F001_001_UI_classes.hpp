#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LV_F001_001_UI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LV_F001_001_UI.LV_F001_001_UI_C
// 0x0080 (0x02A8 - 0x0228)
class ALV_F001_001_UI_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ACameraActor*                           __7StartCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty; // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_UITownMapCameraActor_C*             BP_UITownMapCameraActor_4_ExecuteUbergraph_LV_F001_001_UI_RefProperty; // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           __0MainCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty; // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           __1SchoolCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty; // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           __2DormitoryCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty; // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           __3PolonianmallCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty; // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           __4PortislandCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty; // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           __5IwatodayCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty; // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           __6NaganakiCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty; // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 __1SchoolLocator_ExecuteUbergraph_LV_F001_001_UI_RefProperty; // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 __2DormitoryLocator_ExecuteUbergraph_LV_F001_001_UI_RefProperty; // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 __3PolonianmallLocator_ExecuteUbergraph_LV_F001_001_UI_RefProperty; // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 __4PortislandCameraLocator_ExecuteUbergraph_LV_F001_001_UI_RefProperty; // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 __5IwatodaiLocator_ExecuteUbergraph_LV_F001_001_UI_RefProperty; // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 _6NaganakiLocator_ExecuteUbergraph_LV_F001_001_UI_RefProperty; // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LV_F001_001_UI(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LV_F001_001_UI_C">();
	}
	static class ALV_F001_001_UI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALV_F001_001_UI_C>();
	}
};
static_assert(alignof(ALV_F001_001_UI_C) == 0x000008, "Wrong alignment on ALV_F001_001_UI_C");
static_assert(sizeof(ALV_F001_001_UI_C) == 0x0002A8, "Wrong size on ALV_F001_001_UI_C");
static_assert(offsetof(ALV_F001_001_UI_C, UberGraphFrame) == 0x000228, "Member 'ALV_F001_001_UI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALV_F001_001_UI_C, __7StartCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty) == 0x000230, "Member 'ALV_F001_001_UI_C::__7StartCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty' has a wrong offset!");
static_assert(offsetof(ALV_F001_001_UI_C, BP_UITownMapCameraActor_4_ExecuteUbergraph_LV_F001_001_UI_RefProperty) == 0x000238, "Member 'ALV_F001_001_UI_C::BP_UITownMapCameraActor_4_ExecuteUbergraph_LV_F001_001_UI_RefProperty' has a wrong offset!");
static_assert(offsetof(ALV_F001_001_UI_C, __0MainCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty) == 0x000240, "Member 'ALV_F001_001_UI_C::__0MainCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty' has a wrong offset!");
static_assert(offsetof(ALV_F001_001_UI_C, __1SchoolCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty) == 0x000248, "Member 'ALV_F001_001_UI_C::__1SchoolCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty' has a wrong offset!");
static_assert(offsetof(ALV_F001_001_UI_C, __2DormitoryCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty) == 0x000250, "Member 'ALV_F001_001_UI_C::__2DormitoryCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty' has a wrong offset!");
static_assert(offsetof(ALV_F001_001_UI_C, __3PolonianmallCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty) == 0x000258, "Member 'ALV_F001_001_UI_C::__3PolonianmallCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty' has a wrong offset!");
static_assert(offsetof(ALV_F001_001_UI_C, __4PortislandCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty) == 0x000260, "Member 'ALV_F001_001_UI_C::__4PortislandCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty' has a wrong offset!");
static_assert(offsetof(ALV_F001_001_UI_C, __5IwatodayCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty) == 0x000268, "Member 'ALV_F001_001_UI_C::__5IwatodayCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty' has a wrong offset!");
static_assert(offsetof(ALV_F001_001_UI_C, __6NaganakiCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty) == 0x000270, "Member 'ALV_F001_001_UI_C::__6NaganakiCamera_ExecuteUbergraph_LV_F001_001_UI_RefProperty' has a wrong offset!");
static_assert(offsetof(ALV_F001_001_UI_C, __1SchoolLocator_ExecuteUbergraph_LV_F001_001_UI_RefProperty) == 0x000278, "Member 'ALV_F001_001_UI_C::__1SchoolLocator_ExecuteUbergraph_LV_F001_001_UI_RefProperty' has a wrong offset!");
static_assert(offsetof(ALV_F001_001_UI_C, __2DormitoryLocator_ExecuteUbergraph_LV_F001_001_UI_RefProperty) == 0x000280, "Member 'ALV_F001_001_UI_C::__2DormitoryLocator_ExecuteUbergraph_LV_F001_001_UI_RefProperty' has a wrong offset!");
static_assert(offsetof(ALV_F001_001_UI_C, __3PolonianmallLocator_ExecuteUbergraph_LV_F001_001_UI_RefProperty) == 0x000288, "Member 'ALV_F001_001_UI_C::__3PolonianmallLocator_ExecuteUbergraph_LV_F001_001_UI_RefProperty' has a wrong offset!");
static_assert(offsetof(ALV_F001_001_UI_C, __4PortislandCameraLocator_ExecuteUbergraph_LV_F001_001_UI_RefProperty) == 0x000290, "Member 'ALV_F001_001_UI_C::__4PortislandCameraLocator_ExecuteUbergraph_LV_F001_001_UI_RefProperty' has a wrong offset!");
static_assert(offsetof(ALV_F001_001_UI_C, __5IwatodaiLocator_ExecuteUbergraph_LV_F001_001_UI_RefProperty) == 0x000298, "Member 'ALV_F001_001_UI_C::__5IwatodaiLocator_ExecuteUbergraph_LV_F001_001_UI_RefProperty' has a wrong offset!");
static_assert(offsetof(ALV_F001_001_UI_C, _6NaganakiLocator_ExecuteUbergraph_LV_F001_001_UI_RefProperty) == 0x0002A0, "Member 'ALV_F001_001_UI_C::_6NaganakiLocator_ExecuteUbergraph_LV_F001_001_UI_RefProperty' has a wrong offset!");

}

