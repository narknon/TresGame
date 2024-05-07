#pragma once
#include "CoreMinimal.h"
#include "TresEnemyRetryVoiceData.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FTresEnemyRetryVoiceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FaceAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* VOICE;
    
    TRESGAME_API FTresEnemyRetryVoiceData();
};

