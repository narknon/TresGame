#pragma once
#include "CoreMinimal.h"
#include "TresDarkLaserSpawnParams_e_ex352.h"
#include "TresHomingDarkLaserSpawnParams_e_ex352.generated.h"

USTRUCT(BlueprintType)
struct FTresHomingDarkLaserSpawnParams_e_ex352 : public FTresDarkLaserSpawnParams_e_ex352 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SpawnNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SpawnSameTimeNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpawnMinRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpawnMaxRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpawnMinHieght;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpawnMaxHeight;
    
    TRESGAME_API FTresHomingDarkLaserSpawnParams_e_ex352();
};

