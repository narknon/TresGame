#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresInterpTrackActorVoiceKey.h"
#include "TresInterpTrackActorVoice.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackActorVoice : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FTresInterpTrackActorVoiceKey> m_Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_StopActorVoiceWhenTerminate;
    
    UTresInterpTrackActorVoice();
};

