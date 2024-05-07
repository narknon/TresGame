#pragma once
#include "CoreMinimal.h"
#include "CameraSensitivityInfo.generated.h"

USTRUCT(BlueprintType)
struct FCameraSensitivityInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSensitivity;
    
    TRESGAME_API FCameraSensitivityInfo();
};

