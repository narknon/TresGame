#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipCollisionMgr.h"
#include "TresGumiShipBodyCollisionMgr.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipBodyCollisionMgr : public UTresGumiShipCollisionMgr {
    GENERATED_BODY()
public:
    UTresGumiShipBodyCollisionMgr();
};

