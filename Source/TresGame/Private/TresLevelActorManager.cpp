#include "TresLevelActorManager.h"
#include "Components/SceneComponent.h"

ATresLevelActorManager::ATresLevelActorManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TresRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MyRoot"));
}

