#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresAICharState_AttackBase.generated.h"

class ATresCharPawnBase;

UCLASS(Blueprintable)
class UTresAICharState_AttackBase : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<ATresCharPawnBase> m_AttackTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PlayAnimName;
    
    UTresAICharState_AttackBase();
};

