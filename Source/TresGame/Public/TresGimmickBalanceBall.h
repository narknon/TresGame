#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresVehiclePawnBase.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickBalanceBall.generated.h"

class USceneComponent;
class UParticleSystemComponent;
class UCapsuleComponent;
class USphereComponent;
class UPrimitiveComponent;
class AActor;
class ATresCharPawnBase;

UCLASS(Blueprintable)
class ATresGimmickBalanceBall : public ATresVehiclePawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* BallRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SignEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* TickSensor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* BlockCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ParamSpeedDumping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ParamAccelSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ParamReflection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ParamBallSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ParamMoveThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_CanbePushed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PawnPushPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AttackPushPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReturnToInitialWhenCutScenes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_CheckSpawnPoint;
    
    ATresGimmickBalanceBall(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetSensorEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreLanding(bool InIgnore);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFadeParam(float Param);
    
    UFUNCTION(BlueprintCallable)
    void SetEmphasis(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAttackName(FName AttackName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetCollisionEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachmentComp(USceneComponent* pAttachComp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReflectBalanceBall(const FHitResult& Impact);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEndSensorOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginSensorOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyChangeGimmickPause(bool bPause);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyChangeGimmickActionImpl(bool bShow);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyChangeBallSpeed(const FVector& Speed, float fRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyChangeBallEntried(bool Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USphereComponent* GetEntrySensorComponent();
    
    UFUNCTION(BlueprintCallable)
    float GetBalanceBallSize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndOverlap(ATresCharPawnBase* pPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginOverlap(ATresCharPawnBase* pPawn);
    
    UFUNCTION(BlueprintCallable)
    void BalanceBallRemoveCollisionShape(const FName InTagName, bool bUpdate);
    
    UFUNCTION(BlueprintCallable)
    void BalanceBallAppendCollisionShape(const FName InTagName, FVector InSize, FVector InRelativeLocaiton, FRotator InRelativeRotation, bool bUpdate);
    
};

