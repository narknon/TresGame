#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorCompoBase.h"
#include "TresGumiShipCollisionMgr.generated.h"

UCLASS(Blueprintable, Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipCollisionMgr : public UTresGumiShipActorCompoBase {
    GENERATED_BODY()
public:
    UTresGumiShipCollisionMgr();
};

