#pragma once
#include "CoreMinimal.h"
#include "ETresNavLinkSegment_e_ex035_.h"
#include "TresNavLinkSet_e_ex035_.generated.h"

class ANavLinkProxy;

USTRUCT(BlueprintType)
struct FTresNavLinkSet_e_ex035_ {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANavLinkProxy* NavLinkProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresNavLinkSegment_e_ex035_> NavLinkSegment;
    
    TRESGAME_API FTresNavLinkSet_e_ex035_();
};

