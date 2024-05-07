#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleComboEvalution.h"
#include "TresWinniePuzzleComboEvalution.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleComboEvalution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComboNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BonusScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    WinniePuzzleComboEvalution Evalution;
    
    TRESGAME_API FTresWinniePuzzleComboEvalution();
};

