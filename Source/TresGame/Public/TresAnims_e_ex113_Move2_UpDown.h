#pragma once
#include "CoreMinimal.h"
#include "TresAnims_e_ex113_Move2_UpDown.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FTresAnims_e_ex113_Move2_UpDown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* StartAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* LoopAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* EndAnimData;
    
    TRESGAME_API FTresAnims_e_ex113_Move2_UpDown();
};

