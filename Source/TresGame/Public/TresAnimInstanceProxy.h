#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "Animation/AnimInstance.h"
#include "TresAnimInstanceProxy.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct TRESGAME_API FTresAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FA2Pose MySavedPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_pInitialPoseSeq;
    
public:
    FTresAnimInstanceProxy();
};

