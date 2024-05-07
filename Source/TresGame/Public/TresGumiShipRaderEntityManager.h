#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorCompoBase.h"
#include "TresGumiShipRaderEntityManager.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipRaderEntityManager : public UTresGumiShipActorCompoBase {
    GENERATED_BODY()
public:
    UTresGumiShipRaderEntityManager();
};

