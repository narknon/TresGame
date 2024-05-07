#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipFSMState.h"
#include "TresGumiShipIdleState.generated.h"

UCLASS(Blueprintable)
class UTresGumiShipIdleState : public UTresGumiShipFSMState {
    GENERATED_BODY()
public:
    UTresGumiShipIdleState();
};

