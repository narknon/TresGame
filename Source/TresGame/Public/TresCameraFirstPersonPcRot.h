#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraFirstPerson.h"
#include "TresCameraFirstPersonPcRot.generated.h"

class ATresCameraFirstPersonPcRot;
class UObject;

UCLASS(Blueprintable)
class ATresCameraFirstPersonPcRot : public ATresCameraFirstPerson {
    GENERATED_BODY()
public:
    ATresCameraFirstPersonPcRot(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static ATresCameraFirstPersonPcRot* BP_SpawnTresCameraFirstPersonPcRot(UObject* WorldContextObject, TSubclassOf<ATresCameraFirstPersonPcRot> CameraClass, const FName CameraName);
    
};

