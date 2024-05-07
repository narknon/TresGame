#pragma once
#include "CoreMinimal.h"
#include "TresEnemyToyPawnBase.h"
#include "TresEnemyToyRoboPawnBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresEnemyToyRoboPawnBase : public ATresEnemyToyPawnBase {
    GENERATED_BODY()
public:
    ATresEnemyToyRoboPawnBase(const FObjectInitializer& ObjectInitializer);
};

