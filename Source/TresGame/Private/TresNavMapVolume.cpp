#include "TresNavMapVolume.h"

ATresNavMapVolume::ATresNavMapVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_EnableNavMap = true;
    this->m_SwitchNavMapTime = 1.50f;
}

