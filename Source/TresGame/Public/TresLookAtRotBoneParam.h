#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "TresLookAtRotBoneParam.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresLookAtRotBoneParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FBoneReference m_Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_YawCoefficientData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PitchCoefficientData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ParamACoefficientData;
    
    FTresLookAtRotBoneParam();
};

