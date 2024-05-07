#pragma once
#include "CoreMinimal.h"
#include "TresGimmickGeneratorBase.h"
#include "TresSpawnActorDataForGenerator.h"
#include "TresStaticActorGeneratorFromSplineSimple.generated.h"

class UTresSpawnActorManagerComponent;
class ASQEX_SplineActor;

UCLASS(Abstract, Blueprintable)
class ATresStaticActorGeneratorFromSplineSimple : public ATresGimmickGeneratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSpawnActorManagerComponent* SpawnActorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresSpawnActorDataForGenerator> BuildTransformArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyAfterBeginPlay;
    
    ATresStaticActorGeneratorFromSplineSimple(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetSplineActorNative(ASQEX_SplineActor* splineActor);
    
    UFUNCTION(BlueprintCallable)
    void SetBuildTransformArray(const TArray<FTresSpawnActorDataForGenerator>& refSet);
    
    UFUNCTION(BlueprintCallable)
    void RequestRebuild();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_Reconvert();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPEV_Rebuild();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_PostInitializeComponentsInGameWorld();
    
};

