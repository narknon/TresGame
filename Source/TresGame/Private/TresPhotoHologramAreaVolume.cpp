#include "TresPhotoHologramAreaVolume.h"

ATresPhotoHologramAreaVolume::ATresPhotoHologramAreaVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsEndOverlapTrigger = false;
    this->IsWarningEvent = false;
    this->IsPlayerLocationResetEvent = false;
    this->IsHologramLocationResetEvent = false;
    this->IsHologramDestroyEvent = false;
}

