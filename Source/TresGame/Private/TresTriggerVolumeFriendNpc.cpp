#include "TresTriggerVolumeFriendNpc.h"

ATresTriggerVolumeFriendNpc::ATresTriggerVolumeFriendNpc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_NotifyType = ETresNotifyFriendNpc::MoveToActionPointStart;
    this->m_ActionPoint = NULL;
}

