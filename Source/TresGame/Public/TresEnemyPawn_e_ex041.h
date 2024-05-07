#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemyPawn_e_ex041.generated.h"

class UTresActionDefinitionBase;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex041 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresActionDefinitionBase> m_BeatenGoofyShootData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsAreaCaPawn: 1;
    
    ATresEnemyPawn_e_ex041(const FObjectInitializer& ObjectInitializer);
};

