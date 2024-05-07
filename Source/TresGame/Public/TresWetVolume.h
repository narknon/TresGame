#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresWetVolume.generated.h"

UCLASS(Blueprintable)
class ATresWetVolume : public ATresVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WetnessTimeParam;
    
public:
    ATresWetVolume(const FObjectInitializer& ObjectInitializer);
};

