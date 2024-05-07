#include "TresCameraRcHe001.h"

ATresCameraRcHe001::ATresCameraRcHe001(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TargetEntityTag = TEXT("he_02_enemy_Rocktitan");
    this->m_TargetEntityBoneName = TEXT("center");
}

