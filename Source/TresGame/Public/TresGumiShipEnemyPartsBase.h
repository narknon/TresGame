#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipCharaPawnBase.h"
#include "TresGumiShipEnemyPartsBase.generated.h"

class ATresGumiShipEnemyPawnBase;
class USQEX_ParticleAttachDataAsset;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipEnemyPartsBase : public ATresGumiShipCharaPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_EnemyPartsID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_pEffectAttachDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUsingAutoDestorySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDestoryWithMeshFadeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPartsDestoryFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPartsMeshHideDelayTime;
    
public:
    ATresGumiShipEnemyPartsBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetLockOnPermissionAll(bool LockOnEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachEffectsVisibility(bool Visibility);
    
    UFUNCTION(BlueprintCallable)
    void SetAllMeshVisibility(bool Visibility);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockOnPermissionOK() const;
    
    UFUNCTION(BlueprintCallable)
    void HideEnemyParts(bool HiddenEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresGumiShipEnemyPawnBase* GetPartsOwnerEnemy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetEnemyPartsID() const;
    
};

