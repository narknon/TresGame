#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstEffectAreaTime.generated.h"

UCLASS(Blueprintable)
class UTresInterpTrackInstEffectAreaTime : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResetFloat;
    
    UTresInterpTrackInstEffectAreaTime();
};

