#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresCharState_PoleTurn.generated.h"

class AActor;
class USceneComponent;

UCLASS(Blueprintable)
class UTresCharState_PoleTurn : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pHitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_pHitComponent;
    
    UTresCharState_PoleTurn();
};

