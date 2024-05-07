#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCameraRotTarget.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraNormal.generated.h"

class UObject;
class ATresCameraNormal;

UCLASS(Blueprintable)
class ATresCameraNormal : public ATresCameraRotTarget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LimitPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LimitPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LimitYawMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bLimitYawBase: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TargetMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WallDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AutoTurningPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MoveRotationWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bMoveRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bWorldBaseRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_NonBattleRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NonBattleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NearDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NearTargetOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_NearTargetOffsetZDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LockonLimitPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LockonLimitPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LockonLimitYawMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotationSpeedMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotationSpeedMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotationSpeedMaxRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_LockonRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bLockonMoveRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LockonAutoRotationLowDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LockonAutoRotationHighDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bLockonAutoRotationDist3: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bLockonTargetOffset: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LockonTargetOffsetZ;
    
public:
    ATresCameraNormal(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetLimitPitch(float Min, float Max);
    
    UFUNCTION(BlueprintCallable)
    void SetAimRotation(FRotator Rot, bool bWorld, float Time);
    
    UFUNCTION(BlueprintCallable)
    static ATresCameraNormal* BP_SpawnTresCameraNormal(UObject* WorldContextObject, TSubclassOf<ATresCameraNormal> CameraClass, const FName CameraName);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTargetMaxSpeed(float TargetMaxSpeed);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetLockonLimitYaw(float LimitYaw);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetLockonDistance(float Distance, float Time);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetLockonBaseRotation(FRotator BaseRotation, bool bWorldPitch, bool bApplyAllPitch, bool bForce, float Time);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetAutoTurningPower(float TurningPower);
    
    UFUNCTION(BlueprintCallable)
    void BP_ResetLockonLimitYaw();
    
    UFUNCTION(BlueprintCallable)
    void BP_ResetLockonDistance(float Time);
    
    UFUNCTION(BlueprintCallable)
    void BP_ResetLockonBaseRotation(bool bForce, float Time);
    
    UFUNCTION(BlueprintCallable)
    bool BP_IsLockon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BP_GetLockonDistance() const;
    
    UFUNCTION(BlueprintCallable)
    FRotator BP_GetLockonBaseRotation();
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableWorldBaseRotation(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableMoveRotation(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableLockonMoveRotation(bool bEnable);
    
};

