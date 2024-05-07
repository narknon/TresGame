#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipFSMPlayerMovementState.h"
#include "TresGumiShipFSMPlayerImmelmannTurnState.generated.h"

UCLASS(Blueprintable)
class UTresGumiShipFSMPlayerImmelmannTurnState : public UTresGumiShipFSMPlayerMovementState {
    GENERATED_BODY()
public:
    UTresGumiShipFSMPlayerImmelmannTurnState();
};

