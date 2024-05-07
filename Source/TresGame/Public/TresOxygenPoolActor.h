#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresOxygenPoolActor.generated.h"

class UTresOxygenPoolComponent;
class UParticleSystemComponent;

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresOxygenPoolActor : public ATresGimmickActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresOxygenPoolComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MyParticle;
    
public:
    ATresOxygenPoolActor(const FObjectInitializer& ObjectInitializer);
};

