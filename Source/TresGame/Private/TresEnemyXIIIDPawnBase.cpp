#include "TresEnemyXIIIDPawnBase.h"

ATresEnemyXIIIDPawnBase::ATresEnemyXIIIDPawnBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fInvincibleTime = 0.50f;
    this->m_Player = NULL;
}

