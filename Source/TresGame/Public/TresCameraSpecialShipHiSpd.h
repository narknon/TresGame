#pragma once
#include "CoreMinimal.h"
#include "TresCameraRotTarget.h"
#include "TresCameraSpecialShipHiSpd.generated.h"

UCLASS(Blueprintable)
class ATresCameraSpecialShipHiSpd : public ATresCameraRotTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LimitPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LimitPitchMax;
    
public:
    ATresCameraSpecialShipHiSpd(const FObjectInitializer& ObjectInitializer);
};

