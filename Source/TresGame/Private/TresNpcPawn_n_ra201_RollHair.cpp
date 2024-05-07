#include "TresNpcPawn_n_ra201_RollHair.h"
#include "TresSkeletalMeshComponent.h"

ATresNpcPawn_n_ra201_RollHair::ATresNpcPawn_n_ra201_RollHair(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyMesh = CreateDefaultSubobject<UTresSkeletalMeshComponent>(TEXT("TresPawnRollHairSkeletalMesh0"));
}

