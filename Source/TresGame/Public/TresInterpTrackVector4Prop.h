#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_InterpTrackVector4Prop -FallbackName=SQEX_InterpTrackVector4Prop
#include "ETresPropertyTrackTermnation.h"
#include "SQEX_InterpTrackVector4Prop.h"
#include "TresInterpTrackVector4Prop.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackVector4Prop : public USQEX_InterpTrackVector4Prop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresPropertyTrackTermnation m_TermnationType;
    
    UTresInterpTrackVector4Prop();
};

