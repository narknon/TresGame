#include "TresStaticMesh_e_ex721_Base.h"
#include "TresRootComponent.h"
#include "TresStaticMeshComponent.h"

ATresStaticMesh_e_ex721_Base::ATresStaticMesh_e_ex721_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyRoot = CreateDefaultSubobject<UTresRootComponent>(TEXT("TresRoot"));
    this->MyMesh = CreateDefaultSubobject<UTresStaticMeshComponent>(TEXT("TresCharMesh"));
}

