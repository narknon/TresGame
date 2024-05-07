#include "TresRemyHUD.h"

ATresRemyHUD::ATresRemyHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugUMGRef = NULL;
    this->UIAsset = NULL;
    this->m_debugUMG = NULL;
    this->m_HudRemy = NULL;
    this->m_MenuRemy = NULL;
}

