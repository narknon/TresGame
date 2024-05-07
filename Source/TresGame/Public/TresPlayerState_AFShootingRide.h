#pragma once
#include "CoreMinimal.h"
#include "TresCharState_AFShootingRide.h"
#include "TresPlayerState_AFShootingRide.generated.h"

class ATresAttractionPawnShootingRide;

UCLASS(Blueprintable)
class UTresPlayerState_AFShootingRide : public UTresCharState_AFShootingRide {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresAttractionPawnShootingRide* m_pObj;
    
public:
    UTresPlayerState_AFShootingRide();
};

