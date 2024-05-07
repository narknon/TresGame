#pragma once
#include "CoreMinimal.h"
#include "BX901_RailSlideProjectileInfo.h"
#include "BX901_DarkCubeMineInfo.h"
#include "BX901_DarkCubeMineProjInfo.generated.h"

USTRUCT(BlueprintType)
struct FBX901_DarkCubeMineProjInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBX901_RailSlideProjectileInfo m_RailSlideProjInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBX901_DarkCubeMineInfo m_ProjInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSpawnDelayTime;
    
    TRESGAME_API FBX901_DarkCubeMineProjInfo();
};

