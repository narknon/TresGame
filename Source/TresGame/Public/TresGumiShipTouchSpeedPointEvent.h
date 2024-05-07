#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipDirectEventBase.h"
#include "TresGumiShipTouchSpeedPointEvent.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipTouchSpeedPointEvent : public FTresGumiShipDirectEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpeedPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUpOnly;
    
    TRESGAME_API FTresGumiShipTouchSpeedPointEvent();
};

