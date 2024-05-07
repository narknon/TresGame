#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex003_MeteorAttack.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack3_e_ex003_MeteorAttack : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RiseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RiseDistance;
    
public:
    UTresAttack3_e_ex003_MeteorAttack();
};

