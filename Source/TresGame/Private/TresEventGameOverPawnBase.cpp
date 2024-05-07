#include "TresEventGameOverPawnBase.h"

ATresEventGameOverPawnBase::ATresEventGameOverPawnBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_CameraAnimAsset = NULL;
    this->m_LightEffect = NULL;
    this->m_GameOverKHS = NULL;
    this->m_Camera = NULL;
    this->m_pEffect = NULL;
    this->m_pKHS = NULL;
}

