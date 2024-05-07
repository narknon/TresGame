#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstDynamicShadowDistance.generated.h"

class UDirectionalLightComponent;

UCLASS(Blueprintable)
class TRESGAME_API UTresInterpTrackInstDynamicShadowDistance : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDirectionalLightComponent*> m_LightComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_OriginalValues;
    
    UTresInterpTrackInstDynamicShadowDistance();
};

