#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackEvent.h"
#include "ETresFadeTrack_TheaterMode.h"
#include "TresInterpTrackEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackEvent : public UInterpTrackEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresFadeTrack_TheaterMode> m_TheaterMode;
    
    UTresInterpTrackEvent();
};

