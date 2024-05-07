#include "TresShootFlowActor.h"
#include "TresShootFlowComponent.h"

ATresShootFlowActor::ATresShootFlowActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_Root = CreateDefaultSubobject<UTresShootFlowComponent>(TEXT("TresRoot0"));
}

