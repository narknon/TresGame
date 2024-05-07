#include "TresWinnieHUD.h"

ATresWinnieHUD::ATresWinnieHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugUMGRef = NULL;
    this->m_UIDataAssetHundredGame = NULL;
    this->m_pDebugUMG = NULL;
    this->m_HundredGameUI = NULL;
}

