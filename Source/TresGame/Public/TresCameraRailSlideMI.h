#pragma once
#include "CoreMinimal.h"
#include "TresCameraRotTargetCtrl.h"
#include "TresCameraRailSlideMI.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class ATresCameraRailSlideMI : public ATresCameraRotTargetCtrl {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TargetRotationPitchRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TargetRotationYawRate;
    
public:
    ATresCameraRailSlideMI(const FObjectInitializer& ObjectInitializer);
};

