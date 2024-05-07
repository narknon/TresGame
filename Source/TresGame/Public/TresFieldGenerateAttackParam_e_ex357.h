#pragma once
#include "CoreMinimal.h"
#include "TresFieldGenerateAttackParam_e_ex357.generated.h"

USTRUCT(BlueprintType)
struct FTresFieldGenerateAttackParam_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsFieldPenetrateAttackStart: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTime;
    
    TRESGAME_API FTresFieldGenerateAttackParam_e_ex357();
};

