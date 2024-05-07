#include "TresAction_EnemyShipBase_ConditionChecker.h"

UTresAction_EnemyShipBase_ConditionChecker::UTresAction_EnemyShipBase_ConditionChecker() {
    this->m_ConditionType = ETresEnemyShipCondition::MinCoreNum;
    this->m_bWithoutLargeShip = true;
}

