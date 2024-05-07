#include "TresGimmickBxDaruma.h"

class AActor;

bool ATresGimmickBxDaruma::CheckBreakClass(AActor* Actor) const {
    return false;
}

void ATresGimmickBxDaruma::AvoidDaruma() {
}

ATresGimmickBxDaruma::ATresGimmickBxDaruma(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TakeOverCamera = true;
    this->BalanceBallCamera = NULL;
}

