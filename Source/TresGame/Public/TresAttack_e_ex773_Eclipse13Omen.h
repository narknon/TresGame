#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack_e_ex773_Eclipse13Omen.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack_e_ex773_Eclipse13Omen : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
public:
    UTresAttack_e_ex773_Eclipse13Omen();
};

