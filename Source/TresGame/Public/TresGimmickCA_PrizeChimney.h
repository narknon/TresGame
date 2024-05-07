#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "CAPrizeChimneyParam.h"
#include "TresGimmickCA_PrizeChimney.generated.h"

class ATresGimmickCA_PrizeChimneyGroup;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresGimmickCA_PrizeChimney : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresGimmickCA_PrizeChimneyGroup* m_GroupOwner;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCAPrizeChimneyParam m_Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_SmokeParticleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_SmokeFinishParticleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_EffectOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_PrizeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_SmokeParticleComponent;
    
public:
    ATresGimmickCA_PrizeChimney(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool TryActivateChimneyGimmick(bool bResetHitPoint);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnHitPointZero();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHitPointZero() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivatedGimmick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHitPoint() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateChimneyGimmick();
    
};

