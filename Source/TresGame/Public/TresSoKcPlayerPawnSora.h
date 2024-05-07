#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresPlayerPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresSoKcPlayerPawnSora.generated.h"

class UTresAnimSet;
class ATresSoKcKeyHoleGimmickActor;
class UParticleSystem;
class ATresCameraSoKc;
class ATresSoKcLightWaveProjectile;
class UCurveFloat;

UCLASS(Abstract, Blueprintable)
class ATresSoKcPlayerPawnSora : public ATresPlayerPawnBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FExecuteSpecificReactionCommandSignature, ATresSoKcKeyHoleGimmickActor*, TargetKeyHole);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDisplaySpecificReactionCommandSignature);
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDisplaySpecificReactionCommandSignature _OnDisplaySpecificReactionCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExecuteSpecificReactionCommandSignature _OnExecuteSpecificReactionCommand;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresAnimSet* m_pAppendAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pLightSphereEffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pKeyBladeBeamEffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCameraSoKc> m_CameraClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresSoKcLightWaveProjectile> m_LightWaveProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_pLastLightCameraRotationCurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCameraPitchUpperLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCameraPitchLowerLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_CameraRotationMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_CameraRotateAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_CameraRotateDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDefaultKeyBladeBeamLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vLightSphereEffectAttachOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDotRangeToTargetDirectionForAimInterp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDotRangeWithMovementDirectionForAimInterp;
    
public:
    ATresSoKcPlayerPawnSora(const FObjectInitializer& ObjectInitializer);
private:
    UFUNCTION(BlueprintCallable)
    void _SetUserControllPermission(bool bIsUserControllAccept);
    
    UFUNCTION(BlueprintCallable)
    void _DetachKeyBladeBeamEffect();
    
    UFUNCTION(BlueprintCallable)
    void _ChangeKeyHoleConnectMissionState();
    
};

