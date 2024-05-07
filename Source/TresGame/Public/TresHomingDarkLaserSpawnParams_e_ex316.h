#pragma once
#include "CoreMinimal.h"
#include "TresHomingDarkLaserSpawnParams_e_ex316.generated.h"

USTRUCT(BlueprintType)
struct FTresHomingDarkLaserSpawnParams_e_ex316 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpawnMinRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpawnMaxRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpawnMinHieght;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpawnMaxHeight;
    
    TRESGAME_API FTresHomingDarkLaserSpawnParams_e_ex316();
};

