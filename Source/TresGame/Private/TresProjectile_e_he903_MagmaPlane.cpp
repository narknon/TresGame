#include "TresProjectile_e_he903_MagmaPlane.h"
#include "Components/SceneComponent.h"

ATresProjectile_e_he903_MagmaPlane::ATresProjectile_e_he903_MagmaPlane(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyOffset = CreateDefaultSubobject<USceneComponent>(TEXT("TresProjectileOffsetCmp0"));
    this->m_OffsetCurve = NULL;
}

