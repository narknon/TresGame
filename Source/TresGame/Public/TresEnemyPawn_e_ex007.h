#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex007.generated.h"

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex007 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    ATresEnemyPawn_e_ex007(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCoopMode() const;
    
};

