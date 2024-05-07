#include "TresProjectileGenerator_e_ex781_SlashWave.h"

ATresProjectileGenerator_e_ex781_SlashWave::ATresProjectileGenerator_e_ex781_SlashWave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_FinishParticleData = NULL;
    this->m_GrandSlashParticleData = NULL;
    this->m_SignIntervalTime = 0.00f;
    this->m_MyTarget = NULL;
    this->m_SignParticle = NULL;
}

