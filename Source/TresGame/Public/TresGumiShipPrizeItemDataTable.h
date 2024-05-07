#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataTable.h"
#include "TresGumiShipPrizeDataTable.h"
#include "TresGumiShipPrizeItemDataTable.generated.h"

class ATresGumiShipDropPrize;

USTRUCT(BlueprintType)
struct FTresGumiShipPrizeItemDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresGumiShipDropPrize> m_SpawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipPrizeDataTable m_Parameters;
    
    TRESGAME_API FTresGumiShipPrizeItemDataTable();
};

