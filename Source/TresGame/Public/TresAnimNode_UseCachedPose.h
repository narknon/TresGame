#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "TresAnimNode_UseCachedPose.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresAnimNode_UseCachedPose : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bSetRefferedFlag: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bAlwaysRefferPrevPose: 1;
    
    FTresAnimNode_UseCachedPose();
};

