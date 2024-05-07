#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "MoveSlashTypes_e_ex367.h"
#include "TresWeaponAttack_e_ex367_AvaterActionBase.generated.h"

class UTresStateBase;

UCLASS(Blueprintable, HideDropdown)
class UTresWeaponAttack_e_ex367_AvaterActionBase : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresStateBase> m_AttackState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<MoveSlashTypes_e_ex367> m_PramMoveSlashType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AvatarId;
    
    UTresWeaponAttack_e_ex367_AvaterActionBase();
};

