#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipRailShootingRouteSplineDataGetter.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipRailShootingRouteSplineDataGetter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSplineDistanceRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bReverseSpline: 1;
    
    TRESGAME_API FTresGumiShipRailShootingRouteSplineDataGetter();
};

