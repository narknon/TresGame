#include "TresGimmickRA_WoodBase.h"
#include "TresPoleComponent.h"

ATresGimmickRA_WoodBase::ATresGimmickRA_WoodBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyPole = CreateDefaultSubobject<UTresPoleComponent>(TEXT("TresPoleComp0"));
}

