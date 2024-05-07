#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_e_ex355_Claymore_Base.h"
#include "EX355_ThrowInfoSet.h"
#include "TresProjectile_e_ex355_Claymore_Throw.generated.h"

class AActor;
class UTresLockonTargetComponent;
class UEnvQuery;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex355_Claymore_Throw : public ATresProjectile_e_ex355_Claymore_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX355_ThrowInfoSet m_ThrowInfoSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_LockonComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDebugDispRotateVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCurrentHomingRotateVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_EQS_ThrowSpawn;
    
    ATresProjectile_e_ex355_Claymore_Throw(const FObjectInitializer& ObjectInitializer);
};

