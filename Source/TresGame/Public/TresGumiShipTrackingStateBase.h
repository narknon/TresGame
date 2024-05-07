#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipFSMState.h"
#include "TresGumiShipTrackingStateBase.generated.h"

UCLASS(Blueprintable)
class UTresGumiShipTrackingStateBase : public UTresGumiShipFSMState {
    GENERATED_BODY()
public:
    UTresGumiShipTrackingStateBase();
};

