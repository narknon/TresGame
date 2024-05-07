#pragma once
#include "CoreMinimal.h"
#include "TresEnemyToyPawnBase.h"
#include "TresEnemyBouncyPetsPawnBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresEnemyBouncyPetsPawnBase : public ATresEnemyToyPawnBase {
    GENERATED_BODY()
public:
    ATresEnemyBouncyPetsPawnBase(const FObjectInitializer& ObjectInitializer);
};

