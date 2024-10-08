#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AutoPlay

#include "Basic.hpp"


namespace SDK::Params
{

// Function AutoPlay.AutoPlayCommandServer.OnConnected
// 0x0008 (0x0008 - 0x0000)
struct AutoPlayCommandServer_OnConnected final
{
public:
	const class UAtlSocketBase*                   Socket;                                            // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlayCommandServer_OnConnected) == 0x000008, "Wrong alignment on AutoPlayCommandServer_OnConnected");
static_assert(sizeof(AutoPlayCommandServer_OnConnected) == 0x000008, "Wrong size on AutoPlayCommandServer_OnConnected");
static_assert(offsetof(AutoPlayCommandServer_OnConnected, Socket) == 0x000000, "Member 'AutoPlayCommandServer_OnConnected::Socket' has a wrong offset!");

// Function AutoPlay.AutoPlayCommandServer.OnDisconnected
// 0x0008 (0x0008 - 0x0000)
struct AutoPlayCommandServer_OnDisconnected final
{
public:
	const class UAtlSocketBase*                   Socket;                                            // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlayCommandServer_OnDisconnected) == 0x000008, "Wrong alignment on AutoPlayCommandServer_OnDisconnected");
static_assert(sizeof(AutoPlayCommandServer_OnDisconnected) == 0x000008, "Wrong size on AutoPlayCommandServer_OnDisconnected");
static_assert(offsetof(AutoPlayCommandServer_OnDisconnected, Socket) == 0x000000, "Member 'AutoPlayCommandServer_OnDisconnected::Socket' has a wrong offset!");

// Function AutoPlay.AutoPlayCommandServer.OnReceivedAsString
// 0x0018 (0x0018 - 0x0000)
struct AutoPlayCommandServer_OnReceivedAsString final
{
public:
	const class UAtlSocketBase*                   Socket;                                            // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Str;                                               // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(AutoPlayCommandServer_OnReceivedAsString) == 0x000008, "Wrong alignment on AutoPlayCommandServer_OnReceivedAsString");
static_assert(sizeof(AutoPlayCommandServer_OnReceivedAsString) == 0x000018, "Wrong size on AutoPlayCommandServer_OnReceivedAsString");
static_assert(offsetof(AutoPlayCommandServer_OnReceivedAsString, Socket) == 0x000000, "Member 'AutoPlayCommandServer_OnReceivedAsString::Socket' has a wrong offset!");
static_assert(offsetof(AutoPlayCommandServer_OnReceivedAsString, Str) == 0x000008, "Member 'AutoPlayCommandServer_OnReceivedAsString::Str' has a wrong offset!");

}

