#include "TresWallRunEffectActor.h"
#include "TresWallRunEffectComponent.h"

ATresWallRunEffectActor::ATresWallRunEffectActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_Root = CreateDefaultSubobject<UTresWallRunEffectComponent>(TEXT("TresRoot0"));
}

