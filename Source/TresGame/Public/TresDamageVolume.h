#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PainCausingVolume.h"
#include "TresNotifyInterface.h"
#include "TresDamageVolume.generated.h"

UCLASS(Blueprintable)
class ATresDamageVolume : public APainCausingVolume, public ITresNotifyInterface {
    GENERATED_BODY()
public:
    ATresDamageVolume(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

