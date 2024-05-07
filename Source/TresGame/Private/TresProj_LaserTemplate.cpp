#include "TresProj_LaserTemplate.h"

ATresProj_LaserTemplate::ATresProj_LaserTemplate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_eEffectForward = X_FORWAED;
    this->m_fScaleTime = 0.00f;
    this->m_bIgnoreBodyCollision = true;
    this->m_bLifeOverIfTakeDamage = false;
}

