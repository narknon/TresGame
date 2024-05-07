#pragma once
#include "CoreMinimal.h"
#include "FieldGenerateMapParam_e_ex357.generated.h"

USTRUCT(BlueprintType)
struct FFieldGenerateMapParam_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstAttackDelayTime;
    
    TRESGAME_API FFieldGenerateMapParam_e_ex357();
};

