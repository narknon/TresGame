#include "TresGimmickBxPuddingManager.h"

void ATresGimmickBxPuddingManager::NotifyStop() {
}

void ATresGimmickBxPuddingManager::NotifyEnableLauncher() {
}

ATresGimmickBxPuddingManager::ATresGimmickBxPuddingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bEnableLauncher = false;
}

