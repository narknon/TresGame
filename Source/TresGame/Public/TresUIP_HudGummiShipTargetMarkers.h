#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUISubParts.h"
#include "TresGumiShipTargetMarkerObject.h"
#include "TresUIP_HudGummiShipTargetMarkers.generated.h"

UCLASS(Blueprintable, NonTransient)
class UTresUIP_HudGummiShipTargetMarkers : public UTresGumiShipUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient)
    FTresGumiShipTargetMarkerObject m_rTargetMarkers[30];
    
public:
    UTresUIP_HudGummiShipTargetMarkers();
};

