#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickActorBase.h"
#include "TresGumiShipLimitAreaData.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipEndOfWorld.generated.h"

class UTresStaticMeshComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable)
class ATresGumiShipEndOfWorld : public ATresGumiShipGimmickActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* m_pStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGumiShipLimitAreaData> m_vLimitDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vOriginPoint;
    
public:
    ATresGumiShipEndOfWorld(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void _OnEndOverlapComponent(UPrimitiveComponent* pOverlappedComp, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void _OnBeginOverlapComponent(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult);
    
};

