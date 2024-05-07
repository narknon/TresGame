#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADSoundReference.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADSoundReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 bFollow: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FName AttachPointName;
    
    FSQEXSEADSoundReference();
};

