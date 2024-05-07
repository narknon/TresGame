#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipBattleMissionIndividalParam.h"
#include "TresGumiShipBattleMissionIndividalParameterDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipBattleMissionIndividalParameterDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipBattleMissionIndividalParam m_Individal;
    
    TRESGAME_API FTresGumiShipBattleMissionIndividalParameterDataTable();
};

