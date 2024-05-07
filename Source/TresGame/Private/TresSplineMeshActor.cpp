#include "TresSplineMeshActor.h"
#include "Components/SceneComponent.h"
#include "Components/SplineMeshComponent.h"

ATresSplineMeshActor::ATresSplineMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
    this->SplineMeshComponent = CreateDefaultSubobject<USplineMeshComponent>(TEXT("SplineMesh"));
}

