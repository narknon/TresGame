#pragma once
#include "CoreMinimal.h"
#include "ETresSpawnPointSize.h"
#include "ETresSpawnPointBuildMethod.h"
#include "TresSpawnPointBuildSettings.generated.h"

USTRUCT(BlueprintType)
struct FTresSpawnPointBuildSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresSpawnPointSize m_Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresSpawnPointBuildMethod m_Method;
    
    TRESGAME_API FTresSpawnPointBuildSettings();
};

