#include "TresFoodstuffPlacementActor.h"
#include "TresFoodstuffRootComponent.h"

ATresFoodstuffPlacementActor::ATresFoodstuffPlacementActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyRootComponent = CreateDefaultSubobject<UTresFoodstuffRootComponent>(TEXT("SceneComponent0"));
}

