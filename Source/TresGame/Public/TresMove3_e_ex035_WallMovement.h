#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionBase.h"
#include "TresMove3_e_ex035_WallMovement.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresMove3_e_ex035_WallMovement : public UTresLocomotionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MoveTime;
    
public:
    UTresMove3_e_ex035_WallMovement();
};

