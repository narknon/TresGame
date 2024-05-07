#include "TresGimmickCA_TickControlManager.h"

ATresGimmickCA_TickControlManager::ATresGimmickCA_TickControlManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_UpdateNumPerFrame = 50;
    this->m_ActiveNumPerFrame = 20;
    this->m_ReserveSize = 200;
}

