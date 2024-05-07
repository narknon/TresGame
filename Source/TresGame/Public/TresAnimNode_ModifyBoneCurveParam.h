#pragma once
#include "CoreMinimal.h"
#include "BoneContainer.h"
#include "UObject/NoExportTypes.h"
#include "BoneControllers/AnimNode_ModifyBone.h"
#include "TresAnimNode_ModifyBoneCurveParam.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct TRESGAME_API FTresAnimNode_ModifyBoneCurveParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FBoneReference m_BoneToModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EBoneModificationMode> m_RotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* m_InterpRotationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_InterpRotationOffset;
    
    FTresAnimNode_ModifyBoneCurveParam();
};

