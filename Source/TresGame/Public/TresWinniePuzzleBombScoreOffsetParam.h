#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresWinniePuzzleBombScoreOffsetParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleBombScoreOffsetParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Column;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    TRESGAME_API FTresWinniePuzzleBombScoreOffsetParam();
};

