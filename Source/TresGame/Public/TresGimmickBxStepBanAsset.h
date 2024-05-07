#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickBxStepBanAsset.generated.h"

class UTresStaticMeshComponent;
class AActor;

UCLASS(Blueprintable, Config=Game)
class ATresGimmickBxStepBanAsset : public ATresGimmickActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyMesh;
    
    ATresGimmickBxStepBanAsset(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetStepBanAssetOwnerActor(AActor* GimmickOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeStepBanAssetOwner(AActor* GimmickOwner);
    
};

