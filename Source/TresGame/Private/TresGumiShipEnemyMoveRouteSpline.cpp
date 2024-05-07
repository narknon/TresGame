#include "TresGumiShipEnemyMoveRouteSpline.h"
#include "Components/SplineComponent.h"

ATresGumiShipEnemyMoveRouteSpline::ATresGumiShipEnemyMoveRouteSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pEnemyMoveRouteSpline = CreateDefaultSubobject<USplineComponent>(TEXT("spline"));
}

