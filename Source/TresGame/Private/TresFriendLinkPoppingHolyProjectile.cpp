#include "TresFriendLinkPoppingHolyProjectile.h"

ATresFriendLinkPoppingHolyProjectile::ATresFriendLinkPoppingHolyProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fRisingThresholdHeight = 300.00f;
    this->m_fGravityScaleWhenRising = 0.00f;
    this->m_fGravityScaleWhenFalling = 10.00f;
    this->m_fLifeTimeWhenFalling = 1.00f;
    this->m_fBattleAreaOutsideFallingThresholdHeight = -700.00f;
}

