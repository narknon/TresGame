#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipFSMPlayerMovementState.h"
#include "TresGumiShipFSMPlayerAutoHorizontalCorrectionState.generated.h"

UCLASS(Blueprintable)
class UTresGumiShipFSMPlayerAutoHorizontalCorrectionState : public UTresGumiShipFSMPlayerMovementState {
    GENERATED_BODY()
public:
    UTresGumiShipFSMPlayerAutoHorizontalCorrectionState();
};

