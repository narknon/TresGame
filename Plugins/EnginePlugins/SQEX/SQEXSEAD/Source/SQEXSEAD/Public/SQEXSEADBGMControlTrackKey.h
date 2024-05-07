#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADBGMControlTypes.h"
#include "SQEXSEADBGMControlTrackKey.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEADBGMControlTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ESQEXSEADBGMControlTypes::Type> ControlType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    int32 SectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    int32 ModeIndex;
    
    SQEXSEAD_API FSQEXSEADBGMControlTrackKey();
};

