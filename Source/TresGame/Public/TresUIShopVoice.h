#pragma once
#include "CoreMinimal.h"
#include "TresUIShopVoice.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FTresUIShopVoice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<USoundBase> VoiceSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubtitleTextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FixedSubtitleDisplayTime;
    
    TRESGAME_API FTresUIShopVoice();
};

