#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADInterpTrackBGMControl.h"
#include "ETresFadeTrack_TheaterMode.h"
#include "TresInterpTrackBGMControl.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UTresInterpTrackBGMControl : public USQEXSEADInterpTrackBGMControl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresFadeTrack_TheaterMode> m_TheaterMode;
    
    UTresInterpTrackBGMControl();
};

