#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Guard.h"
#include "TresPlayerState_Guard.generated.h"

class AActor;
class UTresLockonTargetComponent;

UCLASS(Blueprintable)
class UTresPlayerState_Guard : public UTresCharState_Guard {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_pAttackPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_pTargetPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_pTargetComponent;
    
    UTresPlayerState_Guard();
};

