#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyEx771_FlareAttractParam.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex771_FlareOmen.generated.h"

class ATresActor_e_ex771_Attract;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex771_FlareOmen : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx771_FlareAttractParam> m_AttractParamArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresActor_e_ex771_Attract> m_pro_AttractClass;
    
public:
    ATresProjectile_e_ex771_FlareOmen(const FObjectInitializer& ObjectInitializer);
};

