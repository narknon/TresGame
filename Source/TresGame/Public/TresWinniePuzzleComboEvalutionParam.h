#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleComboEvalution.h"
#include "TresWinniePuzzleComboEvalutionParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleComboEvalutionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresWinniePuzzleComboEvalution> ComboEvalution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BreakthroughLimitBonusScorePerCombo;
    
    TRESGAME_API FTresWinniePuzzleComboEvalutionParam();
};

