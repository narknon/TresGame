#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresOverridePhysMaterialVolume.generated.h"

UCLASS(Blueprintable)
class ATresOverridePhysMaterialVolume : public ATresVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DetectPriority;
    
    ATresOverridePhysMaterialVolume(const FObjectInitializer& ObjectInitializer);
};

