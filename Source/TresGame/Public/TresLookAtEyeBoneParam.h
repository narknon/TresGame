#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "UObject/NoExportTypes.h"
#include "TresLookAtEyeBoneParam.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresLookAtEyeBoneParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FBoneReference m_Bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_RotLimitMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_RotLimitMax;
    
    FTresLookAtEyeBoneParam();
};

