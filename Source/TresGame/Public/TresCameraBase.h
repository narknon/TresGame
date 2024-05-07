#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ViewTargetTransitionParamsEx -FallbackName=ViewTargetTransitionParamsEx
#include "GameFramework/Actor.h"
#include "Camera/PlayerCameraManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EViewTargetBlendInterpYaw -FallbackName=EViewTargetBlendInterpYaw
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EViewTargetBlendInterp -FallbackName=EViewTargetBlendInterp
#include "ViewTargetTransitionParamsEx.h"
#include "Engine/Scene.h"
#include "TresCameraBase.generated.h"

class UTresLockonTargetComponent;
class UCameraComponent;
class ATresCameraManager;
class APlayerController;
class ATresCameraBase;
class UObject;

UCLASS(Abstract, Blueprintable)
class ATresCameraBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* m_CameraComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCameraManager* m_CameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* m_PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCameraManager* m_SpawnCameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_LockonTargetCmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraBase> m_CameraLocClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCameraBase* m_CameraLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCameraBase* m_LockonParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CurrentDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotationSpeedX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotationSpeedY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AnalogStickPlayX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AnalogStickPlayY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPositionLerpLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPositionLerpPer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRotationLerpPer;
    
public:
    ATresCameraBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void StartTresCamera(bool bTakeover, FViewTargetTransitionParamsEx TransitionParams);
    
    UFUNCTION(BlueprintPure)
    static FViewTargetTransitionParamsEx SetTresCameraTransitionParams(float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing, TEnumAsByte<EViewTargetBlendInterp> BlendInterp, TEnumAsByte<EViewTargetBlendInterpYaw> BlendInterpYaw, bool bBlendPostProcess);
    
    UFUNCTION(BlueprintCallable)
    void SetPriority(int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    void SetNearClipPlane(float NearClipPlane, float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetFieldOfView(float FieldOfView, float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetFarCullingPlane(float FarCullingPlane, float Time);
    
    UFUNCTION(BlueprintCallable)
    void ResetCamera(bool bForce);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNearClipPlane() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFieldOfView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFarCullingPlane() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultNearClipPlane() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultFieldOfView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultFarCullingPlane() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCameraComponent* GetCameraComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void EndTresCamera(bool bTakeover, FViewTargetTransitionParamsEx TransitionParams);
    
    UFUNCTION(BlueprintCallable)
    void BP_SettingTresCamera(AActor* TargetActor, APlayerController* PlayerController, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetRotationLerpCoefficient(float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetPostProcessBlendWeight(float Rate, float Time);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetPositionLerpCoefficient(float Coefficient, float DistanceLimitter);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetMotionBlur(float Intensity, float Max, float PerObjectSize);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetLockonCameraClass(TSubclassOf<ATresCameraBase> pLockonCameraClass);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetLerpCoefficient(float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetDistanceLerpCoefficient(float Coefficient);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetDepthOfField(TEnumAsByte<EDepthOfFieldMethod> Method, float FocalDistance, float Time0, float FocalRegion, float Time1, float NearTransitionRegion, float Time2, float FarTransitionRegion, float Time3, float Scale, float Time4, float MaxBokehSize, float Time5, float NearBlurSize, float Time6, float FarBlurSize, float Time7);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetCameraName(const FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetAmbientOcclusion(float Intensity, float TimeIntensity, float Radius, float TimeRadius);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetActionPriority();
    
    UFUNCTION(BlueprintCallable)
    void BP_ResetRotationLerpCoefficient();
    
    UFUNCTION(BlueprintCallable)
    void BP_ResetPositionLerpCoefficient();
    
    UFUNCTION(BlueprintCallable)
    void BP_ResetDistanceLerpCoefficient();
    
    UFUNCTION(BlueprintCallable)
    bool BP_IsLockonCamera();
    
    UFUNCTION(BlueprintCallable)
    float BP_GetCurrentDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BP_GetActionPriority();
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableMotionBlur(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableKeepChangeRotation(bool bEnable, float KeepTime);
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableInterpCollision(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableDepthOfField(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableControllerInput(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableAmbientOcclusion(bool bEnable);
    
};

