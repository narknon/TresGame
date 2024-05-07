#include "TresEnemyXIIIBCoopPawnBase.h"

bool ATresEnemyXIIIBCoopPawnBase::IsEndVanishMarluxiaAndLarxene() const {
    return false;
}

ATresEnemyXIIIBCoopPawnBase::ATresEnemyXIIIBCoopPawnBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_BothVanishModeEndTime = 0.00f;
}

