#pragma once
#include "CoreMinimal.h"
#include "TresCharState_EnemyFlow.h"
#include "TresPlayerState_EnemyFlow.generated.h"

class AActor;
class UPrimitiveComponent;
class ATresCharPawnBase;

UCLASS(Blueprintable)
class UTresPlayerState_EnemyFlow : public UTresCharState_EnemyFlow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pHitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* m_pHitComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pEnemyTurn;
    
    UTresPlayerState_EnemyFlow();
};

