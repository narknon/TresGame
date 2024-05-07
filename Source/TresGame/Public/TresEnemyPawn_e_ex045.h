#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex045.generated.h"

class USQEX_ParticleAttachDataAsset;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex045 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_EffectDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHasHorn;
    
    ATresEnemyPawn_e_ex045(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHorn();
    
};

