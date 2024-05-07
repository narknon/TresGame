#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDriven.h"
#include "TresMove1_e_ex046_FlightMove.generated.h"

UCLASS(Abstract, Blueprintable)
class UTresMove1_e_ex046_FlightMove : public UTresLocomotionDefinitionFlyCodeDriven {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EndTurnSpeed;
    
public:
    UTresMove1_e_ex046_FlightMove();
};

