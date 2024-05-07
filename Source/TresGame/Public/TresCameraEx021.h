#pragma once
#include "CoreMinimal.h"
#include "TresCameraNormal.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraEx021.generated.h"

class AActor;

UCLASS(Blueprintable, NotPlaceable)
class ATresCameraEx021 : public ATresCameraNormal {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AccDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AccDistanceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AccEndDistanceTime;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float m_NormalDistance[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NormalDistanceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_LastThornTargetLocalOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_BaseTarget;
    
public:
    ATresCameraEx021(const FObjectInitializer& ObjectInitializer);
};

