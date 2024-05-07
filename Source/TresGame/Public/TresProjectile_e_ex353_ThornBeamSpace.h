#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectile_e_ex353_Base.h"
#include "TresEnemyEx353ThornBeamProjectileInfo.h"
#include "TresEnemyEx353ThornBeamAfterHitInfo.h"
#include "TresProjectile_e_ex353_ThornBeamSpace.generated.h"

class ATresProjectile_e_ex353_ThornBeam;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable, HideDropdown)
class ATresProjectile_e_ex353_ThornBeamSpace : public ATresProjectile_e_ex353_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectile_e_ex353_ThornBeam> m_ThornBeamClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectile_e_ex353_ThornBeam> m_ThornBeamThornWildDanceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_ThornBeamSpaceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_AlreadyFireIndexList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_ThornBeamSpaceCmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx353ThornBeamProjectileInfo> m_ThornBeamProjectileInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEnemyEx353ThornBeamAfterHitInfo m_AfterHitInfo;
    
    ATresProjectile_e_ex353_ThornBeamSpace(const FObjectInitializer& ObjectInitializer);
};

