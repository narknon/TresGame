#pragma once
#include "CoreMinimal.h"
#include "TresFieldGenerateParamBase_e_ex357.h"
#include "TresFieldGenerateTargetParam_e_ex357.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTresFieldGenerateTargetParam_e_ex357 : public UTresFieldGenerateParamBase_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetVelocityTime;
    
    UTresFieldGenerateTargetParam_e_ex357();
};

