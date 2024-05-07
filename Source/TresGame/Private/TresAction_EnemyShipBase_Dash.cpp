#include "TresAction_EnemyShipBase_Dash.h"

UTresAction_EnemyShipBase_Dash::UTresAction_EnemyShipBase_Dash() {
    this->m_DashTime = 4.00f;
    this->m_DashSpeed = 6000.00f;
    this->m_AccelTimePer = 2;
    this->m_MaxSpeedPer = 5;
    this->m_DecelePer = 3;
    this->m_CancelTime = 1.00f;
}

