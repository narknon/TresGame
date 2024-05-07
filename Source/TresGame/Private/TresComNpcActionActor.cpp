#include "TresComNpcActionActor.h"
#include "TresComNpcActionComponent.h"

ATresComNpcActionActor::ATresComNpcActionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyComNpcAction = CreateDefaultSubobject<UTresComNpcActionComponent>(TEXT("ComNpcActionComponent0"));
}

