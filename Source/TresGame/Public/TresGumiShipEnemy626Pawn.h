#pragma once
#include "CoreMinimal.h"
#include "GUMI_SHIP_ENEMY_GM626_CANNON.h"
#include "TresGumiShipBossEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "GUMI_SHIP_ENEMY_GM626_EYEMUZZLE.h"
#include "GUMI_SHIP_ENEMY_GM626_STATUS.h"
#include "GUMI_SHIP_ENEMY_GM626_SHIELD.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipEnemy626Pawn.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipEnemy626Pawn : public ATresGumiShipBossEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pExplosionVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pSmokeVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pSparkVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pEngineDamage1VFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pEngineDamage2VFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pEngineDamage3VFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pDestructionStateVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pZombieState0VFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pZombieState1VFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pPhaseExplosionVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pLargeExplosionVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pLaserMuzzleVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pZombieMuzzleVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CockpitMaxHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nSubWeaponCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMissileDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCoreHpRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BladeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRotator> m_BladeRotat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaterialParamMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaterialParamMax;
    
public:
    ATresGumiShipEnemy626Pawn(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SetPermitFiring(bool Enable);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SetCockpitHP(int32 _HP);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsZombie();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    GUMI_SHIP_ENEMY_GM626_STATUS IsStatus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    GUMI_SHIP_ENEMY_GM626_SHIELD IsShield();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPermitFiring();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEngineHP();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCockpitHP_MIN();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCockpitHP_MAX();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCatapultNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool _StartZombieEffect();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool _SetUpShield(GUMI_SHIP_ENEMY_GM626_SHIELD State);
    
    UFUNCTION(BlueprintCallable)
    bool _SetMeshFadeRateCall(float FadeTime, bool FadeIn);
    
public:
    UFUNCTION(BlueprintCallable)
    bool _SetDormantState(GUMI_SHIP_ENEMY_GM626_CANNON cannon, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void _SetAttackSubWeaponCount(int32 WeaponCount);
    
    UFUNCTION(BlueprintCallable)
    bool _MainWeaponNearAttack(FVector _target);
    
    UFUNCTION(BlueprintCallable)
    void _LockOnTargetUpper();
    
    UFUNCTION(BlueprintCallable)
    void _LockOnTargetLower();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool _CheckMoveShield();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool _CallEyeMuzzleEffect(GUMI_SHIP_ENEMY_GM626_EYEMUZZLE Type, bool Play);
    
};

