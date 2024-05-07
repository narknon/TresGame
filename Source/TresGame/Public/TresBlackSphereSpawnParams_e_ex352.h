#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TresBlackSphereSpawnParams_e_ex352.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FTresBlackSphereSpawnParams_e_ex352 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_SpawnBlackSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_AttackTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_FiringAngle;
    
    TRESGAME_API FTresBlackSphereSpawnParams_e_ex352();
};

