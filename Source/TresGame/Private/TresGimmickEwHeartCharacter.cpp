#include "TresGimmickEwHeartCharacter.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

class ASQEX_SplineActor;
class UParticleSystemComponent;

void ATresGimmickEwHeartCharacter::SetSplineActor(ASQEX_SplineActor* splineActor, float positionRate) {
}

void ATresGimmickEwHeartCharacter::SetAbsorbParticle(UParticleSystemComponent* cp) {
}




ATresGimmickEwHeartCharacter::ATresGimmickEwHeartCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MyRoot"));
    this->MyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MyMesh"));
    this->HitLength = 200.00f;
    this->OpacityCompleteTime = 1.00f;
    this->bEnableAnimationOpacity = false;
}

