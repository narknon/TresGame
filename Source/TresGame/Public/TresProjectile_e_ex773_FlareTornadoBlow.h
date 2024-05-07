#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileBase.h"
#include "TresEnemyEx773_BlowParam.h"
#include "TresProjectile_e_ex773_FlareTornadoBlow.generated.h"

class UParticleSystem;
class ATresActor_e_ex773_Attract;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex773_FlareTornadoBlow : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx773_BlowParam> m_BlowParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_BlowEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresActor_e_ex773_Attract> m_pro_BlowClass;
    
    ATresProjectile_e_ex773_FlareTornadoBlow(const FObjectInitializer& ObjectInitializer);
};

