#include "TresEnemy_e_ex311_KeyBladeProjectileBase.h"

ATresEnemy_e_ex311_KeyBladeProjectileBase::ATresEnemy_e_ex311_KeyBladeProjectileBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_HitParticleData = NULL;
    this->m_CharHitParticleData = NULL;
    this->m_SpawnTailIntervalTime = 0.10f;
    this->m_KBTailAttackPawnData = NULL;
}

