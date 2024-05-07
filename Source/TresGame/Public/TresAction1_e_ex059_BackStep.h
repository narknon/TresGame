#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "e_ex059_ACTION_TYPE.h"
#include "TresAction1_e_ex059_BackStep.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex059_BackStep : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRootTransScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHeightAcceptance;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<e_ex059_ACTION_TYPE> m_ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fConditionDistance;
    
    UTresAction1_e_ex059_BackStep();
};

