#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerCapsule.h"
#include "TresGumiShipTriggerCapsule.generated.h"

UCLASS(Blueprintable)
class ATresGumiShipTriggerCapsule : public ATriggerCapsule {
    GENERATED_BODY()
public:
    ATresGumiShipTriggerCapsule(const FObjectInitializer& ObjectInitializer);
};

