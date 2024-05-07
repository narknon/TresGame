#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleUnitScore.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleUnitScore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnitNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    TRESGAME_API FTresWinniePuzzleUnitScore();
};

