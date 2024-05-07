#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipBossEnemyPawnBase.h"
#include "TresGumiShipEnemy623Pawn.generated.h"

class USoundBase;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipEnemy623Pawn : public ATresGumiShipBossEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MotionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Locked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadRollSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BottomRollSpeedMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FalldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FalldownSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ALSSwitchingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* OriginalBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ArrangeBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* MonitorOriginalBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* MonitorArrangeBGM;
    
    ATresGumiShipEnemy623Pawn(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetALSPhase(int32 phase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetALSPhase() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelAttack();
    
};

