#include "TresGimmickCarLightMgr.h"
#include "Components/SceneComponent.h"

ATresGimmickCarLightMgr::ATresGimmickCarLightMgr(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MgrRootComponent"));
    this->SpotLightComponents.AddDefaulted(16);
}

