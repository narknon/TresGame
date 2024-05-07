#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "ETresEnemy_e_ex731_StepType.h"
#include "TresAction1_e_ex731_Step.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex731_Step : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemy_e_ex731_StepType> m_StepType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRootMotionScale;
    
    UTresAction1_e_ex731_Step();
};

