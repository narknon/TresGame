#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FireMagic.h"
#include "TresPlayerState_FireMagic.generated.h"

class UTresLockonTargetComponent;
class ATresCharPawnBase;

UCLASS(Blueprintable)
class UTresPlayerState_FireMagic : public UTresCharState_FireMagic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pTargetPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_HomingTargetComponent;
    
    UTresPlayerState_FireMagic();
};

