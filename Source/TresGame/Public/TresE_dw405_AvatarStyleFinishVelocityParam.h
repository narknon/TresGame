#pragma once
#include "CoreMinimal.h"
#include "TresE_dw405_AvatarStyleFinishVelocityParam.generated.h"

USTRUCT(BlueprintType)
struct FTresE_dw405_AvatarStyleFinishVelocityParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableSettingAcceleration: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpolationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetSpeed;
    
    TRESGAME_API FTresE_dw405_AvatarStyleFinishVelocityParam();
};

