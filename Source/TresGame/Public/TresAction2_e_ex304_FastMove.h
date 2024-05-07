#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "ETresEnemyEx304FastMoveType.h"
#include "TresAction2_e_ex304_FastMove.generated.h"

class UEnvQuery;

UCLASS(Blueprintable, HideDropdown)
class UTresAction2_e_ex304_FastMove : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEnemyEx304FastMoveType m_FastMoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_ActionEQSQuery;
    
    UTresAction2_e_ex304_FastMove();
};

