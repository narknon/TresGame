#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex015_GigasEscape.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex015_GigasEscape : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Height;
    
public:
    UTresAction1_e_ex015_GigasEscape();
};

