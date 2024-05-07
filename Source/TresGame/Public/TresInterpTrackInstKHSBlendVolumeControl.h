#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstKHSBlendVolumeControl.generated.h"

class ATresKHSBlendVolume;

UCLASS(Blueprintable)
class TRESGAME_API UTresInterpTrackInstKHSBlendVolumeControl : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresKHSBlendVolume* m_KHSBlendVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresKHSBlendVolume*> m_KHSBlendVolumes;
    
    UTresInterpTrackInstKHSBlendVolumeControl();
};

