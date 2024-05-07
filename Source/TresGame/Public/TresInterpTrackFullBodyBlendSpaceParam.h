#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackBlendSpaceControl.h"
#include "TresInterpTrackFullBodyBlendSpaceParam.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackFullBodyBlendSpaceParam : public UTresInterpTrackBlendSpaceControl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UTresInterpTrackFullBodyBlendSpaceParam();
};

