#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionUpDownBase.h"
#include "TresAction2_e_ex113_UpDown.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction2_e_ex113_UpDown : public UTresActionDefinitionUpDownBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DesiredOffsetHeight;
    
public:
    UTresAction2_e_ex113_UpDown();
};

