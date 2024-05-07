#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerSphere.h"
#include "TresGumiShipTriggerSphere.generated.h"

UCLASS(Blueprintable)
class ATresGumiShipTriggerSphere : public ATriggerSphere {
    GENERATED_BODY()
public:
    ATresGumiShipTriggerSphere(const FObjectInitializer& ObjectInitializer);
};

