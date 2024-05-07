#include "TresBattleVolume.h"

ATresBattleVolume::ATresBattleVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_NotifyMovedOutOfBattleArea = true;
    this->m_EnableDrawing = false;
    this->m_BattleStarted = false;
}

