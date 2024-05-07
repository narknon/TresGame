#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraDiving.h"
#include "TresCameraDivingDstTgt.generated.h"

class UObject;
class AActor;
class ATresCameraDivingDstTgt;

UCLASS(Blueprintable)
class ATresCameraDivingDstTgt : public ATresCameraDiving {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DistanceTargetBoneName1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NearTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NearCamDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FarTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FarCamDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_DistanceTarget;
    
public:
    ATresCameraDivingDstTgt(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static ATresCameraDivingDstTgt* BP_SpawnTresCameraDivingDstTgt(UObject* WorldContextObject, TSubclassOf<ATresCameraDivingDstTgt> CameraClass, const FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraDistanceTarget(AActor* DistanceTarget);
    
};

