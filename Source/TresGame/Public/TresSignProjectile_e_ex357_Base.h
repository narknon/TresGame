#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresSignProjectileAttackStartDelayParam_e_ex357.h"
#include "TresSignProjectile_e_ex357_Base.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresSignProjectile_e_ex357_Base : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MyParticle2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_SignParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DoFireDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresSignProjectileAttackStartDelayParam_e_ex357> m_AttackStartDelayParamList;
    
public:
    ATresSignProjectile_e_ex357_Base(const FObjectInitializer& ObjectInitializer);
};

