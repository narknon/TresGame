#pragma once
#include "CoreMinimal.h"
#include "TresCharTriggerBox.h"
#include "TresGimmickAcceleration.generated.h"

class UParticleSystemComponent;
class UCurveFloat;

UCLASS(Blueprintable, Config=Game)
class ATresGimmickAcceleration : public ATresCharTriggerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_pEnableEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_pEffectCurve;
    
public:
    ATresGimmickAcceleration(const FObjectInitializer& ObjectInitializer);
};

