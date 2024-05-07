#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackSound.h"
#include "SQEXSEADInterpTrackBGM.generated.h"

UCLASS(CollapseCategories)
class SQEXSEAD_API USQEXSEADInterpTrackBGM : public UInterpTrackSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float OnMatineeEndSetVolume;
    
    USQEXSEADInterpTrackBGM();
};

