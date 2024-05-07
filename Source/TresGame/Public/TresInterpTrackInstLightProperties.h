#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstLightProperties.generated.h"

class ULightComponent;
class UDirectionalLightComponent;

UCLASS(Blueprintable)
class TRESGAME_API UTresInterpTrackInstLightProperties : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<ULightComponent*> m_LightComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDirectionalLightComponent*> m_DirectionalLightComponents;
    
    UTresInterpTrackInstLightProperties();
};

