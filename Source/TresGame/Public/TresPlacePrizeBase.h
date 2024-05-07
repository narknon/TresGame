#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGimmickActor.h"
#include "TresPlaceActorInterface.h"
#include "ETresCmnCureEffectGrpID.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresSpawnActorData.h"
#include "TresPlacePrizeBase.generated.h"

class USceneComponent;
class UTresPlacePrizeMovementBase;
class UActorComponent;
class ATresCharPawnBase;
class AActor;

UCLASS(Abstract, Blueprintable)
class ATresPlacePrizeBase : public ATresGimmickActor, public ITresPlaceActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresPlacePrizeMovementBase> CollectionMovementClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideSphereRadius_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisableComponentRadius_;
    
public:
    ATresPlacePrizeBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void TresAddComponent(TSubclassOf<UActorComponent> Class, const FTransform& Transform, UActorComponent*& Out);
    
    UFUNCTION(BlueprintCallable)
    void SetCompWork(bool isWork, UActorComponent* comp);
    
    UFUNCTION(BlueprintCallable)
    void RecoveryHpMp(ATresCharPawnBase* Actor, int32 InHpRecoveryPoint, int32 InMpRecoveryPoint, ETresCmnCureEffectGrpID InEffect);
    
    UFUNCTION(BlueprintCallable)
    AActor* PlacePrizeSpawnActor(const FTresSpawnActorData& SpawnData, float overrideRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHit();
    
    UFUNCTION(BlueprintCallable)
    void HitActor(AActor* Actor, FVector Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDelta();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GenerateDelaySpawn(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void DestroyPlacePrize();
    
    UFUNCTION(BlueprintCallable)
    void CallUserConstructionScript();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_PreDestroy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OnChangeCompWork(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_InitializeSpawnActor(AActor* Actor, const FTresSpawnActorData& SpawnData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_GetItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BPEV_ExecCollection(AActor* Actor);
    
    
    // Fix for true pure virtual functions not being implemented
};

