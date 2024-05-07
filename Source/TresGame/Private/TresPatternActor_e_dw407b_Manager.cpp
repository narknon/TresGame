#include "TresPatternActor_e_dw407b_Manager.h"
#include "Components/SceneComponent.h"

ATresPatternActor_e_dw407b_Manager::ATresPatternActor_e_dw407b_Manager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}

