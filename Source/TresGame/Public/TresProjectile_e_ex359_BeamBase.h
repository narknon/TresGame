#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_e_ex359_LightBase.h"
#include "TresProjectile_e_ex359_BeamBase.generated.h"

class UParticleSystem;
class UParticleSystemComponent;
class AActor;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex359_BeamBase : public ATresProjectile_e_ex359_LightBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_TailParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_TailParticleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_SpawnActor;
    
    ATresProjectile_e_ex359_BeamBase(const FObjectInitializer& ObjectInitializer);
};

