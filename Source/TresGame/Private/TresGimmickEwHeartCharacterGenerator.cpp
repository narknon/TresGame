#include "TresGimmickEwHeartCharacterGenerator.h"

class AActor;
class USceneComponent;

void ATresGimmickEwHeartCharacterGenerator::SetPreviewActorData(AActor* Actor, USceneComponent* SceneComponent, const FTransform& Transform) {
}

void ATresGimmickEwHeartCharacterGenerator::GetPreviewTransformArray(TArray<FTransform>& retTransformArray) {
}

ATresGimmickEwHeartCharacterGenerator::ATresGimmickEwHeartCharacterGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CraeteNum = 1;
    this->GeneratedClass = NULL;
    this->splineActor = NULL;
}

