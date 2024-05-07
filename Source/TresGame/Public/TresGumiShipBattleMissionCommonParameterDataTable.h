#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipBattleMissionCommonParam.h"
#include "TresGumiShipBattleMissionCommonParameterDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipBattleMissionCommonParameterDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipBattleMissionCommonParam m_Common;
    
    TRESGAME_API FTresGumiShipBattleMissionCommonParameterDataTable();
};

