#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack5_e_ex325_SledgeHammer.generated.h"

class UTresStateBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack5_e_ex325_SledgeHammer : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresStateBase> m_BuddyState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsDoCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotSpeed;
    
public:
    UTresAttack5_e_ex325_SledgeHammer();
};

