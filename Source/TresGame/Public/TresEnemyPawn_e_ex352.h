#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIILPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ETresStateID.h"
#include "TresEnemyPawn_e_ex352.generated.h"

class USoundBase;
class ATresProjectile_e_ex352_DarkMatter;
class USphereComponent;
class UParticleSystem;
class UParticleSystemComponent;
class ATresProjectileBase;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex352 : public ATresEnemyXIIILPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* MyPullCollisionComponent;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FVector m_DarkMatterOffset[2];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FVector m_DarkMatterOffsetForChange[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_EnvironmentalChangeEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_VisibleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_RevengeVoice;
    
    UPROPERTY(EditAnywhere, Transient)
    ATresProjectile_e_ex352_DarkMatter* m_DarkMatter[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_EnvironmentalChangeEffectCmp;
    
public:
    ATresEnemyPawn_e_ex352(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    ATresProjectileBase* SpawnDarkMatter(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDarkMatter();
    
    UFUNCTION(BlueprintCallable)
    void OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void OnDtorStateEvent_e_ex352(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION()
    void OnCtorStateEvent_e_ex352(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistDarkMatter() const;
    
    UFUNCTION(BlueprintCallable)
    void HideAnsem(bool bHide);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReleaseDarkMineNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDarkMatterNum() const;
    
};

