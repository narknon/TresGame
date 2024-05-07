#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickActorBase.h"
#include "ETresGumiShipJumpPointID.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipGimmickJumpPoint.generated.h"

class USphereComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable)
class ATresGumiShipGimmickJumpPoint : public ATresGumiShipGimmickActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* m_pCheckJumpAreaCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipJumpPointID m_WorldMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCheckAreaRadius;
    
public:
    ATresGumiShipGimmickJumpPoint(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void _OnEnterCheckArea(UPrimitiveComponent* pOverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, int32 dOtherBodyIndex, bool bFromSweep, const FHitResult& rSweepResult);
    
};

