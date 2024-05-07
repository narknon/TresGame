#pragma once
#include "CoreMinimal.h"
#include "VoiceAndLipParameter.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FVoiceAndLipParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* pAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LipName;
    
    TRESGAME_API FVoiceAndLipParameter();
};

