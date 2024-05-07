#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleUnit.h"
#include "TresWinniePuzzleFlowerUnit.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresWinniePuzzleFlowerUnit : public ATresWinniePuzzleUnit {
    GENERATED_BODY()
public:
    ATresWinniePuzzleFlowerUnit(const FObjectInitializer& ObjectInitializer);
};

