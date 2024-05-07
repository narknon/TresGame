#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipFSMPlayerMovementState.h"
#include "TresGumiShipFSMPlayerTrackingDirectState.generated.h"

UCLASS(Blueprintable)
class UTresGumiShipFSMPlayerTrackingDirectState : public UTresGumiShipFSMPlayerMovementState {
    GENERATED_BODY()
public:
    UTresGumiShipFSMPlayerTrackingDirectState();
};

