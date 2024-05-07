#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraTarget.h"
#include "TresCameraFixTarget.generated.h"

class ATresCameraFixTarget;
class UObject;

UCLASS(Blueprintable)
class ATresCameraFixTarget : public ATresCameraTarget {
    GENERATED_BODY()
public:
    ATresCameraFixTarget(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static ATresCameraFixTarget* BP_SpawnTresCameraFixTarget(UObject* WorldContextObject, TSubclassOf<ATresCameraFixTarget> CameraClass, const FName CameraName);
    
};

