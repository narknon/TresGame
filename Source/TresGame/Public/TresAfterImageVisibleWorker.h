#pragma once
#include "CoreMinimal.h"
#include "TresAfterImageVisibleWorker.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FTresAfterImageVisibleWorker {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_VisibleEffectCmp;
    
public:
    TRESGAME_API FTresAfterImageVisibleWorker();
};

