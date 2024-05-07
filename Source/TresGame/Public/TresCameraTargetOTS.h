#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraDistanceTarget.h"
#include "TresCameraTargetInfo.h"
#include "TresCameraTargetOTS.generated.h"

class AActor;
class UObject;
class ATresCameraTargetOTS;

UCLASS(Blueprintable)
class ATresCameraTargetOTS : public ATresCameraDistanceTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresCameraTargetInfo m_TargetInfo2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LimitPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LimitPitchMax;
    
public:
    ATresCameraTargetOTS(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetLimitPitch(float Min, float Max);
    
    UFUNCTION(BlueprintCallable)
    static ATresCameraTargetOTS* BP_SpawnTresCameraTargetOTS(UObject* WorldContextObject, TSubclassOf<ATresCameraTargetOTS> CameraClass, const FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraTargetOTS_Roll(float Roll, float Time);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCamera2ndTargetParam(AActor* Target2, FVector TargetOffset, FVector TargetLocalOffset, FName TargetBoneName);
    
};

