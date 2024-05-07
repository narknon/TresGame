#pragma once
#include "CoreMinimal.h"
#include "SlideShowCutData.generated.h"

USTRUCT(BlueprintType)
struct FSlideShowCutData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_CutId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SlideId;
    
    TRESGAME_API FSlideShowCutData();
};

