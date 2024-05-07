#pragma once
#include "CoreMinimal.h"
#include "TresSharedPlayerController.h"
#include "TresWinniePlayerController.generated.h"

UCLASS(Blueprintable)
class ATresWinniePlayerController : public ATresSharedPlayerController {
    GENERATED_BODY()
public:
    ATresWinniePlayerController(const FObjectInitializer& ObjectInitializer);
};

