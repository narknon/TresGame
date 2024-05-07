#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_e_ex358_Base.h"
#include "ETresEnemyNaruikazuchi_e_ex358.h"
#include "TresNaruikazuchiProjectileGenerateParam.h"
#include "TresAttack4_e_ex358_Naruikazuchi.generated.h"

class ATresProjectileManager_e_ex358_Naruikazuchi;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack4_e_ex358_Naruikazuchi : public UTresAttack_e_ex358_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemyNaruikazuchi_e_ex358::Type> m_NaruikazuchiType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileManager_e_ex358_Naruikazuchi> m_ProjectileManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ProjectileGenerateStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresNaruikazuchiProjectileGenerateParam m_ProjectileGenerateParam;
    
public:
    UTresAttack4_e_ex358_Naruikazuchi();
};

