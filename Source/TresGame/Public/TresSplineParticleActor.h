#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresSplineParticleActor.generated.h"

class UParticleSystem;
class USplineComponent;

UCLASS(Blueprintable)
class ATresSplineParticleActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableSplineRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* m_SplineComponent;
    
public:
    ATresSplineParticleActor(const FObjectInitializer& ObjectInitializer);
};

