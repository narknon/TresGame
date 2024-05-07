#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraTarget.h"
#include "TresCameraFirstPerson.generated.h"

class ATresCameraFirstPerson;
class UObject;

UCLASS(Blueprintable, NotPlaceable)
class ATresCameraFirstPerson : public ATresCameraTarget {
    GENERATED_BODY()
public:
    ATresCameraFirstPerson(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static ATresCameraFirstPerson* BP_SpawnTresCameraFirstPerson(UObject* WorldContextObject, TSubclassOf<ATresCameraFirstPerson> CameraClass, const FName CameraName);
    
};

