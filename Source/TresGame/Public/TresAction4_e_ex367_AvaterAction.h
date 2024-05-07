#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresActionDefinitionBase.h"
#include "MoveSlashTypes_e_ex367.h"
#include "TresAction4_e_ex367_AvaterAction.generated.h"

class UTresStateBase;

UCLASS(Blueprintable)
class UTresAction4_e_ex367_AvaterAction : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresStateBase> m_AttackState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<MoveSlashTypes_e_ex367> m_PramMoveSlashType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AvatarId;
    
    UTresAction4_e_ex367_AvaterAction();
};

