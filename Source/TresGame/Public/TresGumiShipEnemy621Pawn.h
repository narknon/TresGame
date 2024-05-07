#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipBossEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ETresGumiShipSplineEventType.h"
#include "TresGumiShipEnemy621Pawn.generated.h"

class UTresGumiShipAtkCollisionSetCompo;
class UParticleSystem;
class UTresGumiShipWeaponSequence;
class USQEX_ParticleAttachDataAsset;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipEnemy621Pawn : public ATresGumiShipBossEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipAtkCollisionSetCompo* m_pEatAtkCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipWeaponSequence* m_pDustWeaponSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_pUniqueAttachDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pMuzzleVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pArrestEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pBrokenEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fChargeArrestDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nBreakArrestCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fIdlingStateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fNextPhaseHpThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDustShootPlaySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fContinuosBiteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_dDefeatedEnemyCount;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TailMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TailBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator TailRot2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator TailRot3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator TailRot4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TailLoc2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TailLoc3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TailLoc4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TailBlend;
    
    ATresGumiShipEnemy621Pawn(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void ToVisibleBodyMaterial(float fDuration);
    
    UFUNCTION(BlueprintCallable)
    void ToStealthBodyMaterial(float fDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineMoveSpeed(float Speed);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineMoveDeceleration(float Deceleration);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineMoveAcceleration(float Acceleration);
    
    UFUNCTION(BlueprintCallable)
    void SetReverseSplineMove(bool bReverseMoveEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSplineMoveSpeed(float MaxSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetIdlingStateTime(float fTime);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableBodyCollision(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageArrestDustShoot(float fDamage);
    
    UFUNCTION(BlueprintCallable)
    void PauseSplineMove(bool bPauseEnable);
    
    UFUNCTION(BlueprintCallable)
    void OnStopMineSpray();
    
    UFUNCTION(BlueprintCallable)
    void OnShotMineSpray(bool bManual);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBreakDustShootMuzzle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArrestDustShoot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReverseSplineMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPauseSplineMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArrivedSplineEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplineMoveSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplineMoveDeceleration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplineMoveAcceleration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSplineMoveSpeed() const;
    
    UFUNCTION(BlueprintCallable)
    void _OnSplinePathMoveEvent(ETresGumiShipSplineEventType eEventType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool _IsSecondPhase();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool _IsBrokenDustShootMuzzle();
    
    UFUNCTION(BlueprintCallable)
    void _AttachNewRootSpline(int32 dIndex);
    
};

