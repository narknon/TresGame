#pragma once
#include "CoreMinimal.h"
#include "TresCharState_AirSlide.h"
#include "TresPlayerState_AirSlide.generated.h"

class ATresCharPawnBase;

UCLASS(Blueprintable)
class UTresPlayerState_AirSlide : public UTresCharState_AirSlide {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pTargetPawn;
    
    UTresPlayerState_AirSlide();
};

