#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex071.generated.h"

class ATresEnemy_e_ex071_ValidateTargetVolume;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex071 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresEnemy_e_ex071_ValidateTargetVolume*> m_MyTargetVolumes;
    
public:
    ATresEnemyPawn_e_ex071(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool IsDesiredDie();
    
};

