#include "TresLinkActor_e_ex202_Base.h"
#include "Components/SceneComponent.h"

ATresLinkActor_e_ex202_Base::ATresLinkActor_e_ex202_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}

