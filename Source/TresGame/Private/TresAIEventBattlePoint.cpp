#include "TresAIEventBattlePoint.h"

void ATresAIEventBattlePoint::SetPhaseTag(const FGameplayTag& InTag) {
}

bool ATresAIEventBattlePoint::IsPhaseTag(const FGameplayTag& InTag) const {
    return false;
}

ATresAIEventBattlePoint::ATresAIEventBattlePoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_UseBattlePlayerEmotionManager = false;
}

