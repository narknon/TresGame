#include "TresGimmickCA_StopBlackPearl.h"
#include "TresCAShipComponent.h"

ATresGimmickCA_StopBlackPearl::ATresGimmickCA_StopBlackPearl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TresCAShipComponent = CreateDefaultSubobject<UTresCAShipComponent>(TEXT("TresCAShipComponent"));
}

