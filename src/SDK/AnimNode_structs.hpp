#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNode

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct AnimNode.AnimNode_TEST
// 0x0010 (0x0020 - 0x0010)
struct FAnimNode_TEST final : public FAnimNode_Base
{
public:
	struct FPoseLink                              SourcePose;                                        // 0x0010(0x0010)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAnimNode_TEST) == 0x000008, "Wrong alignment on FAnimNode_TEST");
static_assert(sizeof(FAnimNode_TEST) == 0x000020, "Wrong size on FAnimNode_TEST");
static_assert(offsetof(FAnimNode_TEST, SourcePose) == 0x000010, "Member 'FAnimNode_TEST::SourcePose' has a wrong offset!");

}

