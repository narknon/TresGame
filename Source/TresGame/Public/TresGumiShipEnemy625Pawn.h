#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipBossEnemyPawnBase.h"
#include "GUMISHIP_ENEMY625_METEORO_BONE.h"
#include "GUMISHIP_ENEMY625_METEORO_TARGET.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipEnemy625Pawn.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipEnemy625Pawn : public ATresGumiShipBossEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pSandSmokeEffectVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pEmergenSandSmokeEffectVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pLatentSandSmokeEffectVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAdvanceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PairName;
    
public:
    ATresGumiShipEnemy625Pawn(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetEnableDead();
    
    UFUNCTION(BlueprintCallable)
    bool IsPairDead();
    
    UFUNCTION(BlueprintCallable)
    void _SetPlayertLockAtTarget(int32 ID, FVector Offset, float Timer);
    
    UFUNCTION(BlueprintCallable)
    bool _SelectMeteoroTargetInc();
    
    UFUNCTION(BlueprintCallable)
    bool _SelectMeteoroTarget(GUMISHIP_ENEMY625_METEORO_TARGET Target);
    
    UFUNCTION(BlueprintCallable)
    int32 _SelectMeteoroNearBone();
    
    UFUNCTION(BlueprintCallable)
    bool _SelectMeteoroBoneInc();
    
    UFUNCTION(BlueprintCallable)
    bool _SelectMeteoroBone(GUMISHIP_ENEMY625_METEORO_BONE Target);
    
    UFUNCTION(BlueprintCallable)
    void _SelectMeteoroAndBone(int32 meteoro_id, int32 bone_num);
    
    UFUNCTION(BlueprintCallable)
    void _ReloadkMissile();
    
    UFUNCTION(BlueprintCallable)
    void _ReleaseLaser();
    
private:
    UFUNCTION(BlueprintCallable)
    void _AttackMissile2();
    
    UFUNCTION(BlueprintCallable)
    void _AttackMissile1();
    
    UFUNCTION(BlueprintCallable)
    void _AttackMissile0();
    
public:
    UFUNCTION(BlueprintCallable)
    void _AttackMissile();
    
    UFUNCTION(BlueprintCallable)
    void _AttackLaser();
    
    UFUNCTION(BlueprintCallable)
    void _AttackCluster(bool PlayerTarget, FVector vect);
    
};

