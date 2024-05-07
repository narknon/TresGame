#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresAnimInterface.h"
#include "TresNotifyInterface.h"
#include "TresEquipmentAssetUnit.h"
#include "TresEquipmentAccompanyPawnAssetUnit.h"
#include "TresEquipWeaponSlotWork.h"
#include "TresEquipmentComponent.generated.h"

class UTresWearformSet;
class ATresPawnBase;
class USkeletalMeshComponent;
class ATresWeaponBase;
class UTresWeaponSet;
class UTresFormAbilitySet;
class UTresPlayerMagicSet;
class UTresProjectileSet;
class USQEX_ParticleAttachDataAsset;
class UTresChrBaseParam;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresEquipmentComponent : public UActorComponent, public ITresAnimInterface, public ITresNotifyInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresPawnBase* m_AttachPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_AttachSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATresWeaponBase*> m_WeaponEquips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresWeaponSet* MyWeaponSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bIsFixedEquip: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEquipmentAssetUnit> m_FixedEquips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresWearformSet* m_WearformSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresFormAbilitySet* m_FormAbilityAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresPlayerMagicSet* m_MagicSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresProjectileSet* m_ProjectileSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_CmnFormChangeChargeEffect;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresPlayerMagicSet* m_ReplaceMagicSet;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresProjectileSet* m_ReplaceProjectileSet;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTresEquipmentAccompanyPawnAssetUnit> m_ReplaceAccompanyPawnAsset;
    
    UPROPERTY(EditAnywhere, Transient)
    FTresEquipWeaponSlotWork m_EquipSlots[3];
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresChrBaseParam* m_pBaseParam;
    
public:
    UTresEquipmentComponent();
    
    // Fix for true pure virtual functions not being implemented
};

