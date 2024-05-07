#include "TresGimmickRA_SignBoardBase.h"
#include "TresReactorComponent.h"

void ATresGimmickRA_SignBoardBase::OnChangeBattleMode(bool bIsBattleMode) {
}

ATresGimmickRA_SignBoardBase::ATresGimmickRA_SignBoardBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyReactor = CreateDefaultSubobject<UTresReactorComponent>(TEXT("TresReactor0"));
}

