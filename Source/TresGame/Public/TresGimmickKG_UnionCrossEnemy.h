#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "UObject/NoExportTypes.h"
#include "EGimmickKG_UnionCrossEnemy_MoveMode.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickKG_UnionCrossEnemy.generated.h"

class USceneComponent;
class ATresGimmickKG_UnionCrossRide;
class UParticleSystemComponent;
class UParticleSystem;

UCLASS(Blueprintable, Config=Game)
class ATresGimmickKG_UnionCrossEnemy : public ATresGimmickActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MyParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetOffsetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemySize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageMoveSpeedRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageSlowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateProgressThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerDamageIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DestroyEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetLocationMinParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* HitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlowParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGimmickKG_UnionCrossEnemy_MoveMode MoveMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HitSheld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NoDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldHitInterval;
    
    ATresGimmickKG_UnionCrossEnemy(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetUnionCross(ATresGimmickKG_UnionCrossRide* NewUnionCross);
    
    UFUNCTION(BlueprintCallable)
    void NotifyHitPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgressLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoveTimeCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFixedPlayerDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetDirRotationToTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void EmitterUpdate(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void DestroyEnemy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanHitToPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector CalcOffsetLocation() const;
    
    UFUNCTION(BlueprintCallable)
    void AddDamageData(float WaitTime, float Damage, bool LazerDamage);
    
};

