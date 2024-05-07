#pragma once
#include "CoreMinimal.h"
#include "TresTimelineDataSection.h"
#include "TresActorVoiceSoundSection.generated.h"

class USoundBase;

UCLASS(Blueprintable, EditInlineNew)
class TRESGAME_API UTresActorVoiceSoundSection : public UTresTimelineDataSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AttachSocket;
    
    UTresActorVoiceSoundSection();
};

