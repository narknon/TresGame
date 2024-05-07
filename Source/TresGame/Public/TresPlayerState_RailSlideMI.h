#pragma once
#include "CoreMinimal.h"
#include "TresPlayerState_RailSlide.h"
#include "TresPlayerState_RailSlideMI.generated.h"

class ATresCameraRailSlideMI;

UCLASS(Blueprintable)
class UTresPlayerState_RailSlideMI : public UTresPlayerState_RailSlide {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraRailSlideMI* m_pCameraMI;
    
    UTresPlayerState_RailSlideMI();
};

