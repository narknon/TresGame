#include "TresSnowDepthTailActor.h"
#include "Particles/ParticleSystemComponent.h"

ATresSnowDepthTailActor::ATresSnowDepthTailActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
}

