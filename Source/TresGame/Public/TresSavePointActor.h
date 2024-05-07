#pragma once
#include "CoreMinimal.h"
#include "TresPlayerStart.h"
#include "TresReactorComponentInterface.h"
#include "ETresSavePointDispType.h"
#include "TresReactorDoCommandSignatureDelegate.h"
#include "TresSavePointActivateSignatureDelegate.h"
#include "TresSavePointActor.generated.h"

class UTresMapMarkerComponent;
class UTresSavePointRecoverComponent;
class UTresReactorComponent;
class UParticleSystem;
class UParticleSystemComponent;
class ATresCharPawnBase;

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresSavePointActor : public ATresPlayerStart, public ITresReactorComponentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* MyReactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSavePointRecoverComponent* MyRecover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresMapMarkerComponent* MyMapMarker;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bAutoActivate: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bGimmickComponentAutoLinkActivate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsActive: 1;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 m_bIsAccessed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bLimitedSavePoint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_BaseEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_LimitBaseEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_BodyEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_LimitBodyEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_HealEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ClipOutDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_pBaseEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_pBodyEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_pHealEffect;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pCheckPawn;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresReactorDoCommandSignature OnReactorDoCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresSavePointActivateSignature OnGimmickActivate;
    
    ATresSavePointActor(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveGimmickActivate(bool bEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnChangeSavePointDispType(ETresSavePointDispType InDispType);
    
    UFUNCTION(BlueprintCallable)
    void OnChangePlayerArtsMode(bool bIsArtsMode);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeCinematicMode(bool bIsCinematicMode);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeBattleMode(bool bIsBattleMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void BP_SetDisableMode(bool bIsDisable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsGimmickActive() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_DeactivateGimmickComponentAll();
    
    UFUNCTION(BlueprintCallable)
    void BP_DeactivateGimmick();
    
    UFUNCTION(BlueprintCallable)
    void BP_ActivateGimmickComponentAll();
    
    UFUNCTION(BlueprintCallable)
    void BP_ActivateGimmick();
    
    
    // Fix for true pure virtual functions not being implemented
};

