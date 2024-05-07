#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatProp.h"
#include "ETresPropertyTrackTermnation.h"
#include "TresInterpTrackFloatProp.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackFloatProp : public UInterpTrackFloatProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresPropertyTrackTermnation m_TermnationType;
    
    UTresInterpTrackFloatProp();
};

