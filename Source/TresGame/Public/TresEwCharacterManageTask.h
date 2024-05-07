#pragma once
#include "CoreMinimal.h"
#include "TresTaskBase.h"
#include "TresEwCharacterManageTask.generated.h"

class UParticleSystemComponent;
class UTresEwOpacityListAsset;

UCLASS(Blueprintable)
class UTresEwCharacterManageTask : public UTresTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresEwOpacityListAsset* m_OpacityListAsset;
    
public:
    UTresEwCharacterManageTask();
    UFUNCTION(BlueprintCallable)
    void SetPlayerAlpha(float Rate, int32 Num, bool bCash);
    
    UFUNCTION(BlueprintCallable)
    void SetOpacityListAsset(UTresEwOpacityListAsset* Asset);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachPlayerParticle(UParticleSystemComponent* Particle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExistNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCreateNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCashRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCashNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystemComponent* GetAttachPlayerParticle();
    
    UFUNCTION(BlueprintCallable)
    void EnableOpacity(bool bEnable, bool bComplete, int32 randPaternNum);
    
};

