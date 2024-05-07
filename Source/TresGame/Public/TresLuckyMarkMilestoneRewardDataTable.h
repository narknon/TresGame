#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresLuckyMarkMilestoneRewardDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresLuckyMarkMilestoneRewardDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MarkCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CompleteRewardFlag: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RewardTreasureName;
    
    TRESGAME_API FTresLuckyMarkMilestoneRewardDataTable();
};

