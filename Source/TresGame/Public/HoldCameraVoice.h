#pragma once
#include "CoreMinimal.h"
#include "HoldCameraVoice.generated.h"

class UTresFieldVoice;

USTRUCT(BlueprintType)
struct FHoldCameraVoice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresFieldVoice* FieldVoiceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rate;
    
    TRESGAME_API FHoldCameraVoice();
};

