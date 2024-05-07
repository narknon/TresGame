#pragma once
#include "CoreMinimal.h"
#include "TresGameState.h"
#include "TresGameStateGumiShip.generated.h"

UCLASS(Blueprintable)
class ATresGameStateGumiShip : public ATresGameState {
    GENERATED_BODY()
public:
    ATresGameStateGumiShip(const FObjectInitializer& ObjectInitializer);
};

