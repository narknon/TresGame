#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraNormalDstTgt.h"
#include "TresCameraNormalDstTgt2.generated.h"

class ATresCameraNormalDstTgt2;
class UObject;

UCLASS(Blueprintable)
class ATresCameraNormalDstTgt2 : public ATresCameraNormalDstTgt {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NearTargetDistance2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NearCamDistance2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FarTargetDistance2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FarCamDistance2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DistanceTargetBoneRadius2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DistanceTargetBoneName2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DistanceTargetBoneRadius1;
    
public:
    ATresCameraNormalDstTgt2(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static ATresCameraNormalDstTgt2* BP_SpawnTresCameraNormalDstTgt2(UObject* WorldContextObject, TSubclassOf<ATresCameraNormalDstTgt2> CameraClass, const FName CameraName);
    
};

