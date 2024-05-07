#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Attack.h"
#include "TresPlayerState_Attack.generated.h"

class ATresCharPawnBase;
class UTresLockonTargetComponent;
class AActor;

UCLASS(Blueprintable)
class UTresPlayerState_Attack : public UTresCharState_Attack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pTargetPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_HomingTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_OldTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_pReflectCauser;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pRevengePawn;
    
    UTresPlayerState_Attack();
};

