#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresWeaponAttack_e_ex367_PillarPatternAttack.generated.h"

class USoundBase;

UCLASS(Blueprintable, HideDropdown)
class UTresWeaponAttack_e_ex367_PillarPatternAttack : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_patternID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_VoiceSEAssetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_VoiceSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayVoiceRate;
    
    UTresWeaponAttack_e_ex367_PillarPatternAttack();
};

