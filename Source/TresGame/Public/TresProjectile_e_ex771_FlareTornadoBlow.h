#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileBase.h"
#include "TresEnemyEx771_BlowParam.h"
#include "TresProjectile_e_ex771_FlareTornadoBlow.generated.h"

class UParticleSystem;
class ATresActor_e_ex771_Attract;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex771_FlareTornadoBlow : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx771_BlowParam> m_BlowParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_BlowEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresActor_e_ex771_Attract> m_pro_BlowClass;
    
    ATresProjectile_e_ex771_FlareTornadoBlow(const FObjectInitializer& ObjectInitializer);
};

