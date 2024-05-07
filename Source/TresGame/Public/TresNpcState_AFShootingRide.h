#pragma once
#include "CoreMinimal.h"
#include "TresCharState_AFShootingRide.h"
#include "TresNpcState_AFShootingRide.generated.h"

class AActor;

UCLASS(Blueprintable)
class UTresNpcState_AFShootingRide : public UTresCharState_AFShootingRide {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pAttachActor;
    
    UTresNpcState_AFShootingRide();
};

