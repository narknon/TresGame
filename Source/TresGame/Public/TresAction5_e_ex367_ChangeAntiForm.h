#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction5_e_ex367_ChangeAntiForm.generated.h"

UCLASS(Blueprintable)
class UTresAction5_e_ex367_ChangeAntiForm : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_ChangeNormal;
    
    UTresAction5_e_ex367_ChangeAntiForm();
};

