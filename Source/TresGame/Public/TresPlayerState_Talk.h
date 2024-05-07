#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Talk.h"
#include "TresPlayerState_Talk.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UTresPlayerState_Talk : public UTresCharState_Talk {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_pTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* m_pComponent;
    
    UTresPlayerState_Talk();
};

