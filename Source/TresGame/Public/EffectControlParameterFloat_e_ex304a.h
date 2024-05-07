#pragma once
#include "CoreMinimal.h"
#include "EffectControlParameterFloat_e_ex304a.generated.h"

USTRUCT(BlueprintType)
struct FEffectControlParameterFloat_e_ex304a {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndParam;
    
    TRESGAME_API FEffectControlParameterFloat_e_ex304a();
};

