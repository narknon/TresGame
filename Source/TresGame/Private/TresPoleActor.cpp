#include "TresPoleActor.h"
#include "TresPoleComponent.h"

void ATresPoleActor::SetEnable(bool bEnable) {
}

bool ATresPoleActor::IsEnable() const {
    return false;
}

ATresPoleActor::ATresPoleActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyRoot = CreateDefaultSubobject<UTresPoleComponent>(TEXT("TresRoot"));
}

