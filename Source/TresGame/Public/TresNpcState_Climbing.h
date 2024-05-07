#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Climbing.h"
#include "TresNpcState_Climbing.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UTresNpcState_Climbing : public UTresCharState_Climbing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pAttachActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* m_pAttachComponent;
    
    UTresNpcState_Climbing();
};

