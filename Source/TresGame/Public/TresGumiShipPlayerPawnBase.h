#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipCharaPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ETresGumiShipPlayerMovementType.h"
#include "ETresGumiShipPlayerAccelerationType.h"
#include "TresGumiShipPlayerPawnBase.generated.h"

class UTresGumiShipPlayerAccelerationBase;
class UTresGumiShipPlayerMovementCompoBase;
class UTresGumiShipFSM;
class UTresGumiShipSoundSetComponent;
class UTresGumiShipPlayerSpringArmCompo;
class UTresGumiShipEffectSetComponent;
class UTresPlayerStateEventComponent;
class AActor;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipPlayerPawnBase : public ATresGumiShipCharaPawnBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresGumiShipChangeSpeed, const float, fOldSeed, const float, fNewSpeed, const float, fRatio);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGumiShipChangeAccelCompo, UTresGumiShipPlayerAccelerationBase*, pCompo);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipChangeAccelCompo m_OnChangeAccelCompoDispather;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipChangeSpeed m_OnChangeSpeedDispather;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipFSM* m_pFSM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipSoundSetComponent* m_pSoundSet;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipPlayerMovementCompoBase* m_pMovementCompo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipPlayerAccelerationBase* m_pAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipPlayerSpringArmCompo* m_pCameraSpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipEffectSetComponent* m_pEffectSet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresPlayerStateEventComponent* m_pStateEvent;
    
public:
    ATresGumiShipPlayerPawnBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetOutsideMaxSpeed(float fSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementEnable(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void SetEventMode(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void SetAccelerationEnable(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void ResetOutsideMaxSpeed();
    
    UFUNCTION(BlueprintCallable)
    void RequestWarp(const FVector vLocation, const FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void RequestStop(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void RequestMaxSpeed();
    
    UFUNCTION(BlueprintCallable)
    void RequestForceStop(bool bIn);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool RemoteGumiShipPlayerStateEvent(FName EventName, AActor* inActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvoiding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresGumiShipPlayerMovementType GetPrevMovementType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresGumiShipPlayerMovementType GetMovementType() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void _UndoMovementCompo(const bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void _SetCameraLagEnable(bool bLocation, bool bRotation);
    
    UFUNCTION(BlueprintCallable)
    void _SetCameraControllEnable(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void _SetAvoiding(bool bIn);
    
    UFUNCTION(BlueprintCallable)
    void _RequestCameraReset(const bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void _OnChnageSpeed(const float fOldSeed, const float fNewSpeed, const float fRatio);
    
    UFUNCTION(BlueprintCallable)
    void _ChangeMovementCompo(const ETresGumiShipPlayerMovementType eType, const bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void _ChangeAccelerationCompo(const ETresGumiShipPlayerAccelerationType eType, const bool bForce);
    
};

