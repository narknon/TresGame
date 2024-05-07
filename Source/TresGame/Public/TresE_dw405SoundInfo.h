#pragma once
#include "CoreMinimal.h"
#include "TresE_dw405SoundData.h"
#include "TresE_dw405SoundInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresE_dw405SoundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresE_dw405SoundData> SoundDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlaySoundReamingTimeAtLastSound;
    
    TRESGAME_API FTresE_dw405SoundInfo();
};

