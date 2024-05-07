#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIIBCoopPawnBase.h"
#include "TresEnemyPawn_e_ex309.generated.h"

class UTresProjectileManagerComponent_e_ex309_Jinrai;
class USoundBase;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex309 : public ATresEnemyXIIIBCoopPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresProjectileManagerComponent_e_ex309_Jinrai* MyProjectileManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WarpFadeInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_RevengeVoiceDataList;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 m_bEnableRevengeVoice2D;
    
public:
    ATresEnemyPawn_e_ex309(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, Exec)
    bool IsJinraiBeforeAttackHit() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsDuringTenraiCooldown_Phase2();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsDuringRaijishiCooldown();
    
};

