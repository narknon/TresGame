#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleComboEvalution.h"
#include "TresWinniePuzzleScoreEvalutionInOneTurnParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleScoreEvalutionInOneTurnParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScoreInOneTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    WinniePuzzleComboEvalution ScoreEvalution;
    
    TRESGAME_API FTresWinniePuzzleScoreEvalutionInOneTurnParam();
};

