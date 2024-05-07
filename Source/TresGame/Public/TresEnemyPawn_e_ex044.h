#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_ex044.generated.h"

class ATresPlayerPawnBase;
class UTresPoleComponent;
class ATresGimmickBxStepBanAsset;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex044 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vRootLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_rRot;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vNorm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPipeVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresPlayerPawnBase* m_pPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresPoleComponent* m_pPoleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxPitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinPitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPoleTurnChangeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPoleTurnUnderHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPoleTurnTopHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxPipeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAIPawnOnWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPitchVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPitchAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPitchDamp1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPitchDamp2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPitchChangeDampAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPitchAccept;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPitchVib;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fYawVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fYawAccel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fYawDamp1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fYawDamp2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fYawChangeDampAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fYawAccept;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fYawVib;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresGimmickBxStepBanAsset*> m_GimmickArray;
    
    ATresEnemyPawn_e_ex044(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool IsPlayerPoleTurning();
    
    UFUNCTION(BlueprintCallable)
    bool IsOnWall();
    
    UFUNCTION(BlueprintCallable)
    bool IsOnAIPoint();
    
    UFUNCTION(BlueprintCallable)
    float GetNormHeightFromWorldPositionWithinPipe(FVector InPos, float inUnder, float inTop);
    
    UFUNCTION(BlueprintCallable)
    float GetNormHeightFromWorldPosition(FVector InPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetDirection();
    
    UFUNCTION(BlueprintCallable)
    FVector GetBodyLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator FindRotationBetweenVectors(const FVector& From, const FVector& To);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyPipeCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Code_CheckHeight(float inHeight, float inPletTurnRadius, bool& outResult, float& outMaxHeight);
    
    UFUNCTION(BlueprintCallable)
    void ActivatePoleComp(bool bActive);
    
};

