#pragma once
#include "CoreMinimal.h"
#include "TresGimmickGeneratorMI_02Base.h"
#include "TresGimmickGeneratorMI_02.generated.h"

class UTresMI_02BossPartsGeneratorRule;
class AActor;

UCLASS(Abstract, Blueprintable)
class ATresGimmickGeneratorMI_02 : public ATresGimmickGeneratorMI_02Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedWaterSplineNone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresMI_02BossPartsGeneratorRule* GeneratorData;
    
public:
    ATresGimmickGeneratorMI_02(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void spawn();
    
    UFUNCTION(BlueprintCallable)
    void SetSpeedRate(float _rate);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeedAndWaterSpeedRate(float _speedRate);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeedAndWaterSpeed(float _speed);
    
    UFUNCTION(BlueprintCallable)
    void SetSpeed(float _speed);
    
    UFUNCTION(BlueprintCallable)
    void SetBossPartsVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoveSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_SleepActor(AActor* Actor);
    
};

