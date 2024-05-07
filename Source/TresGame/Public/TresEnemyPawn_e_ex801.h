#pragma once
#include "CoreMinimal.h"
#include "TresEnemyToyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex801.generated.h"

class AActor;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex801 : public ATresEnemyToyPawnBase {
    GENERATED_BODY()
public:
    ATresEnemyPawn_e_ex801(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void PostAnimUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPlasmaTargetFloorLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetPlasmaTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlasmaLocationList(TArray<FVector>& OutList) const;
    
};

