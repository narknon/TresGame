#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraRotTargetCtrl.h"
#include "TresCameraRotTargetCtrlUpper.generated.h"

class ATresCameraRotTargetCtrlUpper;
class UObject;

UCLASS(Blueprintable)
class ATresCameraRotTargetCtrlUpper : public ATresCameraRotTargetCtrl {
    GENERATED_BODY()
public:
    ATresCameraRotTargetCtrlUpper(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static ATresCameraRotTargetCtrlUpper* BP_SpawnTresCameraRotTargetCtrlUpper(UObject* WorldContextObject, TSubclassOf<ATresCameraRotTargetCtrlUpper> CameraClass, const FName CameraName);
    
};

