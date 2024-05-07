#pragma once
#include "CoreMinimal.h"
#include "EVoiceType_e_ex306.h"
#include "VoiceSet_e_ex306.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FVoiceSet_e_ex306 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> VoiceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EVoiceType_e_ex306> VoiceType;
    
    TRESGAME_API FVoiceSet_e_ex306();
};

