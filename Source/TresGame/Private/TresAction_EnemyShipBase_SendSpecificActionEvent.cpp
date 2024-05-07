#include "TresAction_EnemyShipBase_SendSpecificActionEvent.h"

UTresAction_EnemyShipBase_SendSpecificActionEvent::UTresAction_EnemyShipBase_SendSpecificActionEvent() {
    this->m_BeginSpecificActionID = TRES_ASA_BOSS_DIE;
    this->m_EndSpecificActionID = TRES_ASA_BOSS_DIE;
    this->m_TimeLimit = 5.00f;
    this->m_bConditionInvincible = true;
}

