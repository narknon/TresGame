#pragma once
#include "CoreMinimal.h"
#include "ETresNavLinkSegment_Common.h"
#include "TresNavLinkSet_Common.generated.h"

class ANavLinkProxy;

USTRUCT(BlueprintType)
struct FTresNavLinkSet_Common {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANavLinkProxy* NavLinkProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresNavLinkSegment_Common> NavLinkSegment;
    
    TRESGAME_API FTresNavLinkSet_Common();
};

