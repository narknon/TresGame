#include "TresActor_e_ex771_Descent.h"
#include "Components/CapsuleComponent.h"

ATresActor_e_ex771_Descent::ATresActor_e_ex771_Descent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ForceRateCurve = NULL;
    this->MyDescentComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("DescentCollision0"));
    this->m_DescentSplineClass = NULL;
}

