#pragma once
#include "CoreMinimal.h"
#include "ETresActionTaskParamType.h"
#include "TresActionTaskParam.generated.h"

USTRUCT(BlueprintType)
struct FTresActionTaskParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParamValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresActionTaskParamType ParamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bValueEditable;
    
    TRESGAME_API FTresActionTaskParam();
};

