#pragma once
#include "CoreMinimal.h"
#include "TresCharState_SuperSlide.h"
#include "TresPlayerState_AthleticFlow.generated.h"

class UTresPoleComponent;
class AActor;
class UPrimitiveComponent;
class UTresLockonTargetComponent;
class ATresCharPawnBase;

UCLASS(Blueprintable)
class UTresPlayerState_AthleticFlow : public UTresCharState_SuperSlide {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_pTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pHitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* m_pHitComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresPoleComponent* m_pPoleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pTargetEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pEnemyTurn;
    
    UTresPlayerState_AthleticFlow();
};

