#include "TresSplineMeshGenerator.h"

class ASQEX_SplineActor;
class UStaticMesh;

void ATresSplineMeshGenerator::Create(ASQEX_SplineActor* splineActor, UStaticMesh* StaticMesh, UStaticMesh* collisionStaticMesh) {
}



ATresSplineMeshGenerator::ATresSplineMeshGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FirstSplineActor = NULL;
    this->EndSplineActor = NULL;
}

