#pragma once
#include "CoreMinimal.h"
#include "TresDarkHomingProjectileNum_e_dw407.h"
#include "TresDarkHomingProjectileNumParams_e_dw407.generated.h"

USTRUCT(BlueprintType)
struct FTresDarkHomingProjectileNumParams_e_dw407 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDarkHomingProjectileNum_e_dw407> m_SpawnProjectileNumParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsUseIntervalGameLevelParam: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsUseSpeedGameLevelParam: 1;
    
    TRESGAME_API FTresDarkHomingProjectileNumParams_e_dw407();
};

