#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackActorVoiceKey.generated.h"

class UTresActorVoice;

USTRUCT(BlueprintType)
struct FTresInterpTrackActorVoiceKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresActorVoice* m_ActorVoice;
    
    TRESGAME_API FTresInterpTrackActorVoiceKey();
};

