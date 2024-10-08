#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BtlCalc

#include "Basic.hpp"

#include "Xrd777_structs.hpp"
#include "Xrd777_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BtlCalc.BP_BtlCalc_C
// 0x0038 (0x04C8 - 0x0490)
class ABP_BtlCalc_C final : public ABtlCalcBase
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0490(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             DifficultyParam;                                   // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             LevelDamageRatio;                                  // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             LevelDamageRatioBoss;                              // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             LevelExpRatio;                                     // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             FullMoonSkillPower;                                // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             NewMoonSkillPower;                                 // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	float CalcMagicDamage();
	float CalcPhysicalDamage();
	float CalcAccuracyRate();
	float CalcCriticalHitRate();
	float CalcDownRate();
	float CalcRushDamage();
	float CalcAllOutAttackDamage();
	float CalcBadStatusHitRate();
	float CalcBadStatusRecoveryRate();
	float CalcEscapeRate();
	float CalcHealRecovery();
	float GetDamageRateToEnemy();
	float GetDamageRateToPlayer();
	int32 GetDownAgilityForEnemy();
	float GetEnemyCriticalDamageRate();
	float GetEnemyWeakDamageRate();
	float GetExpRate();
	float GetMoneyRate();
	float GetPlayerCriticalDamageRate();
	float GetPlayerWeakDamageRate();
	void GetDifficultyParam(struct FFBtlCalcParam* Param);
	float CalcExpPersonaLevelUp(float Level, float DefaultLevel);
	void Accuracy_Player(float* Rate);
	void Accuracy_Enemy(float* Rate);
	float GetAllOutAttackSwoonRate();
	float CalcTheurgiaSkillDamage();
	float GetSaleMerchMoneyRate();
	void GetBadStatusRateFromEnemy(float* BadStatus_Hit_Rate);
	void GetBadStatusRateFromPlayer(float* BadStatus_Hit_Rate);

	int32 GetAttackSupportRatio(bool IsPlayer, int32 Point) const;
	int32 GetDefenseSupportRatio(bool IsPlayer, int32 Point) const;
	int32 GetSpeedSupportRatio(bool IsPlayer, int32 Point) const;
	int32 GetMagicBonusRecovery(int32 MagicAttacker) const;
	int32 GetMagicBonusDamage(int32 MagicAttacker) const;
	float GetLevelAccuracyRatio(int32 LevelAttacker, int32 LevelTarget) const;
	float GetLevelDamageBossRatio(int32 LevelAttacker, int32 LevelTarget) const;
	float GetLevelDamageRatio(int32 LevelAttacker, int32 LevelTarget) const;
	float GetLevelExpRatio(int32 LevelDifference) const;
	int32 GetShuffleTimeOccurPercent() const;
	float AttackRatioByANGER() const;
	float DamageRatioByANGER() const;
	float DamageRatioByOVERHEAT() const;
	float DamageRatioByUPSET() const;
	float RecoveryRatioFromANGER() const;
	float RecoveryRatioFromCHARM() const;
	float RecoveryRatioFromFEAR() const;
	float RecoveryRatioFromPANIC() const;
	float RecoveryRatioFromUPSET() const;
	float AttackRatioByUPSET() const;
	float GetShuffleTimeMajorPercent(int32 EncountNumFromLastMajor) const;
	float GetFullmoonSkillPowerRatio(int32 MoonAge) const;
	float GetNewmoonSkillPowerRatio(int32 MoonAge) const;
	float AttackRatioByOVERLIMIT() const;
	float DamageRatioByOVERLIMIT() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BtlCalc_C">();
	}
	static class ABP_BtlCalc_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BtlCalc_C>();
	}
};
static_assert(alignof(ABP_BtlCalc_C) == 0x000008, "Wrong alignment on ABP_BtlCalc_C");
static_assert(sizeof(ABP_BtlCalc_C) == 0x0004C8, "Wrong size on ABP_BtlCalc_C");
static_assert(offsetof(ABP_BtlCalc_C, DefaultSceneRoot) == 0x000490, "Member 'ABP_BtlCalc_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_BtlCalc_C, DifficultyParam) == 0x000498, "Member 'ABP_BtlCalc_C::DifficultyParam' has a wrong offset!");
static_assert(offsetof(ABP_BtlCalc_C, LevelDamageRatio) == 0x0004A0, "Member 'ABP_BtlCalc_C::LevelDamageRatio' has a wrong offset!");
static_assert(offsetof(ABP_BtlCalc_C, LevelDamageRatioBoss) == 0x0004A8, "Member 'ABP_BtlCalc_C::LevelDamageRatioBoss' has a wrong offset!");
static_assert(offsetof(ABP_BtlCalc_C, LevelExpRatio) == 0x0004B0, "Member 'ABP_BtlCalc_C::LevelExpRatio' has a wrong offset!");
static_assert(offsetof(ABP_BtlCalc_C, FullMoonSkillPower) == 0x0004B8, "Member 'ABP_BtlCalc_C::FullMoonSkillPower' has a wrong offset!");
static_assert(offsetof(ABP_BtlCalc_C, NewMoonSkillPower) == 0x0004C0, "Member 'ABP_BtlCalc_C::NewMoonSkillPower' has a wrong offset!");

}

