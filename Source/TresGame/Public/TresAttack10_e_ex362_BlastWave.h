#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack10_e_ex362_BlastWave.generated.h"

class UTresStateBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack10_e_ex362_BlastWave : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresStateBase> m_BuddyState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_InvisibleTerra;
    
    UTresAttack10_e_ex362_BlastWave();
};

