#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresItemSynthesisChecker.generated.h"

UCLASS(Blueprintable)
class ATresItemSynthesisChecker : public AActor {
    GENERATED_BODY()
public:
    ATresItemSynthesisChecker(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TestChargeMaterialsToShop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ExcuteItemWeaponEnhanceTest(const FName rowId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ExcuteItemSynthesisTest(const FName rowId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ExcuteItemMotifTest(const FName rowId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ExcuteItemCollectTest(const FName rowId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CheckAllDataTableValidation() const;
    
};

