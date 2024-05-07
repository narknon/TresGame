#pragma once
#include "CoreMinimal.h"
#include "TresEnemyToyPawnBase.h"
#include "TresEnemyPawn_e_ex822.generated.h"

class UCapsuleComponent;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex822 : public ATresEnemyToyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* MySuctionWindComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* MyBlowOffWindComponent;
    
public:
    ATresEnemyPawn_e_ex822(const FObjectInitializer& ObjectInitializer);
};

