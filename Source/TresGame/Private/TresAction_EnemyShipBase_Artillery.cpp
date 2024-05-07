#include "TresAction_EnemyShipBase_Artillery.h"

UTresAction_EnemyShipBase_Artillery::UTresAction_EnemyShipBase_Artillery() {
    this->m_RangedRandAngle = 0.00f;
    this->m_RangedRandOverDistance = 0.00f;
    this->m_RangedRandPrevDistance = 0.00f;
    this->m_bTargetRotByVelocity = true;
    this->m_DelayFireTime = 0.10f;
    this->m_bRefreshAfterDelay = false;
    this->m_bPitchToTargetDirectly = false;
    this->m_RangedPitchAngle = 30.00f;
    this->m_AimCompPercentage = 50.00f;
    this->m_AimCompVelLimit = 2000.00f;
    this->m_bUseMovedVelocity = false;
    this->m_ArtilleryLimitAngle = 60.00f;
    this->m_AILimitAngle = 60.00f;
    this->m_MaxProjectileNum = 12;
    this->m_ArtilleryOneShotNum = 2;
    this->m_LimitLowerSpeed = 10000.00f;
    this->m_bOverrWriteMaxSpeed = false;
    this->m_OverrWriteMaxSpeed = 10000.00f;
    this->m_bDisableTeamCheck = false;
    this->m_bUseTargetBB = false;
    this->m_SelectOptimizeCannonRate = 100;
    this->m_AttackName2 = TEXT("Artillery2");
}

