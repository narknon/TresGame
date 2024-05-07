#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipDirectParam.h"
#include "TresGumiShipDirectEventBase.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipDirectEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipDirectParam m_DirectParam;
    
    TRESGAME_API FTresGumiShipDirectEventBase();
};

