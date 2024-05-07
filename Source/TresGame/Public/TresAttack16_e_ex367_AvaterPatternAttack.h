#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack16_e_ex367_AvaterPatternAttack.generated.h"

class ATresAvaterGenerator_e_ex367_Slash;

UCLASS(Blueprintable)
class UTresAttack16_e_ex367_AvaterPatternAttack : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresAvaterGenerator_e_ex367_Slash> m_PatternAttackGenerator;
    
    UTresAttack16_e_ex367_AvaterPatternAttack();
};

