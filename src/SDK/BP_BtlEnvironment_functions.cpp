#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlEnvironment

#include "Basic.hpp"

#include "BP_BtlEnvironment_classes.hpp"
#include "BP_BtlEnvironment_parameters.hpp"


namespace SDK
{

// Function BP_BtlEnvironment.BP_BtlEnvironment_C.ExecuteUbergraph_BP_BtlEnvironment
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlEnvironment_C::ExecuteUbergraph_BP_BtlEnvironment(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "ExecuteUbergraph_BP_BtlEnvironment");

	Params::BP_BtlEnvironment_C_ExecuteUbergraph_BP_BtlEnvironment Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.InvisibleHangedmanBGObj
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlEnvironment_C::InvisibleHangedmanBGObj()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "InvisibleHangedmanBGObj");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.DeleteLoversFogEffect
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlEnvironment_C::DeleteLoversFogEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "DeleteLoversFogEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.RequestLoversFogEffect
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlEnvironment_C::RequestLoversFogEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "RequestLoversFogEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.Request Dark Env
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Anim_Time                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBtlSkillEnvParam                SkillEnv                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    KeepCurrentLight                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    KeepCurrentFog                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    KeepCurrentBG                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    HideBGWithDarkParam                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BtlEnvironment_C::Request_Dark_Env(float Anim_Time, const struct FBtlSkillEnvParam& SkillEnv, bool KeepCurrentLight, bool KeepCurrentFog, bool KeepCurrentBG, bool HideBGWithDarkParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "Request Dark Env");

	Params::BP_BtlEnvironment_C_Request_Dark_Env Parms{};

	Parms.Anim_Time = Anim_Time;
	Parms.SkillEnv = std::move(SkillEnv);
	Parms.KeepCurrentLight = KeepCurrentLight;
	Parms.KeepCurrentFog = KeepCurrentFog;
	Parms.KeepCurrentBG = KeepCurrentBG;
	Parms.HideBGWithDarkParam = HideBGWithDarkParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlEnvironment_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "ReceiveTick");

	Params::BP_BtlEnvironment_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_BtlEnvironment_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.SetBGVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BtlEnvironment_C::SetBGVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "SetBGVisible");

	Params::BP_BtlEnvironment_C_SetBGVisible Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.GetMainLight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightComponent*                  Light                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlEnvironment_C::GetMainLight(class ULightComponent** Light)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "GetMainLight");

	Params::BP_BtlEnvironment_C_GetMainLight Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Light != nullptr)
		*Light = Parms.Light;
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.SaveCurrentMainLightParam
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlEnvironment_C::SaveCurrentMainLightParam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "SaveCurrentMainLightParam");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BtlEnvironment_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.SetLightIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Intensity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlEnvironment_C::SetLightIntensity(float Intensity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "SetLightIntensity");

	Params::BP_BtlEnvironment_C_SetLightIntensity Parms{};

	Parms.Intensity = Intensity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.CalcDarkLightIntensity
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   AnimRatio                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlEnvironment_C::CalcDarkLightIntensity(float AnimRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "CalcDarkLightIntensity");

	Params::BP_BtlEnvironment_C_CalcDarkLightIntensity Parms{};

	Parms.AnimRatio = AnimRatio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.SetDarkFog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Power                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FogDistance                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   GradationRange                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlEnvironment_C::SetDarkFog(float Power, float FogDistance, float GradationRange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "SetDarkFog");

	Params::BP_BtlEnvironment_C_SetDarkFog Parms{};

	Parms.Power = Power;
	Parms.FogDistance = FogDistance;
	Parms.GradationRange = GradationRange;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.InitEnv
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BtlEnvironment_C::InitEnv()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "InitEnv");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.Save Current Skill Env
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlEnvironment_C::Save_Current_Skill_Env()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "Save Current Skill Env");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.CalcDarkFog
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnd                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BtlEnvironment_C::CalcDarkFog(float ElapsedTime, bool* IsEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "CalcDarkFog");

	Params::BP_BtlEnvironment_C_CalcDarkFog Parms{};

	Parms.ElapsedTime = ElapsedTime;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnd != nullptr)
		*IsEnd = Parms.IsEnd;
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.RequestPreSkillEnv
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BtlEnvironment_C::RequestPreSkillEnv()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "RequestPreSkillEnv");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.RestoreDefaultSkillEnv
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BtlEnvironment_C::RestoreDefaultSkillEnv()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "RestoreDefaultSkillEnv");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.SetBGBlack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Power                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlEnvironment_C::SetBGBlack(float Power)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "SetBGBlack");

	Params::BP_BtlEnvironment_C_SetBGBlack Parms{};

	Parms.Power = Power;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.CalcBGBlack
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnd                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BtlEnvironment_C::CalcBGBlack(float ElapsedTime, bool* IsEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "CalcBGBlack");

	Params::BP_BtlEnvironment_C_CalcBGBlack Parms{};

	Parms.ElapsedTime = ElapsedTime;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnd != nullptr)
		*IsEnd = Parms.IsEnd;
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.ResetEnvironment
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlEnvironment_C::ResetEnvironment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "ResetEnvironment");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.GetMonorailBGObj
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFldAnimObj*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AFldAnimObj* UBP_BtlEnvironment_C::GetMonorailBGObj()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "GetMonorailBGObj");

	Params::BP_BtlEnvironment_C_GetMonorailBGObj Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.GetMonorailStrapObj
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AFldAnimObj*>              ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class AFldAnimObj*> UBP_BtlEnvironment_C::GetMonorailStrapObj()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "GetMonorailStrapObj");

	Params::BP_BtlEnvironment_C_GetMonorailStrapObj Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.GetMonorailWallObj
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AFldAnimObj*>              ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class AFldAnimObj*> UBP_BtlEnvironment_C::GetMonorailWallObj()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "GetMonorailWallObj");

	Params::BP_BtlEnvironment_C_GetMonorailWallObj Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.SetFogCenter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Center                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BtlEnvironment_C::SetFogCenter(const struct FVector& Center)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "SetFogCenter");

	Params::BP_BtlEnvironment_C_SetFogCenter Parms{};

	Parms.Center = std::move(Center);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.StopEnvironmentUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlEnvironment_C::StopEnvironmentUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "StopEnvironmentUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.GetMonorailRushEffects
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ANiagaraActor*>            ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class ANiagaraActor*> UBP_BtlEnvironment_C::GetMonorailRushEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "GetMonorailRushEffects");

	Params::BP_BtlEnvironment_C_GetMonorailRushEffects Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.GetNyxAvatarFeatherEffects
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ANiagaraActor*>            ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class ANiagaraActor*> UBP_BtlEnvironment_C::GetNyxAvatarFeatherEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "GetNyxAvatarFeatherEffects");

	Params::BP_BtlEnvironment_C_GetNyxAvatarFeatherEffects Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.GetLoversFogEffects
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ANiagaraActor*>            ReturnValue                                            (Parm, OutParm, ReturnParm)

TArray<class ANiagaraActor*> UBP_BtlEnvironment_C::GetLoversFogEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "GetLoversFogEffects");

	Params::BP_BtlEnvironment_C_GetLoversFogEffects Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.ResumeEnvironmentUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlEnvironment_C::ResumeEnvironmentUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "ResumeEnvironmentUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.Set Visible Field Effect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANiagaraActor*                    Niagara                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_BtlEnvironment_C::Set_Visible_Field_Effect(class ANiagaraActor* Niagara, bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "Set Visible Field Effect");

	Params::BP_BtlEnvironment_C_Set_Visible_Field_Effect Parms{};

	Parms.Niagara = Niagara;
	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.SetFogInvisible
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlEnvironment_C::SetFogInvisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "SetFogInvisible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.RestoreFogPower
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BtlEnvironment_C::RestoreFogPower()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "RestoreFogPower");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.SetAlloutEnvironment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BtlEnvironment_C::SetAlloutEnvironment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "SetAlloutEnvironment");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.ResetAlloutEnvionment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_BtlEnvironment_C::ResetAlloutEnvionment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "ResetAlloutEnvionment");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.SetCutinEnviroment
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlEnvironment_C::SetCutinEnviroment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "SetCutinEnviroment");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BtlEnvironment.BP_BtlEnvironment_C.ResetCutinEnviroment
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_BtlEnvironment_C::ResetCutinEnviroment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BtlEnvironment_C", "ResetCutinEnviroment");

	UObject::ProcessEvent(Func, nullptr);
}

}
