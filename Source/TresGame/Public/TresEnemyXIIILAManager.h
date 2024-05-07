#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemyXIIILAManager.generated.h"

class ATresEnemyXIIILPawnBase;

UCLASS(Blueprintable, HideDropdown)
class ATresEnemyXIIILAManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresEnemyXIIILPawnBase*> m_EntryEnemyList;
    
    ATresEnemyXIIILAManager(const FObjectInitializer& ObjectInitializer);
};

