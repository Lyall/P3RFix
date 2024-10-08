#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_ModulerCharacterSet

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Enum_LocomotionState_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_ModulerCharacterSet.BPI_ModulerCharacterSet_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_ModulerCharacterSet_C final : public IInterface
{
public:
	void SetSinkingDistance(float SinkingDistance);
	void UnlinkPhysics();
	void LinkPhysics();
	void GetWalkRunBlend(float* OutWalkRunBlend, float* OutPreviousWalkRunBlend);
	void GetLocomotionState(Enum_LocomotionState* OutLocomotionState);
	void Set_No_Blink(bool Enable);
	void Set_Saccade(bool Enable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_ModulerCharacterSet_C">();
	}
	static class IBPI_ModulerCharacterSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_ModulerCharacterSet_C>();
	}
};
static_assert(alignof(IBPI_ModulerCharacterSet_C) == 0x000008, "Wrong alignment on IBPI_ModulerCharacterSet_C");
static_assert(sizeof(IBPI_ModulerCharacterSet_C) == 0x000028, "Wrong size on IBPI_ModulerCharacterSet_C");

}

