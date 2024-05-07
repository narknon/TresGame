#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleGhostUnitStraightMoveJudgementRowRange.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleGhostUnitStraightMoveJudgementRowRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndRow;
    
    TRESGAME_API FTresWinniePuzzleGhostUnitStraightMoveJudgementRowRange();
};

