#pragma once
#include "CoreMinimal.h"
#include "TresFieldAttackParamBase_e_ex357.h"
#include "TresFieldAttackTimeParam_e_ex357.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTresFieldAttackTimeParam_e_ex357 : public UTresFieldAttackParamBase_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntervalTime;
    
    UTresFieldAttackTimeParam_e_ex357();
};

