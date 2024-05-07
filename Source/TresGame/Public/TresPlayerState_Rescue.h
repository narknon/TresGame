#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Rescue.h"
#include "TresPlayerState_Rescue.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UTresPlayerState_Rescue : public UTresCharState_Rescue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_pTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* m_pComponent;
    
    UTresPlayerState_Rescue();
};

