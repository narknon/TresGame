#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInstMove.h"
#include "UObject/NoExportTypes.h"
#include "TresInterpTrackInstMBCameraClip.generated.h"

UCLASS(Blueprintable)
class UTresInterpTrackInstMBCameraClip : public UInterpTrackInstMove {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_Cached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_CachedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMatrix m_CachedMatrix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_CachedRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_CachedFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_CachedClip;
    
    UTresInterpTrackInstMBCameraClip();
};

