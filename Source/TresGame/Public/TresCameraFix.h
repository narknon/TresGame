#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraBase.h"
#include "TresCameraFix.generated.h"

class UObject;
class ATresCameraFix;

UCLASS(Blueprintable)
class ATresCameraFix : public ATresCameraBase {
    GENERATED_BODY()
public:
    ATresCameraFix(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static ATresCameraFix* BP_SpawnTresCameraFix(UObject* WorldContextObject, TSubclassOf<ATresCameraFix> CameraClass, const FName CameraName);
    
};

