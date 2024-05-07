#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "CAJellyfishParam.h"
#include "TresGimmickCA_TickControlInterface.h"
#include "TresGimmickCA_Jellyfish.generated.h"

class UTresAtkCollComponent;
class UTresStaticMeshComponent;
class USceneComponent;

UCLASS(Blueprintable, Config=Game)
class ATresGimmickCA_Jellyfish : public ATresGimmickActor, public ITresGimmickCA_TickControlInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresAtkCollComponent* MyAtkColl_Jelly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyCollBase;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCAJellyfishParam m_Parameter;
    
public:
    ATresGimmickCA_Jellyfish(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveNotifyProjectileAttackHitBpEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveNotifyAttackHitBpEvent();
    
    
    // Fix for true pure virtual functions not being implemented
};

