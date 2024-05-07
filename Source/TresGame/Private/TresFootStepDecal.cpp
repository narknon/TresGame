#include "TresFootStepDecal.h"
#include "Components/DecalComponent.h"

class UMaterialInterface;

void ATresFootStepDecal::SetFootStepDecalMaterial(UMaterialInterface* NewDecalMaterial) {
}

ATresFootStepDecal::ATresFootStepDecal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_Decal = CreateDefaultSubobject<UDecalComponent>(TEXT("FootStepDecalComponent"));
}

