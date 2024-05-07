#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraNormalLoc.h"
#include "TresCameraForceLockon.generated.h"

class ATresCameraForceLockon;
class AActor;
class UObject;

UCLASS(Blueprintable)
class ATresCameraForceLockon : public ATresCameraNormalLoc {
    GENERATED_BODY()
public:
    ATresCameraForceLockon(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static ATresCameraForceLockon* BP_SpawnTresCameraForceLockon(UObject* WorldContextObject, TSubclassOf<ATresCameraForceLockon> CameraClass, const FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCamera2ndTargetParam(AActor* Target2, int32 Index);
    
};

