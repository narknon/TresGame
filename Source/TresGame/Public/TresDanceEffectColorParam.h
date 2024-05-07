#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresDanceEffectColorParam.generated.h"

USTRUCT(BlueprintType)
struct FTresDanceEffectColorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color_PS4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color_XB1;
    
    TRESGAME_API FTresDanceEffectColorParam();
};

