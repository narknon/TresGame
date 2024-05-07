#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RemyRestaurantRank.h"
#include "RemyKitchenGrade.h"
#include "RemyMilestone.h"
#include "TresRemyRestaurantRankDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresRemyRestaurantRankDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RemyRestaurantRank Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NecessaryPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RemyMilestone Milestone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RemyKitchenGrade KitchenGrade;
    
    TRESGAME_API FTresRemyRestaurantRankDataTable();
};

