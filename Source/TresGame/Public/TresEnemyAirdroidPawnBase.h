#pragma once
#include "CoreMinimal.h"
#include "TresEnemyToyRoboPawnBase.h"
#include "TresEnemyAirdroidPawnBase.generated.h"

class UCapsuleComponent;

UCLASS(Blueprintable)
class ATresEnemyAirdroidPawnBase : public ATresEnemyToyRoboPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* MyBlowOffWindComponent;
    
public:
    ATresEnemyAirdroidPawnBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFanRotation() const;
    
};

