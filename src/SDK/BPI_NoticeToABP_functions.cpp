#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_NoticeToABP

#include "Basic.hpp"

#include "BPI_NoticeToABP_classes.hpp"


namespace SDK
{

// Function BPI_NoticeToABP.BPI_NoticeToABP_C.LoadEnd_ABP
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_NoticeToABP_C::LoadEnd_ABP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_NoticeToABP_C", "LoadEnd_ABP");

	UObject::ProcessEvent(Func, nullptr);
}

}
