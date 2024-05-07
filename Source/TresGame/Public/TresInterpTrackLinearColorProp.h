#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackLinearColorProp.h"
#include "ETresPropertyTrackTermnation.h"
#include "TresInterpTrackLinearColorProp.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackLinearColorProp : public UInterpTrackLinearColorProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresPropertyTrackTermnation m_TermnationType;
    
    UTresInterpTrackLinearColorProp();
};

