#pragma once
#include "CoreMinimal.h"
#include "TresEnemyToyPawnBase.h"
#include "TresEnemyPatchworkAnimalsPawnBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresEnemyPatchworkAnimalsPawnBase : public ATresEnemyToyPawnBase {
    GENERATED_BODY()
public:
    ATresEnemyPatchworkAnimalsPawnBase(const FObjectInitializer& ObjectInitializer);
};

