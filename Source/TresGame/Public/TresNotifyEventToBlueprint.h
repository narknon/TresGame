#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresNotifyEventToBlueprint.generated.h"

UCLASS(Abstract, Blueprintable)
class UTresNotifyEventToBlueprint : public UObject {
    GENERATED_BODY()
public:
    UTresNotifyEventToBlueprint();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreLoadMap();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostLoadMap();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayPostcardFieldVoice();
    
};

