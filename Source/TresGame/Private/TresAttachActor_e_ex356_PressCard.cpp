#include "TresAttachActor_e_ex356_PressCard.h"
#include "Components/SceneComponent.h"

ATresAttachActor_e_ex356_PressCard::ATresAttachActor_e_ex356_PressCard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MyRoot"));
}

