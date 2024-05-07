#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyXIIIPlayerKilledVoiceData.h"
#include "ETresEnemyXIIIPhaseType.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyXIIIPawnBase.generated.h"

class USQEX_ParticleAttachDataAsset;
class UTresEnemyXIIIRetryInheritParam;

UCLASS(Blueprintable)
class ATresEnemyXIIIPawnBase : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_UniqueEffectDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEnemyXIIIPhaseType m_FirstPhaseType;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float m_PhaseChangeHitPointMinRateList[5];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float m_RetryStartHitPointRateList[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyXIIIPlayerKilledVoiceData> m_PlayerKilledVoiceDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDebugEnableForcePhaseType: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEnemyXIIIPhaseType m_DebugForcePhaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDebugEnableForceCenterLocation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_DebugForceCenterLocation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ETresEnemyXIIIPhaseType m_PhaseType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresEnemyXIIIRetryInheritParam* m_RetryInheritParam;
    
public:
    ATresEnemyXIIIPawnBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void NotifyChangePhase(ETresEnemyXIIIPhaseType InNewPhaseType);
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsDuringCoopActionCooldown();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsDuringAlertCooldown();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsAnnoyingAttackToPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    int32 GetPhaseNo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnChangePhase(ETresEnemyXIIIPhaseType InNewPhaseType);
    
};

