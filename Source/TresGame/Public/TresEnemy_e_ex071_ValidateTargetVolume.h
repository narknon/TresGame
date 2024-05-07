#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "ETresEnemyEx071DeckKind.h"
#include "TresEnemy_e_ex071_ValidateTargetVolume.generated.h"

UCLASS(Blueprintable)
class ATresEnemy_e_ex071_ValidateTargetVolume : public ATresVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEnemyEx071DeckKind m_Kind;
    
public:
    ATresEnemy_e_ex071_ValidateTargetVolume(const FObjectInitializer& ObjectInitializer);
};

