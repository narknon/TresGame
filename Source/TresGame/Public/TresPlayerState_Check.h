#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Check.h"
#include "TresPlayerState_Check.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UTresPlayerState_Check : public UTresCharState_Check {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_pTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* m_pComponent;
    
    UTresPlayerState_Check();
};

