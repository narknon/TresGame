#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TresUIPlayerController.generated.h"

UCLASS(Blueprintable)
class ATresUIPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    ATresUIPlayerController(const FObjectInitializer& ObjectInitializer);
};

