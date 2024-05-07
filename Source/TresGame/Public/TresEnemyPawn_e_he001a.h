#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "TresAnims_e_he001a.h"
#include "TresEnemyPawn_e_he001a.generated.h"

class UParticleSystem;
class UTresSkeletalMeshComponent;
class USQEX_ParticleAttachDataAsset;
class UParticleSystemComponent;
class ATresRailSlideActor;
class AActor;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_he001a : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyCollMesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresAnims_e_he001a> m_Anims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ChanceSlowRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ChanceHitMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresRailSlideActor* m_RollerCoasterRailStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_RollerCoasterCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FaceSlotBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_BreakEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_BlurEffData1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Attack234_WindRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Attack234_WindStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Attack234_WindSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Attack234_WindTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_BlurEff;
    
public:
    ATresEnemyPawn_e_he001a(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRollerCoaster() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRightLegBreak() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeftLegBreak() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDown() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableLockon(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void CancelHe001DownEvent();
    
};

