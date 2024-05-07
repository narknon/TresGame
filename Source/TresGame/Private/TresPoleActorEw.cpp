#include "TresPoleActorEw.h"
#include "Components/SceneComponent.h"
#include "TresPoleComponent.h"

void ATresPoleActorEw::SetEnable(bool bEnable) {
}

bool ATresPoleActorEw::IsEnable() const {
    return false;
}

ATresPoleActorEw::ATresPoleActorEw(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MyRoot"));
    this->PoleComponentDefault = CreateDefaultSubobject<UTresPoleComponent>(TEXT("PoleComponentDefault"));
}

