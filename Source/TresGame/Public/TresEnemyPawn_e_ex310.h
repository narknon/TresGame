#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIIDPawnBase.h"
#include "ETresBodyCollReactionType.h"
#include "TresEnemyPawn_e_ex310.generated.h"

class ATresWeaponBase;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex310 : public ATresEnemyXIIIDPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresBodyCollReactionType m_BodyReactionTypeWhileStun;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresWeaponBase* m_pWeaponKeyBlade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresWeaponBase* m_pWeaponClaymore;
    
public:
    ATresEnemyPawn_e_ex310(const FObjectInitializer& ObjectInitializer);
};

