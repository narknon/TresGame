#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "MaskedJoint.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FMaskedJoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FBoneReference Joint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Percentage;
    
    FMaskedJoint();
};

