#pragma once
#include "CoreMinimal.h"
#include "TresPlacePrizeMovementBase.h"
#include "TresPlaceChildBonusPrizeMovementBase.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresPlaceChildBonusPrizeMovementBase : public UTresPlacePrizeMovementBase {
    GENERATED_BODY()
public:
    UTresPlaceChildBonusPrizeMovementBase();
};

