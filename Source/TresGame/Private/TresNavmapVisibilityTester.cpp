#include "TresNavmapVisibilityTester.h"

void ATresNavmapVisibilityTester::SetDisplayHitActors(bool bEnable) {
}

ATresNavmapVisibilityTester::ATresNavmapVisibilityTester(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDisplayHitActors = false;
    this->NavMeshThickness = 100.00f;
    this->EdgeNormalThickness = 0.00f;
    this->bDrawCollisionConvexMeshes = false;
}

