#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipLevelEntityActivateVolume.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class TRESGAME_API ATresGumiShipLevelEntityActivateVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_ManagementActorList;
    
public:
    ATresGumiShipLevelEntityActivateVolume(const FObjectInitializer& ObjectInitializer);
private:
    UFUNCTION(BlueprintCallable)
    void _OnLeaveActivateVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void _OnEnterActivateVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

