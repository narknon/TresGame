#include "TresProjectile_e_ex316_DarkLaser.h"

ATresProjectile_e_ex316_DarkLaser::ATresProjectile_e_ex316_DarkLaser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_HitLandEffectData = NULL;
    this->m_DarkLaserLength = 10000.00f;
    this->m_HitLandEffectCmp = NULL;
}

