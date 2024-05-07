#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack7_e_ex354_VerticalShot.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack7_e_ex354_VerticalShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ProjName;
    
    UTresAttack7_e_ex354_VerticalShot();
};

