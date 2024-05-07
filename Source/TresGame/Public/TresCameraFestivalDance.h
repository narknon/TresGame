#pragma once
#include "CoreMinimal.h"
#include "TresCameraNormal.h"
#include "TresCameraFestivalDance.generated.h"

class ATresRaFestivalDanceManager;

UCLASS(Blueprintable, NotPlaceable)
class ATresCameraFestivalDance : public ATresCameraNormal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CameraHeightOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresRaFestivalDanceManager* m_pDanceMng;
    
public:
    ATresCameraFestivalDance(const FObjectInitializer& ObjectInitializer);
};

