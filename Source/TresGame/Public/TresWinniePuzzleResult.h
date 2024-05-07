#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleComponentBase.h"
#include "TresWinniePuzzleTotalScoreEvalution.h"
#include "TresWinniePuzzleFirstPlayReward.h"
#include "ETresItemDefBattleItem.h"
#include "TresWinniePuzzleResult.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleResult : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresWinniePuzzleTotalScoreEvalution> TotalScoreEvalution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTimeToShowResultDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTimeToRetry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresWinniePuzzleFirstPlayReward> FirstPlayRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefBattleItem LowerGoodReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScenarioFlagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScenarioLabelName;
    
public:
    UTresWinniePuzzleResult();
};

