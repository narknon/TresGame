#pragma once
#include "CoreMinimal.h"
#include "TresDeathSentenceArmorRevengeParam_e_ex357.generated.h"

USTRUCT(BlueprintType)
struct FTresDeathSentenceArmorRevengeParam_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BaseParamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RevengeStartArmorDamage;
    
    TRESGAME_API FTresDeathSentenceArmorRevengeParam_e_ex357();
};

