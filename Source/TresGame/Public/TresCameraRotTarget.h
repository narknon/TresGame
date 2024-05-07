#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraDistanceTarget.h"
#include "ETresCameraStick.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraRotTarget.generated.h"

class UObject;
class ATresCameraRotTarget;

UCLASS(Blueprintable)
class ATresCameraRotTarget : public ATresCameraDistanceTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_Rotation;
    
public:
    ATresCameraRotTarget(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetTresCameraRotTargetParam(float Distance, FRotator Rotation, FVector TargetOffset, FVector TargetLocalOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseRotation(FRotator Rotation, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetDefaultBaseRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetBaseRotation() const;
    
    UFUNCTION(BlueprintCallable)
    static ATresCameraRotTarget* BP_SpawnTresCameraRotTarget(UObject* WorldContextObject, TSubclassOf<ATresCameraRotTarget> CameraClass, const FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetControllerStick(TEnumAsByte<ETresCameraStick> LRStick);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetAutoRotationParam(FRotator AutoRotation, bool bLerpAutoRotationYaw);
    
};

