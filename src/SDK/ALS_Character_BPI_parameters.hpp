#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALS_Character_BPI

#include "Basic.hpp"

#include "ALS_OverlayState_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ALS_ViewMode_structs.hpp"
#include "ALS_Gait_structs.hpp"
#include "ALS_RotationMode_structs.hpp"
#include "ALS_MovementState_structs.hpp"
#include "ALS_MovementAction_structs.hpp"
#include "Engine_structs.hpp"
#include "ALS_Stance_structs.hpp"


namespace SDK::Params
{

// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Get_CurrentStates
// 0x0009 (0x0009 - 0x0000)
struct ALS_Character_BPI_C_BPI_Get_CurrentStates final
{
public:
	EMovementMode                                 PawnMovementMode;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_MovementState                            MovementState;                                     // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_MovementState                            PrevMovementState;                                 // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_MovementAction                           MovementAction;                                    // 0x0003(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_RotationMode                             RotationMode;                                      // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_Gait                                     ActualGait;                                        // 0x0005(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_Stance                                   ActualStance;                                      // 0x0006(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_ViewMode                                 ViewMode;                                          // 0x0007(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EALS_OverlayState                             OverlayState;                                      // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALS_Character_BPI_C_BPI_Get_CurrentStates) == 0x000001, "Wrong alignment on ALS_Character_BPI_C_BPI_Get_CurrentStates");
static_assert(sizeof(ALS_Character_BPI_C_BPI_Get_CurrentStates) == 0x000009, "Wrong size on ALS_Character_BPI_C_BPI_Get_CurrentStates");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Get_CurrentStates, PawnMovementMode) == 0x000000, "Member 'ALS_Character_BPI_C_BPI_Get_CurrentStates::PawnMovementMode' has a wrong offset!");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Get_CurrentStates, MovementState) == 0x000001, "Member 'ALS_Character_BPI_C_BPI_Get_CurrentStates::MovementState' has a wrong offset!");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Get_CurrentStates, PrevMovementState) == 0x000002, "Member 'ALS_Character_BPI_C_BPI_Get_CurrentStates::PrevMovementState' has a wrong offset!");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Get_CurrentStates, MovementAction) == 0x000003, "Member 'ALS_Character_BPI_C_BPI_Get_CurrentStates::MovementAction' has a wrong offset!");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Get_CurrentStates, RotationMode) == 0x000004, "Member 'ALS_Character_BPI_C_BPI_Get_CurrentStates::RotationMode' has a wrong offset!");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Get_CurrentStates, ActualGait) == 0x000005, "Member 'ALS_Character_BPI_C_BPI_Get_CurrentStates::ActualGait' has a wrong offset!");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Get_CurrentStates, ActualStance) == 0x000006, "Member 'ALS_Character_BPI_C_BPI_Get_CurrentStates::ActualStance' has a wrong offset!");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Get_CurrentStates, ViewMode) == 0x000007, "Member 'ALS_Character_BPI_C_BPI_Get_CurrentStates::ViewMode' has a wrong offset!");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Get_CurrentStates, OverlayState) == 0x000008, "Member 'ALS_Character_BPI_C_BPI_Get_CurrentStates::OverlayState' has a wrong offset!");

// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Get_EssentialValues
// 0x0040 (0x0040 - 0x0000)
struct ALS_Character_BPI_C_BPI_Get_EssentialValues final
{
public:
	struct FVector                                Velocity;                                          // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Acceleration;                                      // 0x000C(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MovementInput;                                     // 0x0018(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMoving;                                          // 0x0024(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          HasMovementInput;                                  // 0x0025(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Speed;                                             // 0x0028(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MovementInputAmount;                               // 0x002C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               AimingRotation;                                    // 0x0030(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         AimYawRate;                                        // 0x003C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALS_Character_BPI_C_BPI_Get_EssentialValues) == 0x000004, "Wrong alignment on ALS_Character_BPI_C_BPI_Get_EssentialValues");
static_assert(sizeof(ALS_Character_BPI_C_BPI_Get_EssentialValues) == 0x000040, "Wrong size on ALS_Character_BPI_C_BPI_Get_EssentialValues");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Get_EssentialValues, Velocity) == 0x000000, "Member 'ALS_Character_BPI_C_BPI_Get_EssentialValues::Velocity' has a wrong offset!");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Get_EssentialValues, Acceleration) == 0x00000C, "Member 'ALS_Character_BPI_C_BPI_Get_EssentialValues::Acceleration' has a wrong offset!");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Get_EssentialValues, MovementInput) == 0x000018, "Member 'ALS_Character_BPI_C_BPI_Get_EssentialValues::MovementInput' has a wrong offset!");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Get_EssentialValues, IsMoving) == 0x000024, "Member 'ALS_Character_BPI_C_BPI_Get_EssentialValues::IsMoving' has a wrong offset!");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Get_EssentialValues, HasMovementInput) == 0x000025, "Member 'ALS_Character_BPI_C_BPI_Get_EssentialValues::HasMovementInput' has a wrong offset!");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Get_EssentialValues, Speed) == 0x000028, "Member 'ALS_Character_BPI_C_BPI_Get_EssentialValues::Speed' has a wrong offset!");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Get_EssentialValues, MovementInputAmount) == 0x00002C, "Member 'ALS_Character_BPI_C_BPI_Get_EssentialValues::MovementInputAmount' has a wrong offset!");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Get_EssentialValues, AimingRotation) == 0x000030, "Member 'ALS_Character_BPI_C_BPI_Get_EssentialValues::AimingRotation' has a wrong offset!");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Get_EssentialValues, AimYawRate) == 0x00003C, "Member 'ALS_Character_BPI_C_BPI_Get_EssentialValues::AimYawRate' has a wrong offset!");

// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_MovementState
// 0x0001 (0x0001 - 0x0000)
struct ALS_Character_BPI_C_BPI_Set_MovementState final
{
public:
	EALS_MovementState                            NewMovementState;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALS_Character_BPI_C_BPI_Set_MovementState) == 0x000001, "Wrong alignment on ALS_Character_BPI_C_BPI_Set_MovementState");
static_assert(sizeof(ALS_Character_BPI_C_BPI_Set_MovementState) == 0x000001, "Wrong size on ALS_Character_BPI_C_BPI_Set_MovementState");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Set_MovementState, NewMovementState) == 0x000000, "Member 'ALS_Character_BPI_C_BPI_Set_MovementState::NewMovementState' has a wrong offset!");

// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_MovementAction
// 0x0001 (0x0001 - 0x0000)
struct ALS_Character_BPI_C_BPI_Set_MovementAction final
{
public:
	EALS_MovementAction                           NewMovementAction;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALS_Character_BPI_C_BPI_Set_MovementAction) == 0x000001, "Wrong alignment on ALS_Character_BPI_C_BPI_Set_MovementAction");
static_assert(sizeof(ALS_Character_BPI_C_BPI_Set_MovementAction) == 0x000001, "Wrong size on ALS_Character_BPI_C_BPI_Set_MovementAction");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Set_MovementAction, NewMovementAction) == 0x000000, "Member 'ALS_Character_BPI_C_BPI_Set_MovementAction::NewMovementAction' has a wrong offset!");

// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_RotationMode
// 0x0001 (0x0001 - 0x0000)
struct ALS_Character_BPI_C_BPI_Set_RotationMode final
{
public:
	EALS_RotationMode                             NewRotationMode;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALS_Character_BPI_C_BPI_Set_RotationMode) == 0x000001, "Wrong alignment on ALS_Character_BPI_C_BPI_Set_RotationMode");
static_assert(sizeof(ALS_Character_BPI_C_BPI_Set_RotationMode) == 0x000001, "Wrong size on ALS_Character_BPI_C_BPI_Set_RotationMode");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Set_RotationMode, NewRotationMode) == 0x000000, "Member 'ALS_Character_BPI_C_BPI_Set_RotationMode::NewRotationMode' has a wrong offset!");

// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_Gait
// 0x0001 (0x0001 - 0x0000)
struct ALS_Character_BPI_C_BPI_Set_Gait final
{
public:
	EALS_Gait                                     NewGait;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALS_Character_BPI_C_BPI_Set_Gait) == 0x000001, "Wrong alignment on ALS_Character_BPI_C_BPI_Set_Gait");
static_assert(sizeof(ALS_Character_BPI_C_BPI_Set_Gait) == 0x000001, "Wrong size on ALS_Character_BPI_C_BPI_Set_Gait");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Set_Gait, NewGait) == 0x000000, "Member 'ALS_Character_BPI_C_BPI_Set_Gait::NewGait' has a wrong offset!");

// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_ViewMode
// 0x0001 (0x0001 - 0x0000)
struct ALS_Character_BPI_C_BPI_Set_ViewMode final
{
public:
	EALS_ViewMode                                 NewViewMode;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALS_Character_BPI_C_BPI_Set_ViewMode) == 0x000001, "Wrong alignment on ALS_Character_BPI_C_BPI_Set_ViewMode");
static_assert(sizeof(ALS_Character_BPI_C_BPI_Set_ViewMode) == 0x000001, "Wrong size on ALS_Character_BPI_C_BPI_Set_ViewMode");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Set_ViewMode, NewViewMode) == 0x000000, "Member 'ALS_Character_BPI_C_BPI_Set_ViewMode::NewViewMode' has a wrong offset!");

// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_OverlayState
// 0x0001 (0x0001 - 0x0000)
struct ALS_Character_BPI_C_BPI_Set_OverlayState final
{
public:
	EALS_OverlayState                             NewOverlayState;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALS_Character_BPI_C_BPI_Set_OverlayState) == 0x000001, "Wrong alignment on ALS_Character_BPI_C_BPI_Set_OverlayState");
static_assert(sizeof(ALS_Character_BPI_C_BPI_Set_OverlayState) == 0x000001, "Wrong size on ALS_Character_BPI_C_BPI_Set_OverlayState");
static_assert(offsetof(ALS_Character_BPI_C_BPI_Set_OverlayState, NewOverlayState) == 0x000000, "Member 'ALS_Character_BPI_C_BPI_Set_OverlayState::NewOverlayState' has a wrong offset!");

}
