#include "TresGimmickBxSingouki01.h"
#include "Components/SpotLightComponent.h"

ATresGimmickBxSingouki01::ATresGimmickBxSingouki01(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpotLightComp = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLightComp"));
}

