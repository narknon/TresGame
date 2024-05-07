#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresEffectTriggerTrackKey.h"
#include "TresInterpTrackEffectTrigger.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackEffectTrigger : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FTresEffectTriggerTrackKey> m_Keys;
    
    UTresInterpTrackEffectTrigger();
};

