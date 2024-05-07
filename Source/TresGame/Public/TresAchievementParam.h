#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresAchievementParam.generated.h"

USTRUCT(BlueprintType)
struct FTresAchievementParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Param;
    
    TRESGAME_API FTresAchievementParam();
};

