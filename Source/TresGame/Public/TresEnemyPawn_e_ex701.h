#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex701.generated.h"

class USQEX_ParticleAttachDataAsset;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex701 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FName m_BodyCollisionNames[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_GroundEffectAttachDataAsset;
    
public:
    ATresEnemyPawn_e_ex701(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void OnRetrySkip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRushAddAngle() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumTarHand() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetRushNum(int32 Num);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetEnableTarHandAlwaysEnd(int32 bEnable);
    
};

