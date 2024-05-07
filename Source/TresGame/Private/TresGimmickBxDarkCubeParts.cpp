#include "TresGimmickBxDarkCubeParts.h"
#include "TresRootComponent.h"

ATresGimmickBxDarkCubeParts::ATresGimmickBxDarkCubeParts(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyRoot = CreateDefaultSubobject<UTresRootComponent>(TEXT("TresRoot"));
}

