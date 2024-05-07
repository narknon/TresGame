#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIILPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyXIIILBPawnBase.generated.h"

class USoundBase;

UCLASS(Abstract, Blueprintable)
class ATresEnemyXIIILBPawnBase : public ATresEnemyXIIILPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WarpFadeInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_RevengeVoiceDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableRevengeVoice2D: 1;
    
public:
    ATresEnemyXIIILBPawnBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetWarpLocationEQSDotRotator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetTargetVecEQSDotRotator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetEQSDotRotator() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugSetDefaultBT();
    
};

