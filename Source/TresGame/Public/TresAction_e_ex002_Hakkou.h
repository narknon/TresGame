#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction_e_ex002_Hakkou.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class UTresAction_e_ex002_Hakkou : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_Anim;
    
public:
    UTresAction_e_ex002_Hakkou();
};

