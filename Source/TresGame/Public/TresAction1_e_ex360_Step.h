#pragma once
#include "CoreMinimal.h"
#include "StepTypes_e_ex360.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex360_Step.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex360_Step : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<StepTypes_e_ex360> m_StepType;
    
    UTresAction1_e_ex360_Step();
};

