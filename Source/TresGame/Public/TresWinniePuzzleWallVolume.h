#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresWinniePuzzleWallVolume.generated.h"

UCLASS(Blueprintable)
class ATresWinniePuzzleWallVolume : public ATresVolume {
    GENERATED_BODY()
public:
    ATresWinniePuzzleWallVolume(const FObjectInitializer& ObjectInitializer);
};

