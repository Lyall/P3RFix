#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlCutinController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Xrd777_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BtlCutinController.BP_BtlCutinController_C
// 0x0120 (0x0398 - 0x0278)
class ABP_BtlCutinController_C final : public AAppActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ReadyForPlay;                                      // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             CutinFinished;                                     // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             LoadingCutin;                                      // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_BtlEventAssistant_C*                BtlEventAssistance;                                // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BtlCharacterBase_C*                 Chara;                                             // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BtlPersonaBase_C*                   Persona;                                           // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BtlCutinMannequin_C*                PersonaManequinne;                                 // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BtlCutinMannequin_C*                GroundMannequin;                                   // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BtlCutinMannequin_C*                BackGroundMannequin;                               // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BtlCutinVideo_C*                    VideoMannequine;                                   // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   SkyLightsColors;                                   // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FLinearColor>                   SpotLightsColors;                                  // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             On_End_Fade_In;                                    // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBP_BtlGuiComponent_C*                  BtlGui;                                            // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         StageMajorID;                                      // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StageMinorID;                                      // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceConstant*              NormalMaterial;                                    // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceConstant*              BreakMaterial;                                     // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      BackGroundMaterial;                                // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             On_End_Load_Asset;                                 // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsEndLoadVideoMaterial;                            // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsEndBackGroundMaterial;                           // 0x0359(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsEndLoadMediaPlayer;                              // 0x035A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsPrepareSOFDECVideo;                              // 0x035B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsWaitLoadSOFDECVideo;                             // 0x035C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35D[0x3];                                      // 0x035D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             CatinBGDataTable;                                  // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             On_End_Load_MovieActor;                            // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsLoadStartMoviePlayer;                            // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsLoadEndMoviePlayer;                              // 0x0379(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37A[0x6];                                      // 0x037A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AMoviePlayActorBattle*                  MoviePlayerBattle;                                 // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsError;                                           // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_389[0x3];                                      // 0x0389(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BtlActorCharacterID;                               // 0x038C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BtlActorID;                                        // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ReadyForPlay__DelegateSignature();
	void CutinFinished__DelegateSignature();
	void LoadingCutin__DelegateSignature();
	void On_End_Fade_In__DelegateSignature();
	void On_End_Load_Asset__DelegateSignature();
	void On_End_Load_MovieActor__DelegateSignature();
	void ExecuteUbergraph_BP_BtlCutinController(int32 EntryPoint);
	void On_End_Event();
	void Cutin_Start();
	void On_Fade_Start();
	void On_Play_Cutin();
	void Has_Finished_Loading();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void Load_Video_Material();
	void Load_BackGroundMaterial();
	void LoadOneVideoMaterial(TSoftObjectPtr<class UMaterialInstanceConstant> NormalMaterial_0, TSoftObjectPtr<class UMaterialInstanceConstant> BreakMaterial_0, int32 MovieID);
	void Load_Async_Start();
	void One_Load_End();
	void OnLoaded_A0642F974397FA9F1D4DC6B362317BF8(class UObject* Loaded);
	void OnLoaded_110309BD4006E4C58D53CB82411DB748(class UObject* Loaded);
	void OnLoaded_15F298D54142CC35EB9E838E04FBE109(class UObject* Loaded);
	void OnLoaded_1DA76FE6431CA392BE04B5BAEF80ABA4(class UObject* Loaded);
	void LoadStuff(class ABP_BtlCharacterBase_C* Performer);
	void InitPosition();
	void Load_MovieActor();
	void InitManequine();
	void Init_Back_Ground();
	void Init_Ground();
	void InitPersona();
	void Init_Character();
	void InitVideo();
	void Show_Other_Actor();
	void Get_Character_ID(int32* ID);
	void Get_Stage_ID(int32* ID);
	void Get_Persona_Size(int32* SizeId);
	void Init_Lights();
	void Restore_Lights();
	void Start_Fade_In(float TimeSecond);
	void End_Fade_In();
	void Set_Persona(class ABP_BtlPersonaBase_C* Persona_0);
	void Set_PersonaSpawnEffect(class UNiagaraComponent* Effect);
	void SetStageID(int32 MajorId, int32 MinorId);
	void LoadBackGroundMaterial();
	void Load_Level_Sequence();
	void Load_Assets();
	void GetId(int32* ID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BtlCutinController_C">();
	}
	static class ABP_BtlCutinController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BtlCutinController_C>();
	}
};
static_assert(alignof(ABP_BtlCutinController_C) == 0x000008, "Wrong alignment on ABP_BtlCutinController_C");
static_assert(sizeof(ABP_BtlCutinController_C) == 0x000398, "Wrong size on ABP_BtlCutinController_C");
static_assert(offsetof(ABP_BtlCutinController_C, UberGraphFrame) == 0x000278, "Member 'ABP_BtlCutinController_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, DefaultSceneRoot) == 0x000280, "Member 'ABP_BtlCutinController_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, ReadyForPlay) == 0x000288, "Member 'ABP_BtlCutinController_C::ReadyForPlay' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, CutinFinished) == 0x000298, "Member 'ABP_BtlCutinController_C::CutinFinished' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, LoadingCutin) == 0x0002A8, "Member 'ABP_BtlCutinController_C::LoadingCutin' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, BtlEventAssistance) == 0x0002B8, "Member 'ABP_BtlCutinController_C::BtlEventAssistance' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, Chara) == 0x0002C0, "Member 'ABP_BtlCutinController_C::Chara' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, Persona) == 0x0002C8, "Member 'ABP_BtlCutinController_C::Persona' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, PersonaManequinne) == 0x0002D0, "Member 'ABP_BtlCutinController_C::PersonaManequinne' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, GroundMannequin) == 0x0002D8, "Member 'ABP_BtlCutinController_C::GroundMannequin' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, BackGroundMannequin) == 0x0002E0, "Member 'ABP_BtlCutinController_C::BackGroundMannequin' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, VideoMannequine) == 0x0002E8, "Member 'ABP_BtlCutinController_C::VideoMannequine' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, SkyLightsColors) == 0x0002F0, "Member 'ABP_BtlCutinController_C::SkyLightsColors' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, SpotLightsColors) == 0x000300, "Member 'ABP_BtlCutinController_C::SpotLightsColors' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, On_End_Fade_In) == 0x000310, "Member 'ABP_BtlCutinController_C::On_End_Fade_In' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, BtlGui) == 0x000320, "Member 'ABP_BtlCutinController_C::BtlGui' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, StageMajorID) == 0x000328, "Member 'ABP_BtlCutinController_C::StageMajorID' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, StageMinorID) == 0x00032C, "Member 'ABP_BtlCutinController_C::StageMinorID' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, NormalMaterial) == 0x000330, "Member 'ABP_BtlCutinController_C::NormalMaterial' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, BreakMaterial) == 0x000338, "Member 'ABP_BtlCutinController_C::BreakMaterial' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, BackGroundMaterial) == 0x000340, "Member 'ABP_BtlCutinController_C::BackGroundMaterial' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, On_End_Load_Asset) == 0x000348, "Member 'ABP_BtlCutinController_C::On_End_Load_Asset' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, IsEndLoadVideoMaterial) == 0x000358, "Member 'ABP_BtlCutinController_C::IsEndLoadVideoMaterial' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, IsEndBackGroundMaterial) == 0x000359, "Member 'ABP_BtlCutinController_C::IsEndBackGroundMaterial' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, IsEndLoadMediaPlayer) == 0x00035A, "Member 'ABP_BtlCutinController_C::IsEndLoadMediaPlayer' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, IsPrepareSOFDECVideo) == 0x00035B, "Member 'ABP_BtlCutinController_C::IsPrepareSOFDECVideo' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, IsWaitLoadSOFDECVideo) == 0x00035C, "Member 'ABP_BtlCutinController_C::IsWaitLoadSOFDECVideo' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, CatinBGDataTable) == 0x000360, "Member 'ABP_BtlCutinController_C::CatinBGDataTable' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, On_End_Load_MovieActor) == 0x000368, "Member 'ABP_BtlCutinController_C::On_End_Load_MovieActor' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, IsLoadStartMoviePlayer) == 0x000378, "Member 'ABP_BtlCutinController_C::IsLoadStartMoviePlayer' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, IsLoadEndMoviePlayer) == 0x000379, "Member 'ABP_BtlCutinController_C::IsLoadEndMoviePlayer' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, MoviePlayerBattle) == 0x000380, "Member 'ABP_BtlCutinController_C::MoviePlayerBattle' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, IsError) == 0x000388, "Member 'ABP_BtlCutinController_C::IsError' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, BtlActorCharacterID) == 0x00038C, "Member 'ABP_BtlCutinController_C::BtlActorCharacterID' has a wrong offset!");
static_assert(offsetof(ABP_BtlCutinController_C, BtlActorID) == 0x000390, "Member 'ABP_BtlCutinController_C::BtlActorID' has a wrong offset!");

}
