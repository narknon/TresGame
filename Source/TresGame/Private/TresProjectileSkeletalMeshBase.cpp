#include "TresProjectileSkeletalMeshBase.h"
#include "TresSkeletalMeshComponent.h"
#include "TresEffectAttachComponent.h"

ATresProjectileSkeletalMeshBase::ATresProjectileSkeletalMeshBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresCharMesh0"));
    this->m_EffectAttach = CreateDefaultSubobject<UTresEffectAttachComponent>(TEXT("TresEffectAttach0"));
    this->m_AttachEffectGroupID = -1;
    this->m_AttachData = NULL;
}

