#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TresWorldMapPlayerController.generated.h"

UCLASS(Blueprintable)
class ATresWorldMapPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    ATresWorldMapPlayerController(const FObjectInitializer& ObjectInitializer);
};

