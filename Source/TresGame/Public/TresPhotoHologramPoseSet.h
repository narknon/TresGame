#pragma once
#include "CoreMinimal.h"
#include "TresPhotoHologramPoseSet.generated.h"

USTRUCT(BlueprintType)
struct FTresPhotoHologramPoseSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsWeaponVisible;
    
    TRESGAME_API FTresPhotoHologramPoseSet();
};

