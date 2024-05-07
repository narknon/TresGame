#pragma once
#include "CoreMinimal.h"
#include "TresTornadoDebrisDestinationEffectInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresTornadoDebrisDestinationEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fDisableDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDetachOnDisappear;
    
    TRESGAME_API FTresTornadoDebrisDestinationEffectInfo();
};

