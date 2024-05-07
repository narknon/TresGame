#include "TresGumiShipEnemy625Bullet.h"

ATresGumiShipEnemy625Bullet::ATresGumiShipEnemy625Bullet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_MinDeceleration = 0.01f;
    this->m_MaxDeceleration = 20.00f;
}

