#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "ETresBodyCollReactionType.h"
#include "TresAction8_e_ex353_SingleAction.generated.h"

class UCurveFloat;
class UAnimSequenceBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAction8_e_ex353_SingleAction : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresBodyCollReactionType m_BodyCollReactionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_FloatSpeedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bHorizontalTurn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bClearVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bWaitAIAbortTiming: 1;
    
    UTresAction8_e_ex353_SingleAction();
};

