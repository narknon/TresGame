#include "TresFriendLinkPawnGoofyShoot.h"

ATresFriendLinkPawnGoofyShoot::ATresFriendLinkPawnGoofyShoot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_Param_ThrowPitch = -45.00f;
    this->m_pDummyTarget = NULL;
}

