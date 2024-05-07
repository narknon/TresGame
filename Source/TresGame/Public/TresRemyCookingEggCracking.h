#pragma once
#include "CoreMinimal.h"
#include "TresRemyCookingBase.h"
#include "RemyCookingGameState.h"
#include "TresRemyCookingEggCracking.generated.h"

UCLASS(Blueprintable)
class ATresRemyCookingEggCracking : public ATresRemyCookingBase {
    GENERATED_BODY()
public:
    ATresRemyCookingEggCracking(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void PushState(TEnumAsByte<RemyCookingGameState> State);
    
    UFUNCTION(BlueprintCallable)
    void PopState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaterialMaxAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameDuration() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeState(TEnumAsByte<RemyCookingGameState> State);
    
};

