#pragma once
#include "CoreMinimal.h"
#include "TresNpcPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcPawn_n_ts201.generated.h"

UCLASS(Blueprintable)
class ATresNpcPawn_n_ts201 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    ATresNpcPawn_n_ts201(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimOffsetAlpha() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetAimOffset() const;
    
};

