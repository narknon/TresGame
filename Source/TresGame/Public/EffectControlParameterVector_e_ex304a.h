#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EffectControlParameterVector_e_ex304a.generated.h"

USTRUCT(BlueprintType)
struct FEffectControlParameterVector_e_ex304a {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndParam;
    
    TRESGAME_API FEffectControlParameterVector_e_ex304a();
};

