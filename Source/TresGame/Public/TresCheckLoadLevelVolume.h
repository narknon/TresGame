#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresCheckLoadLevelVolume.generated.h"

UCLASS(Blueprintable)
class ATresCheckLoadLevelVolume : public ATresVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CheckLevelNameArray;
    
public:
    ATresCheckLoadLevelVolume(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SelectLevelFromList();
    
    UFUNCTION(BlueprintCallable)
    void AutoSetFromSelect();
    
};

