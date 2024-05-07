#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleTotalScoreEvalution.h"
#include "TresWinniePuzzleTotalScoreEvalution.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleTotalScoreEvalution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 totalScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    WinniePuzzleTotalScoreEvalution Evalution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> GotItemNumList;
    
    TRESGAME_API FTresWinniePuzzleTotalScoreEvalution();
};

