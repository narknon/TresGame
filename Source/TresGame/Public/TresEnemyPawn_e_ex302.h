#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIIEPawnBase.h"
#include "TresEnemyEx302AfterImageEffect.h"
#include "TresAfterImageVisibleWorker.h"
#include "TresEnemyPawn_e_ex302.generated.h"

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex302 : public ATresEnemyXIIIEPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresEnemyEx302AfterImageEffect m_AfterImageEffects[4];
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AfterImageVisibleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresAfterImageVisibleWorker> m_AfterImageVisibleWorker;
    
public:
    ATresEnemyPawn_e_ex302(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool IsHitWhipComboAttack();
    
};

