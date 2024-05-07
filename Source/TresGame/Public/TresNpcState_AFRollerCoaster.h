#pragma once
#include "CoreMinimal.h"
#include "TresCharState_AFRollerCoaster.h"
#include "TresNpcState_AFRollerCoaster.generated.h"

class AActor;

UCLASS(Blueprintable)
class UTresNpcState_AFRollerCoaster : public UTresCharState_AFRollerCoaster {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pAttachActor;
    
    UTresNpcState_AFRollerCoaster();
};

