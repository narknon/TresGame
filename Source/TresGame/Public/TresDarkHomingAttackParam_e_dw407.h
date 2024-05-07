#pragma once
#include "CoreMinimal.h"
#include "TresDarkHomingProjectileNumParams_e_dw407.h"
#include "TresDarkHomingProjectileParam_e_dw407.h"
#include "TresDarkHomingAttackParam_e_dw407.generated.h"

USTRUCT(BlueprintType)
struct FTresDarkHomingAttackParam_e_dw407 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TimeUntilSpawnProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDarkHomingProjectileNumParams_e_dw407> m_SpawnProjectileParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpawnProjectileInterval;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float m_GameLevelMinSpawnProjectileInterval[4];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float m_GameLevelMaxSpawnProjectileInterval[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TimeUntilReStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EnableBackwardParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ProjectileSpeed;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float m_GameLevelMinProjectileSpeed[4];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float m_GameLevelMaxProjectileSpeed[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresDarkHomingProjectileParam_e_dw407 m_ForwardProjectileParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresDarkHomingProjectileParam_e_dw407 m_BackwardProjectileParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HomingMaxAngle;
    
    TRESGAME_API FTresDarkHomingAttackParam_e_dw407();
};

