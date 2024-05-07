#include "TresSoKcLightWaveProjectile.h"

ATresSoKcLightWaveProjectile::ATresSoKcLightWaveProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pLightWaveBeamEffectAsset = NULL;
    this->m_fLightWaveBeamLoopEndWaitTime = 0.50f;
}

