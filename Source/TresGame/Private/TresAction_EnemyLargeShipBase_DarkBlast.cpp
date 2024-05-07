#include "TresAction_EnemyLargeShipBase_DarkBlast.h"

UTresAction_EnemyLargeShipBase_DarkBlast::UTresAction_EnemyLargeShipBase_DarkBlast() {
    this->m_EffCharge = NULL;
    this->m_DarkBlastChargeTime = 10.00f;
    this->m_DarkBlastShotWaitTime = 4.00f;
    this->m_MaxBlastNum = 1;
    this->m_DarkBlastAfterWaitTime = 3.00f;
    this->m_DarkBlastLowSpeedRate = 0.50f;
    this->m_DarkBlastLowSpeedTime = 1.50f;
    this->m_ChargeEffect = NULL;
}

