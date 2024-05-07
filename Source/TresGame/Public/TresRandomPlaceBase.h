#pragma once
#include "CoreMinimal.h"
#include "TresEditorOnlyGeneratorBase.h"
#include "TresLotterySpawnActorData.h"
#include "TresRandomPlaceBase.generated.h"

class AActor;
class UTresRandomPlaceRuleBase;
class UTresSpawnActorManagerComponent;

UCLASS(Abstract, Blueprintable)
class ATresRandomPlaceBase : public ATresEditorOnlyGeneratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresRandomPlaceRuleBase* GeneratedRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSpawnActorManagerComponent* SpawnActorManager;
    
    ATresRandomPlaceBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void spawn();
    
    UFUNCTION(BlueprintCallable)
    void DestroyAndSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_CallbackSpawn(AActor* SpawnActor, const FTresLotterySpawnActorData& Data);
    
};

