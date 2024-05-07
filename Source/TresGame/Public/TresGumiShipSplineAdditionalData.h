#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipSplineEventType.h"
#include "TresGumiShipSplineAdditionalData.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipSplineAdditionalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipSplineEventType m_eEventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fKeyDistanceRate;
    
    TRESGAME_API FTresGumiShipSplineAdditionalData();
};

