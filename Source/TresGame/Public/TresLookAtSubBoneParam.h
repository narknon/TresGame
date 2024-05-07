#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "UObject/NoExportTypes.h"
#include "TresLookAtSubBoneParam.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresLookAtSubBoneParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FBoneReference m_Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_RotLimitMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_RotLimitMax;
    
    FTresLookAtSubBoneParam();
};

