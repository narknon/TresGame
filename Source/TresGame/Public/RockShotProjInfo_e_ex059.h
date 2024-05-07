#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RockShotProjInfo_e_ex059.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FRockShotProjInfo_e_ex059 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxShotPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinShotPitch;
    
    TRESGAME_API FRockShotProjInfo_e_ex059();
};

