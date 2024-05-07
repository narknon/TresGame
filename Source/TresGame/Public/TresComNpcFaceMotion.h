#pragma once
#include "CoreMinimal.h"
#include "TresComNpcFaceMotion.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcFaceMotion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_EyeAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEyeBlendInTime;
    
    TRESGAME_API FTresComNpcFaceMotion();
};

