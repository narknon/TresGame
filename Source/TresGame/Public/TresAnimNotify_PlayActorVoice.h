#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresAnimNotify_PlayActorVoice.generated.h"

class UTresActorVoice;

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UTresAnimNotify_PlayActorVoice : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresActorVoice* m_ActorVoice;
    
    UTresAnimNotify_PlayActorVoice();
};

