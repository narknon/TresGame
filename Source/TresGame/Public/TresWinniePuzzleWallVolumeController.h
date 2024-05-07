#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleComponentBase.h"
#include "TresWinniePuzzleWallVolumeController.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleWallVolumeController : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
    UTresWinniePuzzleWallVolumeController();
};

