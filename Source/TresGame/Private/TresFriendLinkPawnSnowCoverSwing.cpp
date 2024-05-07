#include "TresFriendLinkPawnSnowCoverSwing.h"

ATresFriendLinkPawnSnowCoverSwing::ATresFriendLinkPawnSnowCoverSwing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_AirProj = NULL;
    this->m_FriendLinkEndLength = 100.00f;
    this->m_FriendLinkDamageAttackIDName = TEXT("FR_SNOWCOVERSWING_ATTACK");
    this->m_pTree = NULL;
}

