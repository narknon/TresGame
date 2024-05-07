#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "LockAtChangeInfo.generated.h"

USTRUCT(BlueprintType)
struct FLockAtChangeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fChangeDot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EViewTargetBlendFunction> m_eInterpFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fInterpSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fInterpExp;
    
    TRESGAME_API FLockAtChangeInfo();
};

