#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "DebrisDetails_e_he903_DebrisAir.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FDebrisDetails_e_he903_DebrisAir {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_rShotAngleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHoming;
    
    TRESGAME_API FDebrisDetails_e_he903_DebrisAir();
};

