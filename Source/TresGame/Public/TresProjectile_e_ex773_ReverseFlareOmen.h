#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex773_ReverseFlareOmen.generated.h"

class ATresActor_e_ex773_Attract;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex773_ReverseFlareOmen : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresActor_e_ex773_Attract> m_pro_AttractClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BombTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttractTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttractRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttractForce;
    
public:
    ATresProjectile_e_ex773_ReverseFlareOmen(const FObjectInitializer& ObjectInitializer);
};

