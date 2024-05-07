#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresPostcardFieldVoiceActor.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API ATresPostcardFieldVoiceActor : public AActor {
    GENERATED_BODY()
public:
    ATresPostcardFieldVoiceActor(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_PlayVoiceLoop();
    
};

