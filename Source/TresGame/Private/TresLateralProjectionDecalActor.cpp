#include "TresLateralProjectionDecalActor.h"
#include "Components/SceneComponent.h"
#include "Components/DecalComponent.h"

ATresLateralProjectionDecalActor::ATresLateralProjectionDecalActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->DecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("Decal"));
}

