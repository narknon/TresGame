#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "Engine/EngineTypes.h"
#include "TresEnemyPawn_e_ex781_EnergyBreakBeam.generated.h"

class UCapsuleComponent;
class ATresWaterCurrentSplineActor;
class UPrimitiveComponent;
class ATresPlayerPawnBase;
class AActor;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex781_EnergyBreakBeam : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* MySuctionWindComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresWaterCurrentSplineActor> m_WaterSplineClass;
    
private:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TWeakObjectPtr<ATresWaterCurrentSplineActor>> m_WaterSplineList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresPlayerPawnBase* m_OverlapCharPawn;
    
public:
    ATresEnemyPawn_e_ex781_EnergyBreakBeam(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

