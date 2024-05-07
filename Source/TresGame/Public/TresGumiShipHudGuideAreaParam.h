#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipHudGuideAreaParam.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipHudGuideAreaParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWorldSymbolMarkerVolumeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTravelGateMarkerVolumeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTreasureSphereMarkerVolumeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEnemyTerritoryMarkerVolumeRadius;
    
    TRESGAME_API FTresGumiShipHudGuideAreaParam();
};

