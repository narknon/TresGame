#include "TresPhotoHologramDecoration.h"
#include "TresStaticMeshComponent.h"

void ATresPhotoHologramDecoration::RequestRemoveHologram() {
}

ATresPhotoHologramDecoration::ATresPhotoHologramDecoration(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyStaticMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("MyStaticMesh"));
}

