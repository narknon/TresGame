#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipBadStateResistance.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipBadStateResistance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bStun;
    
    TRESGAME_API FTresGumiShipBadStateResistance();
};

