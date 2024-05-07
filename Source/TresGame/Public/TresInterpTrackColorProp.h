#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackColorProp.h"
#include "ETresPropertyTrackTermnation.h"
#include "TresInterpTrackColorProp.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackColorProp : public UInterpTrackColorProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresPropertyTrackTermnation m_TermnationType;
    
    UTresInterpTrackColorProp();
};

