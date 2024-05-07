#pragma once
#include "CoreMinimal.h"
#include "TresSubtitleTrackKey.generated.h"

USTRUCT(BlueprintType)
struct FTresSubtitleTrackKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_TextLabel;
    
    TRESGAME_API FTresSubtitleTrackKey();
};

