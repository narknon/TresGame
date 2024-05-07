#include "TresCoverActionVolume.h"
#include "TresDebugArrowComponent.h"

ATresCoverActionVolume::ATresCoverActionVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyDirArrow = CreateDefaultSubobject<UTresDebugArrowComponent>(TEXT("DirArrow0"));
    this->m_IdlingDir = ETresCoverIdlingDirID::TRES_CID_ID_NONE;
    this->m_bEnableCoverDir = true;
    this->m_CoverCameraID = 0;
}

