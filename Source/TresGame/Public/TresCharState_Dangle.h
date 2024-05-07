#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresCharState_Dangle.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UTresCharState_Dangle : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_pAttachActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* m_pAttachComponent;
    
    UTresCharState_Dangle();
};

