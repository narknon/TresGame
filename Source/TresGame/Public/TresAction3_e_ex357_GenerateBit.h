#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresBitGenerateParam_e_ex357.h"
#include "TresAction_e_ex357_Base.h"
#include "TresBitMoveParam_e_ex357.h"
#include "TresBitAttackParam_e_ex357.h"
#include "TresAction3_e_ex357_GenerateBit.generated.h"

class ATresEnemyPawn_e_ex357_Bit;

UCLASS(Blueprintable, HideDropdown)
class UTresAction3_e_ex357_GenerateBit : public UTresAction_e_ex357_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyPawn_e_ex357_Bit> m_BitClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresBitGenerateParam_e_ex357 m_BitGenerateParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresBitMoveParam_e_ex357 m_BitMoveParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresBitAttackParam_e_ex357 m_BitAttackParam;
    
public:
    UTresAction3_e_ex357_GenerateBit();
};

