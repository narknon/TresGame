#pragma once
#include "CoreMinimal.h"
#include "TresCharState_AFWaterRide.h"
#include "TresNpcState_AFWaterRide.generated.h"

class AActor;

UCLASS(Blueprintable)
class UTresNpcState_AFWaterRide : public UTresCharState_AFWaterRide {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pAttachActor;
    
    UTresNpcState_AFWaterRide();
};

