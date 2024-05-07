#include "TresGenerateNavMesh.h"
#include "Components/BoxComponent.h"

ATresGenerateNavMesh::ATresGenerateNavMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
}

