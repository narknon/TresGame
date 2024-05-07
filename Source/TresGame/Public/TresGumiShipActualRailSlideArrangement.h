#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipRailSlideBattleArrangement.h"
#include "TresGumiShipActualRailSlideArrangement.generated.h"

UCLASS(Blueprintable)
class ATresGumiShipActualRailSlideArrangement : public ATresGumiShipRailSlideBattleArrangement {
    GENERATED_BODY()
public:
    ATresGumiShipActualRailSlideArrangement(const FObjectInitializer& ObjectInitializer);
};

