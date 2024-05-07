#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackMove.h"
#include "TresInterpTrackMBCameraClip.generated.h"

class UTresMBCameraData;

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackMBCameraClip : public UInterpTrackMove {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresMBCameraData* m_CameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ClipIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_EnableOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FOVBias;
    
    UTresInterpTrackMBCameraClip();
};

