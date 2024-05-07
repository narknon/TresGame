#pragma once
#include "CoreMinimal.h"
#include "TresCharState_RailSlide.h"
#include "TresPlayerState_RailSlide.generated.h"

class ATresCameraRailSlide;

UCLASS(Blueprintable)
class UTresPlayerState_RailSlide : public UTresCharState_RailSlide {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraRailSlide* m_pCamera;
    
    UTresPlayerState_RailSlide();
};

