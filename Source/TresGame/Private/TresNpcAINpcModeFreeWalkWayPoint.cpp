#include "TresNpcAINpcModeFreeWalkWayPoint.h"

FString ATresNpcAINpcModeFreeWalkWayPoint::GetCharUniqueIDName() const {
    return TEXT("");
}

ATresNpcAINpcModeFreeWalkWayPoint::ATresNpcAINpcModeFreeWalkWayPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_CharUniqueID = ETresChrUniqueID::TRES_CHR_UID_UNKNOWN;
    this->m_bUseLookAtPoint = false;
}

