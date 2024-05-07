#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresEwOpacityData.h"
#include "TresEwOpacityListAsset.generated.h"

UCLASS(Blueprintable)
class UTresEwOpacityListAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpacitySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEwOpacityData> DataArray;
    
    UTresEwOpacityListAsset();
};

