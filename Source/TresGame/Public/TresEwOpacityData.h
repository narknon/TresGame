#pragma once
#include "CoreMinimal.h"
#include "TresEwOpacityData.generated.h"

USTRUCT(BlueprintType)
struct FTresEwOpacityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Opacity;
    
    TRESGAME_API FTresEwOpacityData();
};

