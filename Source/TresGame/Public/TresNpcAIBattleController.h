#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresNpcAIBattleController.generated.h"

class UTresNpcAIStyle_Battle;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresNpcAIBattleController : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresNpcAIStyle_Battle*> m_BattleStyleList;
    
public:
    UTresNpcAIBattleController();
protected:
    UFUNCTION(BlueprintCallable)
    void OnChangeBattleModeFunc(bool bBattleMode);
    
};

