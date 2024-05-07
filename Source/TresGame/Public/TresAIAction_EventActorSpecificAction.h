#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "ETresActorSpecificActionID.h"
#include "TresAIAction_EventActorSpecificAction.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAIAction_EventActorSpecificAction : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresActorSpecificActionID> m_SpecificActionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SubID;
    
    UTresAIAction_EventActorSpecificAction();
};

