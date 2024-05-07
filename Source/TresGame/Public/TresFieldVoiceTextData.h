#pragma once
#include "CoreMinimal.h"
#include "TresFieldVoiceTextData.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresFieldVoiceTextData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_NameSpaceAndKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Duration;
    
    FTresFieldVoiceTextData();
};

