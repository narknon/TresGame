#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "ETresEnemyStepDirectionType_e_ex309.h"
#include "TresAction1_e_ex309_Step.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex309_Step : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemyStepDirectionType_e_ex309> m_DirectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableStartTargetLocation: 1;
    
public:
    UTresAction1_e_ex309_Step();
};

