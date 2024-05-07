#include "TresEwEnvRotatorSwitch.h"
#include "Components/SceneComponent.h"

void ATresEwEnvRotatorSwitch::SetMoving(bool bMoving) {
}

bool ATresEwEnvRotatorSwitch::IsMoving() {
    return false;
}


ATresEwEnvRotatorSwitch::ATresEwEnvRotatorSwitch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MyRoot"));
}

