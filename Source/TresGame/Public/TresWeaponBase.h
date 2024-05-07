#pragma once
#include "CoreMinimal.h"
#include "ESQEX_OverwriteDiscrenment.h"
#include "ESQEX_ShadowQuality.h"
#include "TresPawnBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_OverwriteDiscrenment -FallbackName=ESQEX_OverwriteDiscrenment
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_ShadowQuality -FallbackName=ESQEX_ShadowQuality
#include "TresWeaponBase.generated.h"

class USQEXSEADSoundReferenceEnumSet;
class UTresEffectAttachComponent;
class UTresWeaponMovementComponent;
class UTresSkeletalMeshComponent;
class UTresAtkCollComponent;
class UTresChrDataTableSet;
class UParticleSystem;
class USQEX_ParticleAttachDataAsset;
class USceneComponent;
class UParticleSystemComponent;
class USQEX_KBD_Component;

UCLASS(Abstract, Blueprintable)
class TRESGAME_API ATresWeaponBase : public ATresPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresWeaponMovementComponent* MyMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresAtkCollComponent* MyAtkColl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresEffectAttachComponent* MyEffectAtt;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresPawnBase* MyPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MuzzleAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_AppearEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AppearEffectAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AppearVisibleDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bIsEnableAppearScaleAnim: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bIsDelayAppearScaleAnim: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AppearScaleAnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AppearScaleAnimStartScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bIsEnableAppearDitherAnim: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bIsDelayAppearDitherAnim: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AppearDitherAnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AppearDitherAnimStartValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_DisappearEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DisappearEffectAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DisappearVisibleDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bIsEnableDisappearScaleAnim: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DisappearScaleAnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DisappearScaleAnimEndScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bIsEnableDisappearDitherAnim: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DisappearDitherAnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DisappearDitherAnimEndValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DisappearWithScaleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DestroyScaleAnimEndScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_CmnMagicCastEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_CmnBadStatesEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_CmnChargeEffect;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_CmnStyleChangeChargeEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pDrainEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pShootFlowEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSoundReferenceEnumSet* m_SoundAssets_Hit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSoundReferenceEnumSet* m_SoundAssets_Swing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bEnableMapCollisionOnFreeMove: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_DisableOverwriteMeshOrgOverwriteDiscrenment: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bIsNotifyOnlyVisible: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* m_EquipAttachParent;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresChrDataTableSet* m_pOwnerDataTableSet;
    
    UPROPERTY(DuplicateTransient, EditAnywhere, Transient)
    TEnumAsByte<ESQEX_OverwriteDiscrenment> m_MeshOrgOverwriteDiscrenment;
    
    UPROPERTY(DuplicateTransient, EditAnywhere, Transient)
    TEnumAsByte<ESQEX_ShadowQuality> m_MeshOrgShadowQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_pDisappearEffect;
    
public:
    ATresWeaponBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresPawnBase* GetPawnOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USQEX_KBD_Component* GetKBDComponent() const;
    
};

