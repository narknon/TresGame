#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipDropPrizeData.h"
#include "GUMI_SHIP_DROPITEM_RARITY.h"
#include "TresGumiShipItemlotteryDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipItemlotteryDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipDropPrizeData m_Itemlottery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    GUMI_SHIP_DROPITEM_RARITY m_Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ApperProb;
    
    TRESGAME_API FTresGumiShipItemlotteryDataTable();
};

