#pragma once
#include "CoreMinimal.h"
#include "TresCharState_ShooterMode.h"
#include "TresPlayerState_ShooterMode.generated.h"

class ATresCharPawnBase;
class UTresLockonTargetComponent;

UCLASS(Blueprintable)
class UTresPlayerState_ShooterMode : public UTresCharState_ShooterMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pTargetPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_pTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pDamagePawn;
    
    UTresPlayerState_ShooterMode();
};

