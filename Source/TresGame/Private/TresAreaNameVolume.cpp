#include "TresAreaNameVolume.h"

ATresAreaNameVolume::ATresAreaNameVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_EnableAreaName = true;
    this->m_ShowAreaNameUI = true;
    this->m_EnableNavMap = false;
    this->m_SwitchNavMapTime = 1.50f;
}

