#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipEnemyTerritoryInfo.h"
#include "TresGumiShipEnemyTerritoryParameterDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipEnemyTerritoryParameterDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGumiShipEnemyTerritoryInfo> m_Territory;
    
    TRESGAME_API FTresGumiShipEnemyTerritoryParameterDataTable();
};

