#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorBase.h"
#include "TresGumiShipSuckPrize.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API ATresGumiShipSuckPrize : public ATresGumiShipActorBase {
    GENERATED_BODY()
public:
    ATresGumiShipSuckPrize(const FObjectInitializer& ObjectInitializer);
};

