#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "EBX901_ActionTriggerType.h"
#include "EX901_ActionKey.h"
#include "Engine/EngineTypes.h"
#include "TresEnemy_e_bx901_ActionTriggerVolume.generated.h"

class ATresEnemyPawn_e_bx901;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable)
class ATresEnemy_e_bx901_ActionTriggerVolume : public ATresVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EBX901_ActionTriggerType> m_TriggerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX901_ActionKey m_ActionKeyInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<ATresEnemyPawn_e_bx901> m_pDarkBaymaxPawn;
    
public:
    ATresEnemy_e_bx901_ActionTriggerVolume(const FObjectInitializer& ObjectInitializer);
private:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

