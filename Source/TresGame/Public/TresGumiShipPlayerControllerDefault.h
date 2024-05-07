#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPlayerControllerBase.h"
#include "TresGumiShipPlayerControllerDefault.generated.h"

UCLASS(Blueprintable)
class ATresGumiShipPlayerControllerDefault : public ATresGumiShipPlayerControllerBase {
    GENERATED_BODY()
public:
    ATresGumiShipPlayerControllerDefault(const FObjectInitializer& ObjectInitializer);
};

