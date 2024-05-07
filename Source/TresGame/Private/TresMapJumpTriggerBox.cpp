#include "TresMapJumpTriggerBox.h"

void ATresMapJumpTriggerBox::InvokeMapJump() {
}

ATresMapJumpTriggerBox::ATresMapJumpTriggerBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_FadeType = MAPJUMP_FADE_KIND_WIPEOUT;
    this->m_BlueprintMapJump = false;
}

