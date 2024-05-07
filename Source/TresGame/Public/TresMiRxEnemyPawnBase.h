#pragma once
#include "CoreMinimal.h"
#include "TresMiRxPawn.h"
#include "TresMiRxEnemyPawnBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresMiRxEnemyPawnBase : public ATresMiRxPawn {
    GENERATED_BODY()
public:
    ATresMiRxEnemyPawnBase(const FObjectInitializer& ObjectInitializer);
};

