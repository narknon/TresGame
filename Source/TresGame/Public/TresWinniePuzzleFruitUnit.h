#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleUnit.h"
#include "TresWinniePuzzleFruitUnit.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresWinniePuzzleFruitUnit : public ATresWinniePuzzleUnit {
    GENERATED_BODY()
public:
    ATresWinniePuzzleFruitUnit(const FObjectInitializer& ObjectInitializer);
};

