#pragma once
#include "CoreMinimal.h"
#include "Tres_LocomotionDefinition_SnowChaseParam.h"
#include "TresLocomotionDefinitionFlyCodeDriven.h"
#include "Tres_e_ex046_LocomotionDefinition_SnowChase.generated.h"

UCLASS(Abstract, Blueprintable)
class UTres_e_ex046_LocomotionDefinition_SnowChase : public UTresLocomotionDefinitionFlyCodeDriven {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTres_LocomotionDefinition_SnowChaseParam m_SnowChaseParam;
    
public:
    UTres_e_ex046_LocomotionDefinition_SnowChase();
};

