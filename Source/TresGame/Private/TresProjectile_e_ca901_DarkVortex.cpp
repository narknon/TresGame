#include "TresProjectile_e_ca901_DarkVortex.h"

void ATresProjectile_e_ca901_DarkVortex::HandleOnImpact(const FHitResult& HitResult) {
}

ATresProjectile_e_ca901_DarkVortex::ATresProjectile_e_ca901_DarkVortex(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TentacleShootUpProjectileAsset = NULL;
    this->m_EffectAsset = NULL;
}

