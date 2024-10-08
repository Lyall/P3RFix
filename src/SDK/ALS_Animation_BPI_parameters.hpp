#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALS_Animation_BPI

#include "Basic.hpp"

#include "GroundedEntryState_structs.hpp"


namespace SDK::Params
{

// Function ALS_Animation_BPI.ALS_Animation_BPI_C.BPI_SetGroundedEntryState
// 0x0001 (0x0001 - 0x0000)
struct ALS_Animation_BPI_C_BPI_SetGroundedEntryState final
{
public:
	EGroundedEntryState                           GroundedEntryState;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALS_Animation_BPI_C_BPI_SetGroundedEntryState) == 0x000001, "Wrong alignment on ALS_Animation_BPI_C_BPI_SetGroundedEntryState");
static_assert(sizeof(ALS_Animation_BPI_C_BPI_SetGroundedEntryState) == 0x000001, "Wrong size on ALS_Animation_BPI_C_BPI_SetGroundedEntryState");
static_assert(offsetof(ALS_Animation_BPI_C_BPI_SetGroundedEntryState, GroundedEntryState) == 0x000000, "Member 'ALS_Animation_BPI_C_BPI_SetGroundedEntryState::GroundedEntryState' has a wrong offset!");

// Function ALS_Animation_BPI.ALS_Animation_BPI_C.BPI_SetOverlayOverrideState
// 0x0004 (0x0004 - 0x0000)
struct ALS_Animation_BPI_C_BPI_SetOverlayOverrideState final
{
public:
	int32                                         OverlayOverrideState;                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALS_Animation_BPI_C_BPI_SetOverlayOverrideState) == 0x000004, "Wrong alignment on ALS_Animation_BPI_C_BPI_SetOverlayOverrideState");
static_assert(sizeof(ALS_Animation_BPI_C_BPI_SetOverlayOverrideState) == 0x000004, "Wrong size on ALS_Animation_BPI_C_BPI_SetOverlayOverrideState");
static_assert(offsetof(ALS_Animation_BPI_C_BPI_SetOverlayOverrideState, OverlayOverrideState) == 0x000000, "Member 'ALS_Animation_BPI_C_BPI_SetOverlayOverrideState::OverlayOverrideState' has a wrong offset!");

}

