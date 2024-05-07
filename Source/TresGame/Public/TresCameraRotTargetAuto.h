#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraRotTarget.h"
#include "TresCameraRotTargetAuto.generated.h"

class UObject;
class ATresCameraRotTargetAuto;

UCLASS(Blueprintable)
class ATresCameraRotTargetAuto : public ATresCameraRotTarget {
    GENERATED_BODY()
public:
    ATresCameraRotTargetAuto(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static ATresCameraRotTargetAuto* BP_SpawnTresCameraRotTargetAuto(UObject* WorldContextObject, TSubclassOf<ATresCameraRotTargetAuto> CameraClass, const FName CameraName);
    
};

