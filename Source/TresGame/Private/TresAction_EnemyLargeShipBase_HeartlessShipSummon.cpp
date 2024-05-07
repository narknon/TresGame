#include "TresAction_EnemyLargeShipBase_HeartlessShipSummon.h"

UTresAction_EnemyLargeShipBase_HeartlessShipSummon::UTresAction_EnemyLargeShipBase_HeartlessShipSummon() {
    this->m_EnemyID = ETresEnemyUniqueID::TRES_ENEMY_UID_UNKNOWN;
    this->m_RotType = EEnemyLargeShipBase::TO_TARGET;
    this->m_RandomYawRange = 0.00f;
    this->m_bRequireCoreFacedPlayer = false;
    this->m_bSpeedZero = false;
    this->m_bSpawnHidden = false;
    this->m_bSetCoreTypeWeight = false;
    this->m_CoreItemTypeSpawnWeight01 = 10;
    this->m_CoreItemTypeSpawnWeight02 = 10;
    this->m_CoreItemTypeSpawnWeight03 = 10;
}

