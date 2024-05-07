#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Climbing.h"
#include "TresPlayerState_Climbing.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UTresPlayerState_Climbing : public UTresCharState_Climbing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pAttachActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* m_pAttachComponent;
    
    UTresPlayerState_Climbing();
};

