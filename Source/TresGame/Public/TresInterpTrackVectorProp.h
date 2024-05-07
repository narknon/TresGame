#pragma once
#include "CoreMinimal.h"
#include "ETresPropertyTrackTermnation.h"
#include "Matinee/InterpTrackVectorProp.h"
#include "TresInterpTrackVectorProp.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackVectorProp : public UInterpTrackVectorProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresPropertyTrackTermnation m_TermnationType;
    
    UTresInterpTrackVectorProp();
};

