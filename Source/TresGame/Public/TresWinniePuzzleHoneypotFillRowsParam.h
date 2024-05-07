#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleHoneypotFillRowsParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleHoneypotFillRowsParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RowIdxes;
    
    TRESGAME_API FTresWinniePuzzleHoneypotFillRowsParam();
};

