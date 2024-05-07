#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPlayerAccelerationBase.h"
#include "TresGumiShipPlayerGearAccelCompo.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipPlayerGearAccelCompo : public UTresGumiShipPlayerAccelerationBase {
    GENERATED_BODY()
public:
    UTresGumiShipPlayerGearAccelCompo();
};

