#include "TresGenerateWaterSurfaceNavMesh.h"
#include "Components/BoxComponent.h"

ATresGenerateWaterSurfaceNavMesh::ATresGenerateWaterSurfaceNavMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    this->m_NavModifierBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("NavModifierBoxComp"));
}

