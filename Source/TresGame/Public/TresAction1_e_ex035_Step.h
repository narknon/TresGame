#pragma once
#include "CoreMinimal.h"
#include "ETresEnemy_e_ex035_StepType.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex035_Step.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex035_Step : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresEnemy_e_ex035_StepType> m_pro_StepType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_JumpHeight;
    
public:
    UTresAction1_e_ex035_Step();
};

