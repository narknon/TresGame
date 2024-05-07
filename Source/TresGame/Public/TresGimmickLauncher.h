#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickSkeletalBase.h"
#include "ETresPlayerJumpModes.h"
#include "ETresLandAnimPose.h"
#include "TresGimmickLauncher.generated.h"

class USceneComponent;
class UParticleSystemComponent;
class ATresCharPawnBase;
class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, Config=Game)
class ATresGimmickLauncher : public ATresGimmickSkeletalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SignEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AnimLaunchName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AnimIdleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AnimDamageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LaunchHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_DisableIdleAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresLandAnimPose> m_LandAnimPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_FlyingMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LandAnimDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxParticleScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableIK;
    
public:
    ATresGimmickLauncher(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetTickEnableBP(bool bTickEnableBP, int32 bit);
    
    UFUNCTION(BlueprintCallable)
    void SetLaunchHeight(float inHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetJumpMode(TEnumAsByte<ETresPlayerJumpModes> eMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFadeParam(float Param);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableLauncher(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetCancelLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void SetCancelComp(USceneComponent* pCancelComp);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimTickEnableBP(bool bTickEnableBP);
    
    UFUNCTION(BlueprintCallable)
    void RemovePawn(ATresCharPawnBase* pPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LuancherActorEndSetBase(AActor* inActor, UPrimitiveComponent* InComponent, const FName InBoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LuancherActorEndLaunchAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LuancherActorBeginSetBase(AActor* inActor, UPrimitiveComponent* InComponent, const FName InBoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LuancherActorBeginLaunchAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LauncherChangeGimmickAction(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LaunchedPawn(ATresCharPawnBase* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void EntryPawn(ATresCharPawnBase* pPawn, USceneComponent* pAttachComp, bool UseRemove);
    
    UFUNCTION(BlueprintCallable)
    void CancelLaunch();
    
    UFUNCTION(BlueprintCallable)
    void CallTakeDamageForLauncher();
    
};

