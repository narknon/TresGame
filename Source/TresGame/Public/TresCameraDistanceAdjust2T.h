#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraTargetInfo.h"
#include "TresCameraRotTarget.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraDistanceAdjust2T.generated.h"

class AActor;
class UObject;
class ATresCameraDistanceAdjust2T;

UCLASS(Blueprintable, NotPlaceable)
class ATresCameraDistanceAdjust2T : public ATresCameraRotTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresCameraTargetInfo m_TargetInfo2;
    
public:
    ATresCameraDistanceAdjust2T(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static ATresCameraDistanceAdjust2T* BP_SpawnTresCameraDistanceAdjust2T(UObject* WorldContextObject, TSubclassOf<ATresCameraDistanceAdjust2T> CameraClass, const FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCamera2ndTargetParam(AActor* Target2, FVector TargetOffset, FVector TargetLocalOffset, FName TargetBoneName, float TargetRadius, float Target1Radius);
    
};

