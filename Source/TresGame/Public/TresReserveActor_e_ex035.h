#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresReserveActor_e_ex035.generated.h"

class ATresAIPoint_e_ex035;
class ATresEnemyPawn_e_ex035;

UCLASS(Blueprintable, HideDropdown)
class ATresReserveActor_e_ex035 : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresAIPoint_e_ex035* AIPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresEnemyPawn_e_ex035* OwnerPawn;
    
public:
    ATresReserveActor_e_ex035(const FObjectInitializer& ObjectInitializer);
};

