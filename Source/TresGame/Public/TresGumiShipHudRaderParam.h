#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipHudRaderParam.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipHudRaderParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRaderRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMiddleAlertRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fNearAlertRange;
    
    TRESGAME_API FTresGumiShipHudRaderParam();
};

