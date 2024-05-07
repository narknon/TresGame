#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx351AfterImageVisibleWorker.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FTresEnemyEx351AfterImageVisibleWorker {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_VisibleEffectCmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_WarpEffectCmp;
    
public:
    TRESGAME_API FTresEnemyEx351AfterImageVisibleWorker();
};

