#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/Note.h"
#include "ETresAIAction.h"
#include "TresAINote.generated.h"

class UTresActionDefinitionBase;

UCLASS(Blueprintable)
class ATresAINote : public ANote {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresAIAction::Type> m_ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresActionDefinitionBase> m_Action;
    
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAction;
    
public:
    ATresAINote(const FObjectInitializer& ObjectInitializer);
};

