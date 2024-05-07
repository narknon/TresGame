#include "TresEventSpotLightPawn.h"
#include "Components/SpotLightComponent.h"

ATresEventSpotLightPawn::ATresEventSpotLightPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MySpotLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("TresSpotLightComponent0"));
}

