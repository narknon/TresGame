#pragma once
#include "CoreMinimal.h"
#include "TresTimelineDataSection.h"
#include "TresActorVoiceSubtitleSection.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TRESGAME_API UTresActorVoiceSubtitleSection : public UTresTimelineDataSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_SubtitleKey;
    
    UTresActorVoiceSubtitleSection();
};

