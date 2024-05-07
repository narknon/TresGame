#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex005.generated.h"

class UParticleSystem;
class USQEX_ParticleAttachDataAsset;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex005 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_SandSmokeEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SandTowerCoolDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_SandSmokeEffectComponent;
    
public:
    ATresEnemyPawn_e_ex005(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void DebugSetEnableSandMode(int32 bDisable);
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugSetBT();
    
};

