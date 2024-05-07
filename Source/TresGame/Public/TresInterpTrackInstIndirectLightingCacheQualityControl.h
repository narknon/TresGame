#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "Engine/EngineTypes.h"
#include "TresInterpTrackInstIndirectLightingCacheQualityControl.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class TRESGAME_API UTresInterpTrackInstIndirectLightingCacheQualityControl : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> m_Components;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TEnumAsByte<EIndirectLightingCacheQuality>> m_OriginalValues;
    
    UTresInterpTrackInstIndirectLightingCacheQualityControl();
};

