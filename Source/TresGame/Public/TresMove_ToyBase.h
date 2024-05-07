#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionLandCodeDriven.h"
#include "TresMove_ToyBase.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresMove_ToyBase : public UTresLocomotionDefinitionLandCodeDriven {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_QuickTurnSpeed;
    
public:
    UTresMove_ToyBase();
};

