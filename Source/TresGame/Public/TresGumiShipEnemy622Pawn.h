#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipBossEnemyPawnBase.h"
#include "GUMISHIP_ENEMY622_STATUS.h"
#include "TresGumiShipEnemy622Pawn.generated.h"

class UParticleSystem;
class ATresGumiShipEnemyPartsBase;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipEnemy622Pawn : public ATresGumiShipBossEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pBarrierVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pProductVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAdvanceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAnglespeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MoveTimer;
    
public:
    ATresGumiShipEnemy622Pawn(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool SetPermitFiring(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    bool SetCorePermitFiring(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShieldEnable();
    
    UFUNCTION(BlueprintCallable)
    bool IsPermitFiring();
    
    UFUNCTION(BlueprintCallable)
    bool IsCorePermitFiring(ATresGumiShipEnemyPartsBase* pThis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 EnableCoreCount();
    
    UFUNCTION(BlueprintCallable)
    void _ShieldEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    bool _OnLazerTrigger();
    
    UFUNCTION(BlueprintCallable)
    void _DetachWall();
    
    UFUNCTION(BlueprintCallable)
    void _ChangeState(GUMISHIP_ENEMY622_STATUS Status);
    
    UFUNCTION(BlueprintCallable)
    void _CannonAttackChange(bool change);
    
};

