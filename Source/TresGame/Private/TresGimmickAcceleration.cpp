#include "TresGimmickAcceleration.h"
#include "Particles/ParticleSystemComponent.h"

ATresGimmickAcceleration::ATresGimmickAcceleration(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pEnableEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("EnableEffect"));
    this->m_pEffectCurve = NULL;
}

