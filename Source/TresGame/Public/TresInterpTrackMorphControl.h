#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackMorphControlKey.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "TresInterpTrackMorphControl.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackMorphControl : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FTresInterpTrackMorphControlKey> m_Keys;
    
    UTresInterpTrackMorphControl();
};

