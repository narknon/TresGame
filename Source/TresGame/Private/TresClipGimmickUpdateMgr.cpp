#include "TresClipGimmickUpdateMgr.h"

ATresClipGimmickUpdateMgr::ATresClipGimmickUpdateMgr(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClipLength = 10000.00f;
    this->ClipActorPredictedSize = 0;
}

