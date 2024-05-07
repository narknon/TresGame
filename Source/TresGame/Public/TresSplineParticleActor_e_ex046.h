#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresSplineParticleActor_e_ex046.generated.h"

class UParticleSystem;
class USplineComponent;

UCLASS(Blueprintable)
class ATresSplineParticleActor_e_ex046 : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableSplineRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* m_SplineComponent;
    
public:
    ATresSplineParticleActor_e_ex046(const FObjectInitializer& ObjectInitializer);
};

