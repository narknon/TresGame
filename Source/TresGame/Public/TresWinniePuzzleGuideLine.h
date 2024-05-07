#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleComponentBase.h"
#include "TresWinniePuzzleGuideLine.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleGuideLine : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDistanceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndDistanceOffset;
    
private:
    UPROPERTY(EditAnywhere, Export, Transient)
    TArray<TWeakObjectPtr<UParticleSystemComponent>> m_particles;
    
public:
    UTresWinniePuzzleGuideLine();
};

