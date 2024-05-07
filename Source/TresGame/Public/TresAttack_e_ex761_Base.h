#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack_e_ex761_Base.generated.h"

UCLASS(Abstract, Blueprintable)
class UTresAttack_e_ex761_Base : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableCancel: 1;
    
public:
    UTresAttack_e_ex761_Base();
};

