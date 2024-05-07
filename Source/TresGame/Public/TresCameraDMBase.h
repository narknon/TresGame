#pragma once
#include "CoreMinimal.h"
#include "TresCameraNormal.h"
#include "TresCameraDMBase.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class ATresCameraDMBase : public ATresCameraNormal {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_JumpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bJumpEndPitchReset: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_JumpEndResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_JumpLookRate;
    
public:
    ATresCameraDMBase(const FObjectInitializer& ObjectInitializer);
};

