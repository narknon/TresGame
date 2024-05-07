#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "EX354_ArtemaWarpShotSequenceInfoSet.h"
#include "TresAttack15_e_ex354_SpawnArtemaWarpShotSequence.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack15_e_ex354_SpawnArtemaWarpShotSequence : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX354_ArtemaWarpShotSequenceInfoSet m_SequenceInfoSet;
    
    UTresAttack15_e_ex354_SpawnArtemaWarpShotSequence();
};

