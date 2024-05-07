#include "TresAction1_e_ex043_SideBoost.h"

UTresAction1_e_ex043_SideBoost::UTresAction1_e_ex043_SideBoost() {
    this->m_SideBoostType = ETresEnemy_e_ex043_SideBoostType_Right;
    this->m_fCodeCanExecuteSweepDist = 100.00f;
    this->m_fBoostAngle = 50.00f;
    this->m_fBoostSpeed = 7000.00f;
    this->m_fBoostDuration = 0.30f;
    this->m_fFallingTurnSpeed = 100.00f;
    this->m_FallingDecelerationCurve_XY = NULL;
    this->m_FallingDecelerationCurve_Z = NULL;
    this->m_bIsQuickEnd = false;
    this->m_fQuickEndTime = 0.30f;
    this->m_bDebugWarpToStart = false;
}

