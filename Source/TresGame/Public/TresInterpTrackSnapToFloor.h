#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresTrackSnapToFloorKey.h"
#include "TresInterpTrackSnapToFloor.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackSnapToFloor : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FTresTrackSnapToFloorKey> m_Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SnapToFloorUpLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SnapToFloorDownLength;
    
    UTresInterpTrackSnapToFloor();
};

