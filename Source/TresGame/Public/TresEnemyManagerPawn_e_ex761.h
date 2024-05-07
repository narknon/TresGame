#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyManagerPawn_e_ex761.generated.h"

class UTresEnemyManager_e_ex761;

UCLASS(Blueprintable)
class ATresEnemyManagerPawn_e_ex761 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresEnemyManager_e_ex761* m_Manager;
    
public:
    ATresEnemyManagerPawn_e_ex761(const FObjectInitializer& ObjectInitializer);
};

