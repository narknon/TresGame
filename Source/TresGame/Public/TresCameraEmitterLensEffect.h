#pragma once
#include "CoreMinimal.h"
#include "Particles/EmitterCameraLensEffectBase.h"
#include "TresCameraEmitterLensEffect.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class ATresCameraEmitterLensEffect : public AEmitterCameraLensEffectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FieldOfView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bOnlyCameraSee: 1;
    
public:
    ATresCameraEmitterLensEffect(const FObjectInitializer& ObjectInitializer);
};

