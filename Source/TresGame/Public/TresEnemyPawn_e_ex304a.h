#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIIPawnBase.h"
#include "EffectSpawnParam_e_ex304a.h"
#include "EffectControlParam_e_ex304a.h"
#include "TresEnemyPawn_e_ex304a.generated.h"

class USQEX_ParticleAttachDataAsset;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex304a : public ATresEnemyXIIIPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NextPhaseChangeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_EffectAttachData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffectSpawnParam_e_ex304a> m_EffectSpawnParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffectControlParam_e_ex304a> m_EffectControlParamList;
    
public:
    ATresEnemyPawn_e_ex304a(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void StartPowerEffect();
    
    UFUNCTION(BlueprintCallable)
    void DebugStartPowerEffect();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetDisableBattleEnd(int32 bDisable);
    
    UFUNCTION(BlueprintCallable)
    void DebugPowerEffectNextStep();
    
    UFUNCTION(BlueprintCallable)
    void DebugMovePowerEffectStartLocation();
    
};

