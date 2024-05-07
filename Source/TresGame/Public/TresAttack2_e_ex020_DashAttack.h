#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionDash.h"
#include "TresAttack_e_ex020_ReflectInterface.h"
#include "UObject/NoExportTypes.h"
#include "ETresSoundAliasLabel_WeaponHit.h"
#include "TresAttack2_e_ex020_DashAttack.generated.h"

class USoundBase;
class UAnimSequenceBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack2_e_ex020_DashAttack : public UTresAttackDefinitionDash, public ITresAttack_e_ex020_ReflectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionGrpName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AttackDataIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverrideHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_HitEffectGrpName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_HitSEAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresSoundAliasLabel_WeaponHit::Type> m_WeaponHitSEAliasID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bOverrideHitEffectColor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bOverrideHitEffectAlpha: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_OverrideHitEffectColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bTakeOverHitList: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TakeOverHitListGrpName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_WaitTimeAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WaitTime;
    
public:
    UTresAttack2_e_ex020_DashAttack();
    
    // Fix for true pure virtual functions not being implemented
};

