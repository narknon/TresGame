#pragma once
#include "CoreMinimal.h"
#include "TresSharedPlayerController.h"
#include "TresRemyPlayerController.generated.h"

UCLASS(Blueprintable)
class ATresRemyPlayerController : public ATresSharedPlayerController {
    GENERATED_BODY()
public:
    ATresRemyPlayerController(const FObjectInitializer& ObjectInitializer);
};

