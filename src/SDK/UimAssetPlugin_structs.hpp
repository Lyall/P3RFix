#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UimAssetPlugin

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct UimAssetPlugin.Uim2DVertex
// 0x0008 (0x0008 - 0x0000)
struct FUim2DVertex final
{
public:
	float                                         X;                                                 // 0x0000(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Y;                                                 // 0x0004(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FUim2DVertex) == 0x000004, "Wrong alignment on FUim2DVertex");
static_assert(sizeof(FUim2DVertex) == 0x000008, "Wrong size on FUim2DVertex");
static_assert(offsetof(FUim2DVertex, X) == 0x000000, "Member 'FUim2DVertex::X' has a wrong offset!");
static_assert(offsetof(FUim2DVertex, Y) == 0x000004, "Member 'FUim2DVertex::Y' has a wrong offset!");

// ScriptStruct UimAssetPlugin.Uim2DVertCol
// 0x000C (0x000C - 0x0000)
struct FUim2DVertCol final
{
public:
	float                                         X;                                                 // 0x0000(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Y;                                                 // 0x0004(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        Color;                                             // 0x0008(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FUim2DVertCol) == 0x000004, "Wrong alignment on FUim2DVertCol");
static_assert(sizeof(FUim2DVertCol) == 0x00000C, "Wrong size on FUim2DVertCol");
static_assert(offsetof(FUim2DVertCol, X) == 0x000000, "Member 'FUim2DVertCol::X' has a wrong offset!");
static_assert(offsetof(FUim2DVertCol, Y) == 0x000004, "Member 'FUim2DVertCol::Y' has a wrong offset!");
static_assert(offsetof(FUim2DVertCol, Color) == 0x000008, "Member 'FUim2DVertCol::Color' has a wrong offset!");

// ScriptStruct UimAssetPlugin.Uim2DVertColUV
// 0x0014 (0x0014 - 0x0000)
struct FUim2DVertColUV final
{
public:
	float                                         X;                                                 // 0x0000(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Y;                                                 // 0x0004(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        Color;                                             // 0x0008(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         U0;                                                // 0x000C(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         V0;                                                // 0x0010(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FUim2DVertColUV) == 0x000004, "Wrong alignment on FUim2DVertColUV");
static_assert(sizeof(FUim2DVertColUV) == 0x000014, "Wrong size on FUim2DVertColUV");
static_assert(offsetof(FUim2DVertColUV, X) == 0x000000, "Member 'FUim2DVertColUV::X' has a wrong offset!");
static_assert(offsetof(FUim2DVertColUV, Y) == 0x000004, "Member 'FUim2DVertColUV::Y' has a wrong offset!");
static_assert(offsetof(FUim2DVertColUV, Color) == 0x000008, "Member 'FUim2DVertColUV::Color' has a wrong offset!");
static_assert(offsetof(FUim2DVertColUV, U0) == 0x00000C, "Member 'FUim2DVertColUV::U0' has a wrong offset!");
static_assert(offsetof(FUim2DVertColUV, V0) == 0x000010, "Member 'FUim2DVertColUV::V0' has a wrong offset!");

// ScriptStruct UimAssetPlugin.Uim2DVertUV
// 0x0010 (0x0010 - 0x0000)
struct FUim2DVertUV final
{
public:
	float                                         X;                                                 // 0x0000(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Y;                                                 // 0x0004(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         U0;                                                // 0x0008(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         V0;                                                // 0x000C(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FUim2DVertUV) == 0x000004, "Wrong alignment on FUim2DVertUV");
static_assert(sizeof(FUim2DVertUV) == 0x000010, "Wrong size on FUim2DVertUV");
static_assert(offsetof(FUim2DVertUV, X) == 0x000000, "Member 'FUim2DVertUV::X' has a wrong offset!");
static_assert(offsetof(FUim2DVertUV, Y) == 0x000004, "Member 'FUim2DVertUV::Y' has a wrong offset!");
static_assert(offsetof(FUim2DVertUV, U0) == 0x000008, "Member 'FUim2DVertUV::U0' has a wrong offset!");
static_assert(offsetof(FUim2DVertUV, V0) == 0x00000C, "Member 'FUim2DVertUV::V0' has a wrong offset!");

// ScriptStruct UimAssetPlugin.Uim3DVertex
// 0x000C (0x000C - 0x0000)
struct FUim3DVertex final
{
public:
	float                                         X;                                                 // 0x0000(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Y;                                                 // 0x0004(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Z;                                                 // 0x0008(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FUim3DVertex) == 0x000004, "Wrong alignment on FUim3DVertex");
static_assert(sizeof(FUim3DVertex) == 0x00000C, "Wrong size on FUim3DVertex");
static_assert(offsetof(FUim3DVertex, X) == 0x000000, "Member 'FUim3DVertex::X' has a wrong offset!");
static_assert(offsetof(FUim3DVertex, Y) == 0x000004, "Member 'FUim3DVertex::Y' has a wrong offset!");
static_assert(offsetof(FUim3DVertex, Z) == 0x000008, "Member 'FUim3DVertex::Z' has a wrong offset!");

// ScriptStruct UimAssetPlugin.Uim3DVertCol
// 0x0010 (0x0010 - 0x0000)
struct FUim3DVertCol final
{
public:
	float                                         X;                                                 // 0x0000(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Y;                                                 // 0x0004(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Z;                                                 // 0x0008(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        Color;                                             // 0x000C(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FUim3DVertCol) == 0x000004, "Wrong alignment on FUim3DVertCol");
static_assert(sizeof(FUim3DVertCol) == 0x000010, "Wrong size on FUim3DVertCol");
static_assert(offsetof(FUim3DVertCol, X) == 0x000000, "Member 'FUim3DVertCol::X' has a wrong offset!");
static_assert(offsetof(FUim3DVertCol, Y) == 0x000004, "Member 'FUim3DVertCol::Y' has a wrong offset!");
static_assert(offsetof(FUim3DVertCol, Z) == 0x000008, "Member 'FUim3DVertCol::Z' has a wrong offset!");
static_assert(offsetof(FUim3DVertCol, Color) == 0x00000C, "Member 'FUim3DVertCol::Color' has a wrong offset!");

// ScriptStruct UimAssetPlugin.Uim3DVertColUV
// 0x0018 (0x0018 - 0x0000)
struct FUim3DVertColUV final
{
public:
	float                                         X;                                                 // 0x0000(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Y;                                                 // 0x0004(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Z;                                                 // 0x0008(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        Color;                                             // 0x000C(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         U0;                                                // 0x0010(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         V0;                                                // 0x0014(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FUim3DVertColUV) == 0x000004, "Wrong alignment on FUim3DVertColUV");
static_assert(sizeof(FUim3DVertColUV) == 0x000018, "Wrong size on FUim3DVertColUV");
static_assert(offsetof(FUim3DVertColUV, X) == 0x000000, "Member 'FUim3DVertColUV::X' has a wrong offset!");
static_assert(offsetof(FUim3DVertColUV, Y) == 0x000004, "Member 'FUim3DVertColUV::Y' has a wrong offset!");
static_assert(offsetof(FUim3DVertColUV, Z) == 0x000008, "Member 'FUim3DVertColUV::Z' has a wrong offset!");
static_assert(offsetof(FUim3DVertColUV, Color) == 0x00000C, "Member 'FUim3DVertColUV::Color' has a wrong offset!");
static_assert(offsetof(FUim3DVertColUV, U0) == 0x000010, "Member 'FUim3DVertColUV::U0' has a wrong offset!");
static_assert(offsetof(FUim3DVertColUV, V0) == 0x000014, "Member 'FUim3DVertColUV::V0' has a wrong offset!");

// ScriptStruct UimAssetPlugin.Uim3DVertUV
// 0x0014 (0x0014 - 0x0000)
struct FUim3DVertUV final
{
public:
	float                                         X;                                                 // 0x0000(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Y;                                                 // 0x0004(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Z;                                                 // 0x0008(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         U0;                                                // 0x000C(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         V0;                                                // 0x0010(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FUim3DVertUV) == 0x000004, "Wrong alignment on FUim3DVertUV");
static_assert(sizeof(FUim3DVertUV) == 0x000014, "Wrong size on FUim3DVertUV");
static_assert(offsetof(FUim3DVertUV, X) == 0x000000, "Member 'FUim3DVertUV::X' has a wrong offset!");
static_assert(offsetof(FUim3DVertUV, Y) == 0x000004, "Member 'FUim3DVertUV::Y' has a wrong offset!");
static_assert(offsetof(FUim3DVertUV, Z) == 0x000008, "Member 'FUim3DVertUV::Z' has a wrong offset!");
static_assert(offsetof(FUim3DVertUV, U0) == 0x00000C, "Member 'FUim3DVertUV::U0' has a wrong offset!");
static_assert(offsetof(FUim3DVertUV, V0) == 0x000010, "Member 'FUim3DVertUV::V0' has a wrong offset!");

// ScriptStruct UimAssetPlugin.UimData
// 0x0130 (0x0130 - 0x0000)
struct FUimData final
{
public:
	uint32                                        FrameSkip;                                         // 0x0000(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FrameNum;                                          // 0x0004(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         VertexNum;                                         // 0x0008(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PolygonNum;                                        // 0x000C(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         IndexNum;                                          // 0x0010(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Coordinate;                                        // 0x0014(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         GeomFormat;                                        // 0x0018(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AnimFormat;                                        // 0x001C(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUim2DVertex>                   P2DGeomVertex;                                     // 0x0020(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FUim2DVertCol>                  P2DGeomVertCol;                                    // 0x0030(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FUim2DVertColUV>                P2DGeomVertColUV;                                  // 0x0040(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FUim2DVertUV>                   P2DGeomVertUV;                                     // 0x0050(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FUim2DVertex>                   P2DAnimVertex;                                     // 0x0060(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FUim2DVertCol>                  P2DAnimVertCol;                                    // 0x0070(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FUim2DVertColUV>                P2DAnimVertColUV;                                  // 0x0080(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FUim2DVertUV>                   P2DAnimVertUV;                                     // 0x0090(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FUim3DVertex>                   P3DGeomVertex;                                     // 0x00A0(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FUim3DVertCol>                  P3DGeomVertCol;                                    // 0x00B0(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FUim3DVertColUV>                P3DGeomVertColUV;                                  // 0x00C0(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FUim3DVertUV>                   P3DGeomVertUV;                                     // 0x00D0(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FUim3DVertex>                   P3DAnimVertex;                                     // 0x00E0(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FUim3DVertCol>                  P3DAnimVertCol;                                    // 0x00F0(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FUim3DVertColUV>                P3DAnimVertColUV;                                  // 0x0100(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FUim3DVertUV>                   P3DAnimVertUV;                                     // 0x0110(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<uint16>                                Indices;                                           // 0x0120(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};
static_assert(alignof(FUimData) == 0x000008, "Wrong alignment on FUimData");
static_assert(sizeof(FUimData) == 0x000130, "Wrong size on FUimData");
static_assert(offsetof(FUimData, FrameSkip) == 0x000000, "Member 'FUimData::FrameSkip' has a wrong offset!");
static_assert(offsetof(FUimData, FrameNum) == 0x000004, "Member 'FUimData::FrameNum' has a wrong offset!");
static_assert(offsetof(FUimData, VertexNum) == 0x000008, "Member 'FUimData::VertexNum' has a wrong offset!");
static_assert(offsetof(FUimData, PolygonNum) == 0x00000C, "Member 'FUimData::PolygonNum' has a wrong offset!");
static_assert(offsetof(FUimData, IndexNum) == 0x000010, "Member 'FUimData::IndexNum' has a wrong offset!");
static_assert(offsetof(FUimData, Coordinate) == 0x000014, "Member 'FUimData::Coordinate' has a wrong offset!");
static_assert(offsetof(FUimData, GeomFormat) == 0x000018, "Member 'FUimData::GeomFormat' has a wrong offset!");
static_assert(offsetof(FUimData, AnimFormat) == 0x00001C, "Member 'FUimData::AnimFormat' has a wrong offset!");
static_assert(offsetof(FUimData, P2DGeomVertex) == 0x000020, "Member 'FUimData::P2DGeomVertex' has a wrong offset!");
static_assert(offsetof(FUimData, P2DGeomVertCol) == 0x000030, "Member 'FUimData::P2DGeomVertCol' has a wrong offset!");
static_assert(offsetof(FUimData, P2DGeomVertColUV) == 0x000040, "Member 'FUimData::P2DGeomVertColUV' has a wrong offset!");
static_assert(offsetof(FUimData, P2DGeomVertUV) == 0x000050, "Member 'FUimData::P2DGeomVertUV' has a wrong offset!");
static_assert(offsetof(FUimData, P2DAnimVertex) == 0x000060, "Member 'FUimData::P2DAnimVertex' has a wrong offset!");
static_assert(offsetof(FUimData, P2DAnimVertCol) == 0x000070, "Member 'FUimData::P2DAnimVertCol' has a wrong offset!");
static_assert(offsetof(FUimData, P2DAnimVertColUV) == 0x000080, "Member 'FUimData::P2DAnimVertColUV' has a wrong offset!");
static_assert(offsetof(FUimData, P2DAnimVertUV) == 0x000090, "Member 'FUimData::P2DAnimVertUV' has a wrong offset!");
static_assert(offsetof(FUimData, P3DGeomVertex) == 0x0000A0, "Member 'FUimData::P3DGeomVertex' has a wrong offset!");
static_assert(offsetof(FUimData, P3DGeomVertCol) == 0x0000B0, "Member 'FUimData::P3DGeomVertCol' has a wrong offset!");
static_assert(offsetof(FUimData, P3DGeomVertColUV) == 0x0000C0, "Member 'FUimData::P3DGeomVertColUV' has a wrong offset!");
static_assert(offsetof(FUimData, P3DGeomVertUV) == 0x0000D0, "Member 'FUimData::P3DGeomVertUV' has a wrong offset!");
static_assert(offsetof(FUimData, P3DAnimVertex) == 0x0000E0, "Member 'FUimData::P3DAnimVertex' has a wrong offset!");
static_assert(offsetof(FUimData, P3DAnimVertCol) == 0x0000F0, "Member 'FUimData::P3DAnimVertCol' has a wrong offset!");
static_assert(offsetof(FUimData, P3DAnimVertColUV) == 0x000100, "Member 'FUimData::P3DAnimVertColUV' has a wrong offset!");
static_assert(offsetof(FUimData, P3DAnimVertUV) == 0x000110, "Member 'FUimData::P3DAnimVertUV' has a wrong offset!");
static_assert(offsetof(FUimData, Indices) == 0x000120, "Member 'FUimData::Indices' has a wrong offset!");

}

