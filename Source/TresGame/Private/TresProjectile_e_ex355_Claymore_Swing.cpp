#include "TresProjectile_e_ex355_Claymore_Swing.h"

ATresProjectile_e_ex355_Claymore_Swing::ATresProjectile_e_ex355_Claymore_Swing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_WeaponGroundHitEffectClass = NULL;
    this->m_bWeaponGroundHitEffectOnlyOnLand = false;
    this->m_fWeaponGroundHitOnLandMaxHeight = 0.00f;
}

