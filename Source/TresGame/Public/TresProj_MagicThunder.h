#pragma once
#include "CoreMinimal.h"
#include "TresProj_MagicBase.h"
#include "TresProj_MagicThunder.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresProj_MagicThunder : public ATresProj_MagicBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_HitTailEffect;
    
public:
    ATresProj_MagicThunder(const FObjectInitializer& ObjectInitializer);
};

