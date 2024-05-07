#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex015.generated.h"

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex015 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    ATresEnemyPawn_e_ex015(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator BP_GetAnimOffsetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BP_GetAnimOffsetAlpha() const;
    
};

