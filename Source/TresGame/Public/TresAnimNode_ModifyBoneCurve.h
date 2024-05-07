#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "TresAnimNode_ModifyBoneCurveParam.h"
#include "TresAnimNode_ModifyBoneCurve.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresAnimNode_ModifyBoneCurve : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink SourcePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurvePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresAnimNode_ModifyBoneCurveParam> m_InterpParams;
    
    FTresAnimNode_ModifyBoneCurve();
};

