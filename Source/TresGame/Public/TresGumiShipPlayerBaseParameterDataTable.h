#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipPlayerBaseCommonParameter.h"
#include "TresGumiShipPlayerBaseMovementParameter.h"
#include "TresGumiShipPlayerBaseTrackingParameter.h"
#include "TresGumiShipPlayerBaseParameterDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipPlayerBaseParameterDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipPlayerBaseCommonParameter m_Common;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipPlayerBaseMovementParameter m_Movement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipPlayerBaseTrackingParameter m_Tracking;
    
    TRESGAME_API FTresGumiShipPlayerBaseParameterDataTable();
};

