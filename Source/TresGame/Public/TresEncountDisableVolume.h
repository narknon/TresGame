#pragma once
#include "CoreMinimal.h"
#include "ETresEncountDisableVolumeType.h"
#include "TresVolume.h"
#include "TresEncountDisableVolume.generated.h"

UCLASS(Blueprintable)
class ATresEncountDisableVolume : public ATresVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEncountDisableVolumeType m_ShapeType;
    
    ATresEncountDisableVolume(const FObjectInitializer& ObjectInitializer);
};

