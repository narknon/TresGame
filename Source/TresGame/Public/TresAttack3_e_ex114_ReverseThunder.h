#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex114_ReverseThunder.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack3_e_ex114_ReverseThunder : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_PSComponent;
    
public:
    UTresAttack3_e_ex114_ReverseThunder();
};

