#include "TresGimmickSimpleStaticBase.h"
#include "TresStaticMeshComponent.h"

ATresGimmickSimpleStaticBase::ATresGimmickSimpleStaticBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresGimmickMesh0"));
    this->m_IsGimmickClipDitherParamInvert = false;
}

