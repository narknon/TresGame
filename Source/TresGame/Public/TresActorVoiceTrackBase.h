#pragma once
#include "CoreMinimal.h"
#include "TresTimelineDataTrack.h"
#include "TresActorVoiceTrackBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UTresActorVoiceTrackBase : public UTresTimelineDataTrack {
    GENERATED_BODY()
public:
    UTresActorVoiceTrackBase();
};

