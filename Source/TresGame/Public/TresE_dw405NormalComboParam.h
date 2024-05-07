#pragma once
#include "CoreMinimal.h"
#include "TresE_dw405NormalComboAttackParamType.h"
#include "TresE_dw405CounterAttackParam.h"
#include "ETresEnemyDw405AttackPossibleKind.h"
#include "TresE_dw405NormalComboParam.generated.h"

USTRUCT(BlueprintType)
struct FTresE_dw405NormalComboParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemyDw405AttackPossibleKind> AttackPossibleKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableLastAttackNotifyDisappear: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastAttackPostWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableFixedAngle: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AppearAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresE_dw405CounterAttackParam> CounterAttackParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CounterRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresE_dw405NormalComboAttackParamType> AttackParams;
    
    TRESGAME_API FTresE_dw405NormalComboParam();
};

