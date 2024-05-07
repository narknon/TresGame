#pragma once
#include "CoreMinimal.h"
#include "TresDirectionalVolumeTickBase.h"
#include "TresDispDestinationVolume.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresDispDestinationVolume : public ATresDirectionalVolumeTickBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_Namespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_Key;
    
    ATresDispDestinationVolume(const FObjectInitializer& ObjectInitializer);
};

