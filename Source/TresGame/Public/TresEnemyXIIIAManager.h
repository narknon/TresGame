#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemyXIIIAManager.generated.h"

class ATresEnemyXIIIPawnBase;

UCLASS(Blueprintable, HideDropdown)
class ATresEnemyXIIIAManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresEnemyXIIIPawnBase*> m_EntryEnemyList;
    
    ATresEnemyXIIIAManager(const FObjectInitializer& ObjectInitializer);
};

