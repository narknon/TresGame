#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleUnitBase.h"
#include "TresWinniePuzzleUnit.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresWinniePuzzleUnit : public ATresWinniePuzzleUnitBase {
    GENERATED_BODY()
public:
    ATresWinniePuzzleUnit(const FObjectInitializer& ObjectInitializer);
};

