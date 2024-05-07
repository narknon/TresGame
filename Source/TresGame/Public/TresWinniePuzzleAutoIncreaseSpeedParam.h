#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleAutoIncreaseSpeedParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleAutoIncreaseSpeedParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColumnsNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecreaseSpeed;
    
    TRESGAME_API FTresWinniePuzzleAutoIncreaseSpeedParam();
};

