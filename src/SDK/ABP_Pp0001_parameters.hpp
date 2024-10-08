#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Pp0001

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABP_Pp0001.ABP_Pp0001_C.ExecuteUbergraph_ABP_Pp0001
// 0x0004 (0x0004 - 0x0000)
struct ABP_Pp0001_C_ExecuteUbergraph_ABP_Pp0001 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABP_Pp0001_C_ExecuteUbergraph_ABP_Pp0001) == 0x000004, "Wrong alignment on ABP_Pp0001_C_ExecuteUbergraph_ABP_Pp0001");
static_assert(sizeof(ABP_Pp0001_C_ExecuteUbergraph_ABP_Pp0001) == 0x000004, "Wrong size on ABP_Pp0001_C_ExecuteUbergraph_ABP_Pp0001");
static_assert(offsetof(ABP_Pp0001_C_ExecuteUbergraph_ABP_Pp0001, EntryPoint) == 0x000000, "Member 'ABP_Pp0001_C_ExecuteUbergraph_ABP_Pp0001::EntryPoint' has a wrong offset!");

// Function ABP_Pp0001.ABP_Pp0001_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ABP_Pp0001_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABP_Pp0001_C_AnimGraph) == 0x000008, "Wrong alignment on ABP_Pp0001_C_AnimGraph");
static_assert(sizeof(ABP_Pp0001_C_AnimGraph) == 0x000010, "Wrong size on ABP_Pp0001_C_AnimGraph");
static_assert(offsetof(ABP_Pp0001_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'ABP_Pp0001_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}

