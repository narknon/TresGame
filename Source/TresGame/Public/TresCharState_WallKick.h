#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresCharState_WallKick.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UTresCharState_WallKick : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pHitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* m_pHitComponent;
    
    UTresCharState_WallKick();
};

