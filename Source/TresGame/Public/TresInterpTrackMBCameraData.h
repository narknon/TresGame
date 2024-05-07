#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresMBCameraDataTrackKey.h"
#include "TresInterpTrackMBCameraData.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackMBCameraData : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FTresMBCameraDataTrackKey> m_Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FOVBias;
    
    UTresInterpTrackMBCameraData();
};

