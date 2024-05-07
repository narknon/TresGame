#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresWinniePuzzleComponentBase.h"
#include "WinniePuzzleCharacterBonusGaugeType.h"
#include "WinniePuzzleCharacterBonusType.h"
#include "TresWinniePuzzleComboBonusGaugeIncreaseParam.h"
#include "TresWinniePuzzleBonusGaugeAlwaysDecreasingParam.h"
#include "TresWinniePuzzleCharacterBonusController.generated.h"

class ATresCameraEmitterLensEffect;
class UForceFeedbackEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleCharacterBonusController : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    WinniePuzzleCharacterBonusType BonusType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    WinniePuzzleCharacterBonusGaugeType BonusGaugeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForbidAutoInvocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BonusGaugeMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BonusGaugeChangeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeIncreaseEffectLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresWinniePuzzleComboBonusGaugeIncreaseParam ComboBonusGaugeIncreaseParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresWinniePuzzleComboBonusGaugeIncreaseParam ComboBonusGaugeIncreaseParamOnSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresWinniePuzzleBonusGaugeAlwaysDecreasingParam BonusGaugeAlwaysDecreasingParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraEmitterLensEffect> InvokingLensEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvokingLensEffectLoopEndWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ForceFeedbackGaugeMax1st;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ForceFeedbackGaugeMax2nd;
    
public:
    UTresWinniePuzzleCharacterBonusController();
};

