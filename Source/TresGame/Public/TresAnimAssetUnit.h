#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimationAsset.h"
#include "TresAnimAssetUnit.generated.h"


USTRUCT(BlueprintType)
struct FTresAnimAssetUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* AnimData;
    
    TRESGAME_API FTresAnimAssetUnit();
};

