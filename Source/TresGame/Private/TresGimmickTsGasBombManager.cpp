#include "TresGimmickTsGasBombManager.h"

class ATresCharPawnBase;

void ATresGimmickTsGasBombManager::StartVoiceEffect(FVector BaseLocation, float EffectRange) {
}


bool ATresGimmickTsGasBombManager::IsPawnEffected(ATresCharPawnBase* Pawn) const {
    return false;
}

void ATresGimmickTsGasBombManager::EndVoiceEffectImmediately() {
}

ATresGimmickTsGasBombManager::ATresGimmickTsGasBombManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_VoiceEffectTime = 10.00f;
    this->m_VoiceEffectFadeTime = 1.00f;
    this->m_EffectRange = 0.00f;
}

