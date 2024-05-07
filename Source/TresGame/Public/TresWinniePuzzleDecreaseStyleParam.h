#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleDecreaseStyleParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleDecreaseStyleParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColumnNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DecreaseColumnNum1st;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DecreaseColumnNum2nd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColumnDiffPerDecrease;
    
    TRESGAME_API FTresWinniePuzzleDecreaseStyleParam();
};

