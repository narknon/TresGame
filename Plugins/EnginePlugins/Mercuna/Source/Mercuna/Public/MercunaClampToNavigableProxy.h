#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UObject/NoExportTypes.h"
#include "MercunaClampToNavigableResultDelegate.h"
#include "MercunaClampToNavigableProxy.generated.h"

class UObject;
class UMercunaClampToNavigableProxy;

UCLASS(MinimalAPI)
class UMercunaClampToNavigableProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FMercunaClampToNavigableResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FMercunaClampToNavigableResult OnFailure;
    
    UMercunaClampToNavigableProxy();
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "Mercuna")
    static UMercunaClampToNavigableProxy* MercunaClampToNavigable(UObject* WorldContextObject, FVector Position, float NavigationRadius, float SearchRadius);
    
};

