#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipRailSlideActor.h"
#include "TresGumiShipPlayerRailSlideActor.generated.h"

UCLASS(Blueprintable)
class ATresGumiShipPlayerRailSlideActor : public ATresGumiShipRailSlideActor {
    GENERATED_BODY()
public:
    ATresGumiShipPlayerRailSlideActor(const FObjectInitializer& ObjectInitializer);
};

