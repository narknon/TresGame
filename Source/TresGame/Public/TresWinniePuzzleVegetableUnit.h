#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleUnit.h"
#include "TresWinniePuzzleVegetableUnit.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresWinniePuzzleVegetableUnit : public ATresWinniePuzzleUnit {
    GENERATED_BODY()
public:
    ATresWinniePuzzleVegetableUnit(const FObjectInitializer& ObjectInitializer);
};

