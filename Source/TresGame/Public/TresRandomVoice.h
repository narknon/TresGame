#pragma once
#include "CoreMinimal.h"
#include "TresRandomVoice.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FTresRandomVoice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* VOICE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomWeights;
    
    TRESGAME_API FTresRandomVoice();
};

