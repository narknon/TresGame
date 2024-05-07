#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "UObject/NoExportTypes.h"
#include "TresInterpTrackInstVectorAnimBPParam.generated.h"

class UAnimInstance;

UCLASS(Blueprintable)
class TRESGAME_API UTresInterpTrackInstVectorAnimBPParam : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* AnimScriptInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ResetVector;
    
    UTresInterpTrackInstVectorAnimBPParam();
};

