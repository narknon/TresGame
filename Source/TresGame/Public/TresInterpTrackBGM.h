#pragma once
#include "CoreMinimal.h"
#include "ETresFadeTrack_TheaterMode.h"
#include "SQEXSEADInterpTrackBGM.h"
#include "TresInterpTrackBGM.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UTresInterpTrackBGM : public USQEXSEADInterpTrackBGM {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresFadeTrack_TheaterMode> m_TheaterMode;
    
    UTresInterpTrackBGM();
};

