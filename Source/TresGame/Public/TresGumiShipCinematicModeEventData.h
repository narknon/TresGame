#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipCinematicModeEventData.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipCinematicModeEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_eEventFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_EventName;
    
    TRESGAME_API FTresGumiShipCinematicModeEventData();
};

