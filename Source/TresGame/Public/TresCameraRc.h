#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraRotTargetCtrl.h"
#include "TresCameraRc.generated.h"

class UObject;
class AActor;
class ATresCameraRc;

UCLASS(Blueprintable, NotPlaceable)
class ATresCameraRc : public ATresCameraRotTargetCtrl {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_TargetActor;
    
public:
    ATresCameraRc(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetTresCameraRcLookActor(AActor* LookActor);
    
    UFUNCTION(BlueprintCallable)
    static ATresCameraRc* BP_SpawnTresCameraRc(UObject* WorldContextObject, TSubclassOf<ATresCameraRc> CameraClass, const FName CameraName);
    
};

