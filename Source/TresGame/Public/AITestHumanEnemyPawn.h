#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "AITestHumanEnemyPawn.generated.h"

UCLASS(Blueprintable)
class AAITestHumanEnemyPawn : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    AAITestHumanEnemyPawn(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSwitchBT(FName InName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetDefaultBT();
    
};

