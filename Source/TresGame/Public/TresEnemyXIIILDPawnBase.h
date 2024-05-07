#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIILPawnBase.h"
#include "TresEnemyXIIILDPawnBase.generated.h"

class AActor;
class ATresPlayerPawnBase;

UCLASS(Abstract, Blueprintable)
class ATresEnemyXIIILDPawnBase : public ATresEnemyXIIILPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fInvincibleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresPlayerPawnBase* m_Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<AActor> m_LastDamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_BattleAIPoint;
    
public:
    ATresEnemyXIIILDPawnBase(const FObjectInitializer& ObjectInitializer);
};

