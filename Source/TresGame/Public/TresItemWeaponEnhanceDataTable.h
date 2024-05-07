#pragma once
#include "CoreMinimal.h"
#include "TresItemSynthesisDataTableBase.h"
#include "ETresItemDefWeapon.h"
#include "ETresAbilityKind.h"
#include "TresItemWeaponEnhanceDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresItemWeaponEnhanceDataTable : public FTresItemSynthesisDataTableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_FlagIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefWeapon m_WeaponID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bInitAchieved: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WeaponLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AttackPlus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MagicPlus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresAbilityKind m_AppendAbility;
    
    TRESGAME_API FTresItemWeaponEnhanceDataTable();
};

