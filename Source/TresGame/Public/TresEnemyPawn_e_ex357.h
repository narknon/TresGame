#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIILBCoopPawnBase.h"
#include "TresDeathSentenceArmorRevengeParam_e_ex357.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "ETresEnemyFieldSize_e_ex357.h"
#include "ETresDeathSentenceRemoteEventType_e_ex357.h"
#include "TresEnemyPawn_e_ex357.generated.h"

class USphereComponent;
class UParticleSystem;
class AActor;
class UEnvQuery;
class UPrimitiveComponent;
class UObject;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex357 : public ATresEnemyXIIILBCoopPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* MyPullCollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_AuraParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_WeaponAuraParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDeathSentenceArmorRevengeParam_e_ex357> m_DeathSentenceArmorRevengeParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DeathSentenceCinematicCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DeathSentenceCinematicStartTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DeathSentenceCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DeathSentenceStartTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DeathSentenceEndTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableBitExistLockonLowPriority: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_BitEnvQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BitEnvQueryRunIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FieldPenetrateCheckStartDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsFieldDieDestroy: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FieldDieDestroyDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsFieldDieImmediate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_BloomShieldParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_DeathSentenceCounterParticleSystem;
    
public:
    ATresEnemyPawn_e_ex357(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetDisableFieldLifeOver(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableFieldAttack(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableBitAttackUpdate(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableBitAttack(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void OnPullCollisionEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPullCollisionBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    bool IsStartedDamageReactionAfterIdle() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDeathSentence() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetSmallFieldNum() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetMediumFieldNum() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetLargeFieldNum() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetFieldNum() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetFieldManagerNum() const;
    
    UFUNCTION(BlueprintPure)
    void GetFieldLocationsSize(TArray<FVector>& OutList, TEnumAsByte<ETresEnemyFieldSize_e_ex357::Type> InSizeType) const;
    
    UFUNCTION(BlueprintPure)
    void GetFieldLocationsIgnoreNearestSize(TArray<FVector>& OutList, TEnumAsByte<ETresEnemyFieldSize_e_ex357::Type> InSizeType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFieldLocationsIgnoreNearest(TArray<FVector>& OutList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFieldLocations(TArray<FVector>& OutList) const;
    
    UFUNCTION(BlueprintCallable)
    float GetElapsedTimeSinceLastBitGenerate() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetBitNum() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetBitManagerNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBitLocationList(TArray<FVector>& OutList) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAttackGuarded();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetPhantomBlitzQuickTurnaroundParamIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetNumWarpCut(int32 Num);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetNumContinuityCut(int32 Num);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetEnableForceDeathSentenceApplyDispelCommand(int32 Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetEnableFieldForceShortLife(int32 Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetEnableDrawPullCollision(int32 Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetEnableDrawFastMoveArcTargetLocation(int32 Enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetDeathSentenceStartCount(int32 InCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetDeathSentenceCountSpeed(float InSpeed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugEnableBloomShield(int32 Enable);
    
    UFUNCTION(BlueprintCallable)
    static void DeathSentenceRemoteEventForLevelBP(UObject* WorldContextObject, TEnumAsByte<ETresDeathSentenceRemoteEventType_e_ex357> InRemoteType);
    
};

