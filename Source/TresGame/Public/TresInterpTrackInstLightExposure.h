#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstLightExposure.generated.h"

class ULightComponentBase;

UCLASS(Blueprintable)
class TRESGAME_API UTresInterpTrackInstLightExposure : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<ULightComponentBase*> m_LightComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_OriginalValues;
    
    UTresInterpTrackInstLightExposure();
};

