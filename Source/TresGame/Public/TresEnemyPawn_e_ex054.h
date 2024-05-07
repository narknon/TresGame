#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresEnemy_e_ex054_VolcanoCraterAtkCollInfo.h"
#include "UObject/NoExportTypes.h"
#include "ETresEnemy_e_ex054_BattleStyle.h"
#include "TresEnemyPawn_e_ex054.generated.h"

class UParticleSystem;
class AActor;
class USQEX_ParticleAttachDataAsset;
class UParticleSystemComponent;
class UCurveFloat;
class ATresTreeJumpActor_Common;
class UCapsuleComponent;
class UTresSkeletalMeshComponent;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex054 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TWeakObjectPtr<AActor>> m_ProjectileGeneratorArray;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_VolcanoEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_VolcanoEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_AfroEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_pro_AfroHoudenSmcLightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_pro_BreathSmcLightCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyCollMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresTreeJumpActor_Common*> m_buildingJumpActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* MyBlowOffWindComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pro_FireNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_FireDistMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_FireDistMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_FireAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_FireAngle2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_FirePitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_FirePitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_GravityScaleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_GravityScaleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemy_e_ex054_VolcanoCraterAtkCollInfo> m_VolcanoCraterAtkCollInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_AtkCollTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_BurnOmenEffData;
    
public:
    ATresEnemyPawn_e_ex054(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void OnChangeGimmickPause(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    bool IsOnbuilding();
    
    UFUNCTION(BlueprintCallable)
    bool IsJump();
    
    UFUNCTION(BlueprintCallable)
    bool isBattleStyle(TEnumAsByte<ETresEnemy_e_ex054_BattleStyle> Style);
    
    UFUNCTION(BlueprintCallable)
    bool IsArmorBreakStun();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetNeckAimOffsetRot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNeckAimOffsetAlpha() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNeckAimOffset() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    float GetAddMotionAlpha();
    
};

