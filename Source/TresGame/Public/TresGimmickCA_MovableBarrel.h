#pragma once
#include "CoreMinimal.h"
#include "TresGimmickCA_TickControlInterface.h"
#include "TresCharPawnBase.h"
#include "TresGimmickDitherFadeInterface.h"
#include "CAMovableBarrelParam.h"
#include "ETresBodyPushPowerLevel.h"
#include "CAMovableBarrelPrizeParam.h"
#include "CAMovableBarrelRunAwayParam.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickCA_MovableBarrel.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresGimmickCA_MovableBarrel : public ATresCharPawnBase, public ITresGimmickCA_TickControlInterface, public ITresGimmickDitherFadeInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCAMovableBarrelParam m_Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCAMovableBarrelPrizeParam m_prizeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCAMovableBarrelRunAwayParam m_runAwayParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_DestroyEffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DestroyEffectSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresBodyPushPowerLevel m_PushPower;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FFloatInterval m_TickEnableRange;
    
public:
    ATresGimmickCA_MovableBarrel(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseNaviMeshCheck() const;
    
    UFUNCTION(BlueprintCallable)
    void SetUseNaviMeshCheck(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetStopMovement(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRunAwayFromPlayerMode(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDirectionChangeInterval(float Value);
    
    UFUNCTION(BlueprintCallable)
    bool RequestStartMove();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnHitPointZero();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStopMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunAwayFromPlayerMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDirectionChangeInterval() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

