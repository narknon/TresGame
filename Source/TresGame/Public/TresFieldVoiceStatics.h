#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresFieldVoiceStatics.generated.h"

UCLASS(Abstract, Blueprintable, NotPlaceable)
class UTresFieldVoiceStatics : public UObject {
    GENERATED_BODY()
public:
    UTresFieldVoiceStatics();
    UFUNCTION(BlueprintCallable)
    static void StopAllFieldVoice(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayingFieldVoiceEx(float waitElapsedTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayingFieldVoice();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPlayingVoiceTime();
    
};

