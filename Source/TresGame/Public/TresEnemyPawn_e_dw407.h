#pragma once
#include "CoreMinimal.h"
#include "TresEnemyDarkSidePawnBase.h"
#include "ETresEnemyEx409Event.h"
#include "TresEnemyPawn_e_dw407.generated.h"

class UObject;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_dw407 : public ATresEnemyDarkSidePawnBase {
    GENERATED_BODY()
public:
    ATresEnemyPawn_e_dw407(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static void Ex409SendEvent(UObject* WorldContextObject, ETresEnemyEx409Event EventType);
    
    UFUNCTION(BlueprintCallable)
    void BP_SpawnProjectileNormalDarkSide();
    
};

