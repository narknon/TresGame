#include "TresActor_e_ex771_Attract.h"
#include "Components/CapsuleComponent.h"

ATresActor_e_ex771_Attract::ATresActor_e_ex771_Attract(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyAttractComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("AttractCollision0"));
    this->m_AttractSplineClass = NULL;
}

