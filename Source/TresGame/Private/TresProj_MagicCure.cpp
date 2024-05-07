#include "TresProj_MagicCure.h"

ATresProj_MagicCure::ATresProj_MagicCure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_DetectRange = 300.00f;
    this->m_AppendCure = 20;
    this->m_BonusAppendCure = 10;
    this->m_CureEffectType = ETresCmnCureEffectGrpID::TRES_CURE_GRP_CURE;
    this->m_pTargetActor = NULL;
}

