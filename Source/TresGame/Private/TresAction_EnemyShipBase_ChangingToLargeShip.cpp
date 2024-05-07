#include "TresAction_EnemyShipBase_ChangingToLargeShip.h"

UTresAction_EnemyShipBase_ChangingToLargeShip::UTresAction_EnemyShipBase_ChangingToLargeShip() {
    this->m_SpawnEnemyID = ETresEnemyUniqueID::TRES_ENEMY_UID_CA403;
    this->m_OverwriteSuicideTime = 60.00f;
    this->m_SpeedDeclRate = 0.10f;
    this->m_WarpOutWaitTimer = 4.00f;
    this->m_SpawnLargeShipWaitTimer = 3.00f;
}

