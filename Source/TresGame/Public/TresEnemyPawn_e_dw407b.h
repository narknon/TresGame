#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyDarkSidePawnBase.h"
#include "TresEnemyPawn_e_dw407b.generated.h"

class ATresProjectileBase;
class ATresPatternActor_e_dw407b_Manager;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_dw407b : public ATresEnemyDarkSidePawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_ProdusedRoarProjectileAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_PillarLightProjectileAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SameAttackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EndLaserCountTimingTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresPatternActor_e_dw407b_Manager* m_PatternData;
    
    ATresEnemyPawn_e_dw407b(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void NotifyBattleStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsBattleStart() const;
    
};

