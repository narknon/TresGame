#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleScoreEvalutionInOneTurnParam.h"
#include "TresWinniePuzzleComponentBase.h"
#include "TresWinniePuzzleAdditionalBonusParam.h"
#include "TresWinniePuzzleUnitScoreParam.h"
#include "TresWinniePuzzleComboEvalutionParam.h"
#include "WinniePuzzleScoreEvalutionInOneTurnJudgementMethod.h"
#include "TresWinniePuzzleScoreController.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleScoreController : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAddBonusScore);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAddBonusScore OnAddBonusScore;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresWinniePuzzleComboEvalutionParam ComboEvalutionParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresWinniePuzzleUnitScoreParam UnitScoreParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresWinniePuzzleAdditionalBonusParam AdditionalBonusParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    WinniePuzzleScoreEvalutionInOneTurnJudgementMethod ScoreEvalutionInOneTurnJudgementMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresWinniePuzzleScoreEvalutionInOneTurnParam> ScoreEvalutionInOneTurnParam;
    
public:
    UTresWinniePuzzleScoreController();
};

