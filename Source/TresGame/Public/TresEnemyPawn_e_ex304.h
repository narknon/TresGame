#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIIEPawnBase.h"
#include "TresEx304HitEffectInfo.h"
#include "TresFRThinkOfYouInterface.h"
#include "TresEx304HitEffectManager.h"
#include "TresEnemyPawn_e_ex304.generated.h"

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex304 : public ATresEnemyXIIIEPawnBase, public ITresFRThinkOfYouInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresEx304HitEffectInfo m_HitEffectInfos[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEx304HitEffectManager> m_HitEffectManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BattleEndHitPointPerAreaD;
    
    ATresEnemyPawn_e_ex304(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetEnableDebugFnishBlow(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    bool IsSaixBodyTypeBlueBurst();
    
    UFUNCTION(BlueprintCallable)
    bool IsHitAerialComboAttack();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsDuringLeaderChangeOrFatalAttackCooldown();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsDuringFatalAttackCooldownWithPlayerHeightCheck();
    
    UFUNCTION(BlueprintCallable)
    bool IsDebugFnishBlow();
    
    UFUNCTION(BlueprintCallable)
    void BP_EndHandCharging();
    
    
    // Fix for true pure virtual functions not being implemented
};

