#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction_e_ex002_Think.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class UTresAction_e_ex002_Think : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_Anim;
    
    UTresAction_e_ex002_Think();
};

