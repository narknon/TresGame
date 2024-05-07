#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackFaceAnimation.h"
#include "TresInterpTrackEyeAnimation.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackEyeAnimation : public UTresInterpTrackFaceAnimation {
    GENERATED_BODY()
public:
    UTresInterpTrackEyeAnimation();
};

