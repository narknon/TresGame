#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction_e_ex035_Base.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable, HideDropdown)
class UTresAction_e_ex035_Base : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_Animation;
    
public:
    UTresAction_e_ex035_Base();
};

