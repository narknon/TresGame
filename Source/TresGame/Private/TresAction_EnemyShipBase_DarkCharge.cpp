#include "TresAction_EnemyShipBase_DarkCharge.h"

UTresAction_EnemyShipBase_DarkCharge::UTresAction_EnemyShipBase_DarkCharge() {
    this->m_bEnableAttack = false;
    this->m_CollGrpName = TEXT("DarkCharge");
    this->m_HomingYawRate = 3.00f;
    this->m_HomingEndDist = 1000.00f;
    this->m_DashSpeed = 500.00f;
    this->m_AccelTime = 1.00f;
    this->m_MaxSpeedTime = 1.35f;
    this->m_DeceleTime = 0.65f;
    this->m_CancelOnGuardedTime = 0.50f;
    this->m_CancelTime = 1.00f;
    this->m_bEnableCancelOnHit = true;
    this->m_DashAuraEffect = NULL;
    this->m_DashAuraEffectForLargeShip = NULL;
    this->m_DashAuraMatEffect = NULL;
    this->m_bStartWithTurn = false;
    this->m_RotationYawAccel = 20.00f;
    this->m_TurnRotEndSpeed = 5.00f;
    this->m_TurnRotStartBrakeAngle = 40.00f;
    this->m_TurnRotAccelOnBrake = 10.00f;
    this->m_MaxRollAngle = 10.00f;
    this->m_RollDeclAngle = 3.00f;
    this->m_bRequestShadowMissile = false;
    this->m_BeginShadowMissileTime = 1.00f;
    this->m_ShadowMissileMaxNum = 3;
    this->m_bEnableDisappear = false;
    this->m_ShotShadowMissileAllowTime = 0.50f;
    this->m_DisappearRange = 10000.00f;
    this->m_bSetWarpOutFlag = true;
    this->m_AuraEffectComp = NULL;
    this->m_AuraEffectMatComp1 = NULL;
    this->m_AuraEffectMatComp2 = NULL;
}

