#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackVectorBase.h"
#include "TresInterpTrackVectorParticleParam.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UTresInterpTrackVectorParticleParam : public UInterpTrackVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllSetParameter: 1;
    
    UTresInterpTrackVectorParticleParam();
};

