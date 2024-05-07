#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex028_ColorChange.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex028_ColorChange : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_BodyColorChangeTime;
    
public:
    UTresAction1_e_ex028_ColorChange();
};

