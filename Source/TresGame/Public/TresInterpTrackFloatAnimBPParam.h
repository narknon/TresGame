#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatAnimBPParam.h"
#include "TresInterpTrackFloatAnimBPParam.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackFloatAnimBPParam : public UInterpTrackFloatAnimBPParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestoreWhenTerminate;
    
    UTresInterpTrackFloatAnimBPParam();
};

