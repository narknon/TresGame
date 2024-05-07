#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackSlotAnimation.h"
#include "TresInterpTrackComponentAnimation.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackComponentAnimation : public UTresInterpTrackSlotAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ComponentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IncludeChildActors;
    
    UTresInterpTrackComponentAnimation();
};

