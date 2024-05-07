#pragma once
#include "CoreMinimal.h"
#include "DetectMarkerCheckArea.generated.h"

USTRUCT(BlueprintType)
struct FDetectMarkerCheckArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Top;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Buttom;
    
    TRESGAME_API FDetectMarkerCheckArea();
};

