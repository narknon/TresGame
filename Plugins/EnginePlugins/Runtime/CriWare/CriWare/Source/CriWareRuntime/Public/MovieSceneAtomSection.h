#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "Curves/RichCurve.h"
#include "MovieSceneAtomSection.generated.h"

class USoundAtomCue;

UCLASS(MinimalAPI)
class UMovieSceneAtomSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    USoundAtomCue* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float StartOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FRichCurve SoundVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FRichCurve PitchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    bool bSuppressSubtitles;
    
public:
    UMovieSceneAtomSection();
};

