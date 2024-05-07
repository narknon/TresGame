#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Camera/PlayerCameraManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ViewTargetTransitionParamsEx -FallbackName=ViewTargetTransitionParamsEx
#include "TCPATH_SPLINEGROUP.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraManager.generated.h"

class ATresCameraNormal;
class AActor;
class APlayerController;
class ATresCameraBase;
class UTresLockonTargetComponent;
class UTresCameraConfig;
class UParticleSystemComponent;
class UCameraShake;

UCLASS(Blueprintable, NonTransient)
class ATresCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_CameraArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_AddArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_DelArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewTargetTransitionParamsEx m_AddTransitionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewTargetTransitionParamsEx m_DelTransitionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_SpawnArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* m_PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCameraBase* m_LockonCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_LockonTarget;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_DummyLockonTargetComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresCameraConfig* m_CameraConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraNormal* m_CameraNormal1st;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraNormal* m_CameraNormal2nd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> m_CameraPositionEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_DebugCameraTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_DebugOrgCameraTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCameraNormal* m_DebugPatrolCamera;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTCPATH_SPLINEGROUP> m_SplinePathRoute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTCPATH_SPLINEGROUP> m_SplinePathLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTCPATH_SPLINEGROUP> m_SplinePathRSLocation;
    
    ATresCameraManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetTresCameraRollOffset(float RollOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetLockonNearLimit(float fLimit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresCameraNormal* GetTresCameraNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActiveViewCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresCameraBase* GetActiveCamera() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableAllCameraPathRoute(bool bEnable, int32 Priority);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllBluprintCamera();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowOverlapTresCameraLocation(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowCameraPathLine();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowCameraOutsideWallCheck(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowCameraManager();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowCameraLookPos();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowCameraGeneral(bool bEneble);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugShowCameraDistanceAdjust2T();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetCameraSlideScale(float Scale);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetCameraSize(float Size);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetCameraShutOutFadeTime(float FadeTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetCameraShutOutFadeAlpha(float FadeAlpha);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSetCameraLockonFixInFront(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugSelectCameraDebugOrthoTopView(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugPatrolCameraTarget(bool bOn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugNoCameraShutOut(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugNoCameraShake();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugCameraSelectDamageBeatType(bool bOn);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraNormalDefault(ATresCameraNormal* Camera);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraHe02WallParam(FRotator WorldBaseRot, float U_Distance, FRotator U_Rotation, FVector U_TargetOffset, FVector U_TargetLocalOffset, FVector U_CameraLocalOffset, float U_LerpTime, float L_Distance, FRotator L_Rotation, FVector L_TargetOffset, FVector L_TargetLocalOffset, FVector L_CameraLocalOffset, float L_LerpTime, float R_Distance, FRotator R_Rotation, FVector R_TargetOffset, FVector R_TargetLocalOffset, FVector R_CameraLocalOffset, float R_LerpTime, float D_Distance, FRotator D_Rotation, FVector D_TargetOffset, FVector D_TargetLocalOffset, FVector D_CameraLocalOffset, float D_LerpTime, float D_RollMin, float D_RollMax, float D_TimeMin, float D_TimeMax, TSubclassOf<UCameraShake> CameraShake);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraHe02WallDistance(float Distance, float Time);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetOverrideCameraSize(float Size);
    
    UFUNCTION(BlueprintCallable)
    bool BP_IsInViewport(ATresCameraBase* Camera, FVector TargetPos, float TargetSize);
    
    UFUNCTION(BlueprintCallable)
    bool BP_IsCameraSwitchingInterpolation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsCameraDamageBeatDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresCameraBase* BP_GetOldCamera() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_GetInputCameraViewPoint(FVector& OutLocation, FRotator& OutRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BP_GetCameraViewPoint(FVector& OutCamLoc, FRotator& OutCamRot) const;
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableTresCameraWall(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableTresCameraHe02Wall(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableCameraDamageBeatDirection(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_CancelCameraInterpolation();
    
};

