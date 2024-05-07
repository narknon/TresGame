#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "UObject/NoExportTypes.h"
#include "TresInterpTrackInstVectorParticleParam.generated.h"

UCLASS(Blueprintable)
class UTresInterpTrackInstVectorParticleParam : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ResetVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupID;
    
    UTresInterpTrackInstVectorParticleParam();
};

