#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresParamProjectileComboHitSoloParam.h"
#include "UObject/NoExportTypes.h"
#include "TresParamProjectileComboHit.generated.h"

class ATresProjectile_e_ex773_ComboHit;

USTRUCT(BlueprintType)
struct FTresParamProjectileComboHit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectile_e_ex773_ComboHit> GeneratedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresParamProjectileComboHitSoloParam> SpawnParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BaseAtkId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastAtkId;
    
    TRESGAME_API FTresParamProjectileComboHit();
};

