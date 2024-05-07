#pragma once
#include "CoreMinimal.h"
#include "TresPlayerPawnBase.h"
#include "TresRemyPawn.generated.h"

UCLASS(Blueprintable)
class ATresRemyPawn : public ATresPlayerPawnBase {
    GENERATED_BODY()
public:
    ATresRemyPawn(const FObjectInitializer& ObjectInitializer);
};

