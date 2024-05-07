#pragma once
#include "CoreMinimal.h"
#include "TresFieldAttackParamBase_e_ex357.h"
#include "TresFieldAttackPenetrateParam_e_ex357.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTresFieldAttackPenetrateParam_e_ex357 : public UTresFieldAttackParamBase_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PenetrateCheckDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackStartintervalTime;
    
    UTresFieldAttackPenetrateParam_e_ex357();
};

