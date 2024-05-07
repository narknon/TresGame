#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "TresPhysObjSkeletalMeshActor.generated.h"

class UDamageType;
class UPrimitiveComponent;
class APhysicsVolume;
class AActor;
class AController;

UCLASS(Blueprintable)
class ATresPhysObjSkeletalMeshActor : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDisappearAfterWake: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDisappearLeaveInitLoc: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDisappearLeaveInitPhysVolume: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDisappearInnerWaterPhysVolume: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDisappearInnerOceanPhysVolume: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDisappearOnTakeDamage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DisappearAfterWakeTimeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DisappearLeaveDistanceSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DisappearOnTakeDamageSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bAutoDisappearEffectProc: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DisappearFadeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DisappearFadeParamName;
    
public:
    ATresPhysObjSkeletalMeshActor(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void StartDisappear(bool bImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePreDisappear();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDisappearTick(float DeltaSeconds);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMeshPhysVolumeChange(APhysicsVolume* NewVolume);
    
    UFUNCTION(BlueprintCallable)
    void OnMeshComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void OnMeshComponentSleep(UPrimitiveComponent* SleepingComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void OnActorTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
};

