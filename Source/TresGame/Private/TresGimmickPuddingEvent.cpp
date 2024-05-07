#include "TresGimmickPuddingEvent.h"
#include "TresReactorComponent.h"


ATresGimmickPuddingEvent::ATresGimmickPuddingEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyReactor = CreateDefaultSubobject<UTresReactorComponent>(TEXT("MyReactor"));
}

