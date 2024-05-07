#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraRotTarget.h"
#include "TresCameraRotTargetCtrl.generated.h"

class AActor;
class UObject;
class ATresCameraRotTargetCtrl;

UCLASS(Blueprintable)
class ATresCameraRotTargetCtrl : public ATresCameraRotTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LimitPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LimitPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LimitYawMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LimitYawMax;
    
public:
    ATresCameraRotTargetCtrl(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static ATresCameraRotTargetCtrl* BP_SpawnTresCameraRotTargetCtrl(UObject* WorldContextObject, TSubclassOf<ATresCameraRotTargetCtrl> CameraClass, const FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraRotTargetCtrlParam(float LimitPitchMin, float LimitPitchMax, float LimitYawMin, float LimitYawMax, bool bRotationCamera, bool bTimerReset, AActor* RotationTarget, bool bLRStick);
    
};

