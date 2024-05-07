#pragma once
#include "CoreMinimal.h"
#include "TresCameraBase.h"
#include "ETresCameraTargetWallCheckType.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraTargetInfo.h"
#include "UObject/NoExportTypes.h"
#include "TresCameraTarget.generated.h"

class AActor;
class ATresAccompanyPawnBase;
class UTresLockonTargetComponent;

UCLASS(Abstract, Blueprintable)
class ATresCameraTarget : public ATresCameraBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_LookPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_CameraLocalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresCameraTargetInfo m_TargetInfo;
    
public:
    ATresCameraTarget(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetTresCameraTargetInfluenceRotationValue(bool bYaw, bool bPitch, bool bRoll, FRotator TargetRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetTresCameraTargetInfluenceRotation(bool bAlways, float AlWaysTime, bool bYaw, bool bPitch, bool bRoll);
    
    UFUNCTION(BlueprintCallable)
    void SetTresCameraTargetInfluenceLocationXYZ(bool bAlwaysXY, bool bAlwaysZ);
    
    UFUNCTION(BlueprintCallable)
    void SetTresCameraTargetInfluenceLocation(bool bAlways);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetBoneName(FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetOutsideWallCheckType(TEnumAsByte<ETresCameraTargetWallCheckType> WallCheckType, FVector TargetPos, FName TargetBoneName, ATresAccompanyPawnBase* TargetAccompanyPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTargetOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetTargetLocalOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTargetBoneName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDefaultTargetOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDefaultTargetLocalOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDefaultCameraLocalOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCameraLocalOffset() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableCollision(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTresCameraLocalOffset(FVector CameraLocalOffset, float Time);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTargetOffset(FVector TargetOffset, float Time);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTargetLocalOffset(FVector TargetLocalOffset, float Time);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTargetComponent(UTresLockonTargetComponent* pTargetComp);
    
    UFUNCTION(BlueprintCallable)
    void BP_RemoveCollisionIgnoredActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsAttachTresCameraTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_AttachTresCameraTarget(bool bAttach);
    
    UFUNCTION(BlueprintCallable)
    void BP_AddCollisionIgnoredActor(AActor* Actor);
    
};

