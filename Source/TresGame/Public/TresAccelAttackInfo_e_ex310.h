#pragma once
#include "CoreMinimal.h"
#include "TresAccelAttackInfo_e_ex310.generated.h"

USTRUCT(BlueprintType)
struct FTresAccelAttackInfo_e_ex310 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float x_min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float x_max;
    
    TRESGAME_API FTresAccelAttackInfo_e_ex310();
};

