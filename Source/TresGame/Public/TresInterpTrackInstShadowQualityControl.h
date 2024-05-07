#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_ShadowQuality -FallbackName=ESQEX_ShadowQuality
#include "TresInterpTrackInstShadowQualityControl.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class TRESGAME_API UTresInterpTrackInstShadowQualityControl : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> m_Components;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TEnumAsByte<ESQEX_ShadowQuality>> m_SavedShadowQualityValues;
    
    UTresInterpTrackInstShadowQualityControl();
};

