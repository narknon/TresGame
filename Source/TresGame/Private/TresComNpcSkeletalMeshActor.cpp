#include "TresComNpcSkeletalMeshActor.h"
#include "TresSkeletalMeshComponent.h"

ATresComNpcSkeletalMeshActor::ATresComNpcSkeletalMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_fNearCameraRange = 0.00f;
    this->MyMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresComNpcMesh0"));
}

