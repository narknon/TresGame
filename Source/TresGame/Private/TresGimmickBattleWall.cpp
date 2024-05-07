#include "TresGimmickBattleWall.h"

void ATresGimmickBattleWall::OnChangeCinematicModeProc(bool bIsCinematicMode) {
}


ATresGimmickBattleWall::ATresGimmickBattleWall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_EnableChangeCinematicEvent = false;
}

