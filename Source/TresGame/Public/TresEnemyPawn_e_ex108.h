#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "TresEnemyPawn_e_ex108.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex108 : public ATresCharPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_WeaponDisappearParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HideInterpTime;
    
    ATresEnemyPawn_e_ex108(const FObjectInitializer& ObjectInitializer);
};

