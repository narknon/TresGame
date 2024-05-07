#include "TresComNpcEntityActor.h"

ATresComNpcEntityActor::ATresComNpcEntityActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_MasterGroupName = TEXT("Group");
    this->m_bMasterGroupUseSkelton = true;
}

