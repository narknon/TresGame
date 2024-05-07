#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickActorBase.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipGuideMarkerVolume.generated.h"

class USphereComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable)
class ATresGumiShipGuideMarkerVolume : public ATresGumiShipGimmickActorBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipGuideVolume);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* m_pEntryAreaCollision;
    
public:
    ATresGumiShipGuideMarkerVolume(const FObjectInitializer& ObjectInitializer);
private:
    UFUNCTION(BlueprintCallable)
    void _OnEnterMarkerGuideArea(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

