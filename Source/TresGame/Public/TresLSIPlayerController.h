#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TresControllerInterface.h"
#include "TresLSIPlayerController.generated.h"

UCLASS(Blueprintable)
class ATresLSIPlayerController : public APlayerController, public ITresControllerInterface {
    GENERATED_BODY()
public:
    ATresLSIPlayerController(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

