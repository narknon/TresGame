#pragma once
#include "CoreMinimal.h"
#include "TresEnemyDarkSidePawnBase.h"
#include "TresEnemyPawn_e_dw407a.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_dw407a : public ATresEnemyDarkSidePawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_DarkHomingChestEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_DarkHomingChestEff;
    
public:
    ATresEnemyPawn_e_dw407a(const FObjectInitializer& ObjectInitializer);
};

