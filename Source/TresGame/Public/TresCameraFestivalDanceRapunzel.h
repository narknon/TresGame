#pragma once
#include "CoreMinimal.h"
#include "TresCameraNormal.h"
#include "TresCameraFestivalDanceRapunzel.generated.h"

class ATresRaFestivalDanceManager;
class AFestivalDancePawn_n_ra201;

UCLASS(Blueprintable, NotPlaceable)
class ATresCameraFestivalDanceRapunzel : public ATresCameraNormal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CameraHeightOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresRaFestivalDanceManager* m_pDanceMng;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFestivalDancePawn_n_ra201* m_pRapunzel;
    
public:
    ATresCameraFestivalDanceRapunzel(const FObjectInitializer& ObjectInitializer);
};

