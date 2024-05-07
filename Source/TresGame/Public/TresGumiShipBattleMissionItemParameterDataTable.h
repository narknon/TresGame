#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipDropPrizeData.h"
#include "TresGumiShipBattleMissionItemParameterDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipBattleMissionItemParameterDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresGumiShipDropPrizeData m_Compensations[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipDropPrizeData m_CompensationForFirstTime;
    
    TRESGAME_API FTresGumiShipBattleMissionItemParameterDataTable();
};

