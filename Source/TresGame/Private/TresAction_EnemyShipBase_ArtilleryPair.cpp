#include "TresAction_EnemyShipBase_ArtilleryPair.h"

UTresAction_EnemyShipBase_ArtilleryPair::UTresAction_EnemyShipBase_ArtilleryPair() {
    this->m_ArtilleryFrontDefinition = NULL;
    this->m_ArtillerySideDefinition = NULL;
    this->m_YawBorderAngle = 45.00f;
    this->m_LastAttack = NULL;
    this->m_CacheAttacks.AddDefaulted(2);
}

