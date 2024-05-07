#pragma once
#include "CoreMinimal.h"
#include "TresPlayerControllerLowerBase.h"
#include "UObject/NoExportTypes.h"
#include "TresSharedPlayerController.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresSharedPlayerController : public ATresPlayerControllerLowerBase {
    GENERATED_BODY()
public:
    ATresSharedPlayerController(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRightStickSlopeVectorLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRightStickSlopeVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRightStickSlopeDegrees() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeftStickSlopeVectorLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLeftStickSlopeVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeftStickSlopeDegrees() const;
    
};

