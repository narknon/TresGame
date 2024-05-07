#include "TresGimmickInterest.h"
#include "TresRootComponent.h"

ATresGimmickInterest::ATresGimmickInterest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyRoot = CreateDefaultSubobject<UTresRootComponent>(TEXT("TresRoot"));
}

