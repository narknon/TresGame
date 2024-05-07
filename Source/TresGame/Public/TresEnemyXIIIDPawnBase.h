#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIIPawnBase.h"
#include "TresEnemyXIIIDPawnBase.generated.h"

class ATresPlayerPawnBase;
class AActor;

UCLASS(Abstract, Blueprintable)
class ATresEnemyXIIIDPawnBase : public ATresEnemyXIIIPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fInvincibleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresPlayerPawnBase* m_Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<AActor> m_LastDamageCauser;
    
public:
    ATresEnemyXIIIDPawnBase(const FObjectInitializer& ObjectInitializer);
};

