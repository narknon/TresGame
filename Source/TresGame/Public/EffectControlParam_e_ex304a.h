#pragma once
#include "CoreMinimal.h"
#include "EffectControlParameterVector_e_ex304a.h"
#include "EffectControlParameterFloat_e_ex304a.h"
#include "EffectControlParam_e_ex304a.generated.h"

USTRUCT(BlueprintType)
struct FEffectControlParam_e_ex304a {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeStartTimeRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffectControlParameterVector_e_ex304a> VectorParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEffectControlParameterFloat_e_ex304a> FloatParamList;
    
    TRESGAME_API FEffectControlParam_e_ex304a();
};

