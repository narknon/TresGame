#include "AITestProjectile_BoneCrush.h"

AAITestProjectile_BoneCrush::AAITestProjectile_BoneCrush(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bFollowsVelocity = false;
    this->m_fFollowsVelRate = 0.00f;
}

