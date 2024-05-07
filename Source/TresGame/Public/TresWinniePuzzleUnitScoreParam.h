#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleUnitScore.h"
#include "WinniePuzzleUnitScoreSizeJudgementMethod.h"
#include "TresWinniePuzzleUnitScoreParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleUnitScoreParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresWinniePuzzleUnitScore> UnitScores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresWinniePuzzleUnitScore> UnitScoresForCharacterBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    WinniePuzzleUnitScoreSizeJudgementMethod UnitScoreSizeJudgementMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnitScoreSizeJudgementNum;
    
    TRESGAME_API FTresWinniePuzzleUnitScoreParam();
};

