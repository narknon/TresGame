#pragma once
#include "CoreMinimal.h"
#include "TresEnemyShipPawnBase.h"
#include "ca405MovementParam.h"
#include "ca405MaelstromSpawnParameter.h"
#include "TresEnemyPawn_e_ca405SpawnModeSignatureDelegate.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ca405.generated.h"

class UCurveVector;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ca405 : public ATresEnemyShipPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* m_RotCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotCurveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bMaelstromMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    Fca405MovementParam m_moveParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    Fca405MaelstromSpawnParameter m_nearSpawnParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    Fca405MaelstromSpawnParameter m_backSpawnParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    Fca405MaelstromSpawnParameter m_farSpawnParam0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    Fca405MaelstromSpawnParameter m_farSpawnParam1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_RateCountOfFarSpawn1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_ShipTrackParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DestroyShipTrackNotifyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_InvincibleOnNotifyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CreateShipTrackNotifyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_InvincibleOffNotifyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_ShipTrackParticleComp;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEnemyPawn_e_ca405SpawnModeSignature OnLotteryNextSpawnPoint;
    
    ATresEnemyPawn_e_ca405(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetMissionStartTime(bool bStart);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMaelstromMode() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeMission(const FVector initPlayerLocation, int32 initMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceMissionStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocationMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHitPointOfMaelstromMode() const;
    
};

