#include "TresSimpleEffect.h"
#include "TresRootComponent.h"

ATresSimpleEffect::ATresSimpleEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyRoot = CreateDefaultSubobject<UTresRootComponent>(TEXT("TresRoot"));
    this->m_fLoopEndTime = 0.00f;
}

