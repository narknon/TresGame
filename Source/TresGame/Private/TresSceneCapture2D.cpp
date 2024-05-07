#include "TresSceneCapture2D.h"


ATresSceneCapture2D::ATresSceneCapture2D(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_SceneCapture2DTrackInst = NULL;
    this->m_Dirty = false;
}

