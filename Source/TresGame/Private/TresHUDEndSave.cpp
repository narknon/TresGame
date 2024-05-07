#include "TresHUDEndSave.h"

ATresHUDEndSave::ATresHUDEndSave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_BGM = NULL;
    this->m_UIDataAssetEndSave = NULL;
    this->m_IgnoreInputTime = 5.00f;
    this->m_DisplayTime = 30.00f;
    this->m_SaveLoad = NULL;
    this->m_CreditDLC = NULL;
}

