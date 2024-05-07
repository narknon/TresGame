#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETresStateID.h"
#include "ParticleSystemAttachData_e_ex761.h"
#include "TresEnemyPawnBase.h"
#include "ETresEnemy_e_ex761_Weapon.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex761.generated.h"

class UParticleSystem;
class ATresEnemyManagerPawn_e_ex761;
class ATresCameraNormal;
class USQEX_ParticleAttachDataAsset;
class ATresEnemyPawn_e_ex761;
class AActor;
class UObject;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex761 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyManagerPawn_e_ex761> m_ManagerPawnClass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableSyncAttractionHitPoint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_WarpParticleAttachDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableWarpInEffectAttach: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableWarpOutEffectAttach: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_SideWarpParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_VerticalWarpParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleSystemAttachData_e_ex761 m_AuraEffectAttachData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_PostAuraParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParticleSystemAttachData_e_ex761 m_AlwaysEffectAttachData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CoopPostAuraParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_SpreadOutScreenEffectParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemy_e_ex761_Weapon::Type> m_WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WeaponTrailEffectGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_RightHandMotionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_LeftHandMotionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_PrevBattleAreaIgnoreNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BattleAreaIgnoreDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BattleAreaAppearTurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraNormal> m_WavyLightningCameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WavyLightningCameraStartInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WavyLightningCameraEndInterpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCameraNormal* m_Camera;
    
public:
    ATresEnemyPawn_e_ex761(const FObjectInitializer& ObjectInitializer);
    UFUNCTION()
    void OnDtorStateEvent(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION(BlueprintCallable)
    bool IsXigbarWeapon() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsWarpVanishMode() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsReverseMode() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableForceWarp() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableDamageWarp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresEnemyPawn_e_ex761* GetXigbarPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTargetNoneOtherPawnList(TArray<ATresEnemyPawn_e_ex761*>& OutList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRightHandMotionBlendRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeftHandMotionBlendRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHomeLocationList(TArray<FVector>& OutList) const;
    
    UFUNCTION(BlueprintCallable)
    float GetCoopElapsedTime() const;
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetBattleAreaCameraAimActor(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetEnableDrawHomeLocations(int32 bEnable);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetEnableDrawCoopCommonInfo(int32 bEnable);
    
    UFUNCTION(BlueprintCallable)
    void DebugEndReverseMode();
    
    UFUNCTION(BlueprintCallable)
    void DebugApplyReverseMode();
    
};

