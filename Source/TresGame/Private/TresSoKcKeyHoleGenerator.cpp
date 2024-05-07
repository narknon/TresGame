#include "TresSoKcKeyHoleGenerator.h"
#include "Components/SceneComponent.h"

ATresSoKcKeyHoleGenerator::ATresSoKcKeyHoleGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GeneratorRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("KeyHoleGeneratorRoot"));
}

