#pragma once
#include "CoreMinimal.h"
#include "MatineeTrackAtomSoundBase.h"
#include "AtomCueIdTrackKeyframe.h"
#include "MatineeTrackAtomCueId.generated.h"

class USoundAtomCueSheet;

UCLASS(CollapseCategories, MinimalAPI)
class UMatineeTrackAtomCueId : public UMatineeTrackAtomSoundBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<FString> AisacList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<FString> SelectorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    USoundAtomCueSheet* CueSheet;
    
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FAtomCueIdTrackKeyframe> KeyframeList;
    
    UMatineeTrackAtomCueId();
};

